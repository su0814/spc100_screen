#include "mainwindow.h"
#include "my_can.h"
#include "my_tabbar.h"
#include "status.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QTimer>
MainWindow* MainWindow::my_ui = nullptr;
MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my_ui            = this;
    can_status_timer = new QTimer();
    connect(can_status_timer, &QTimer::timeout, this, &MainWindow::can_status_update_slot);
    ui_init();
    status_class = new status(this);
    ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);
    ui->tabWidget->setTabIcon(0, QIcon(":/new/photo/qrc/serial.png"));
    ui->tabWidget->setTabIcon(1, QIcon(":/new/photo/qrc/status.png"));
    ui->tabWidget->setTabIcon(2, QIcon(":/new/photo/qrc/sensor.png"));
    ui->tabWidget->setTabIcon(3, QIcon(":/new/photo/qrc/encode_qrc.png"));
    ui->tabWidget->setTabIcon(4, QIcon(":/new/photo/qrc/output.png"));
    ui->tabWidget->setTabIcon(5, QIcon(":/new/photo/qrc/error.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::my_message_box(QString title, QString text)
{
    static bool isshow_flag = false;
    if (!isshow_flag) {
        isshow_flag = true;
        QMessageBox box;
        box.setStyleSheet("QLabel{"
                          "min-width: 300px;"
                          "min-height: 300px; "
                          "font-size:20px;"
                          "}"
                          "QPushButton {"
                          "background-color:#89AFDE;"
                          " border-style: outset;"
                          " border-width: 10px;"
                          " border-radius: 20px;"
                          " border-color: beige;"
                          " font: bold 15px;"
                          " min-width: 15em;"
                          " min-height: 5em;"
                          "}"
                          "");
        box.setText(text);
        box.setWindowTitle(title);
        box.setWindowIcon(QIcon(":/new/photo/qrc/logo.png"));
        box.setIconPixmap(QPixmap(":/new/photo/qrc/logo.ico"));
        box.exec();
        isshow_flag = false;
    }
}

void MainWindow::can_errors_slot(QCanBusDevice::CanBusError error) const
{
    switch (error) {
    case QCanBusDevice::ReadError:
    case QCanBusDevice::WriteError:
    case QCanBusDevice::ConnectionError:
    case QCanBusDevice::ConfigurationError:
    case QCanBusDevice::UnknownError:
        ui->can_config_log_textBrowser->append("ERROR: " + m_canDevice->errorString());
        break;
    default:
        break;
    }
}

void MainWindow::can_status_update_slot()
{
    if (!m_canDevice || !m_canDevice->hasBusStatus()) {
        ui->can_config_log_textBrowser->append("ERROR: No CAN bus status available.");
        can_status_timer->stop();
        return;
    }
    switch (m_canDevice->busStatus()) {
    case QCanBusDevice::CanBusStatus::Good:
        ui->can_status_label->setText("CAN 总线状态: 正常.");
        break;
    case QCanBusDevice::CanBusStatus::Warning:
        ui->can_status_label->setText("CAN 总线状态: 警告.");
        break;
    case QCanBusDevice::CanBusStatus::Error:
        ui->can_status_label->setText("CAN 总线状态: 错误.");
        break;
    case QCanBusDevice::CanBusStatus::BusOff:
        ui->can_status_label->setText("CAN 总线状态: 关闭.");
        break;
    default:
        ui->can_status_label->setText("CAN 总线状态: 未知.");
        break;
    }
}

void MainWindow::can_disconnect()
{
    if (!m_canDevice) {
        return;
    }
    can_status_timer->stop();
    m_canDevice->disconnectDevice();
    ui->can_status_label->setText("CAN 总线状态: 离线.");
    char cmd[125];
    memset(cmd, 0, sizeof(cmd));
    snprintf(cmd, sizeof(cmd), "ifconfig can0 down");
    system(cmd);
    ui->can_config_log_textBrowser->append("INFO: Disconnect can device success");
    ui->slave_heartbeat_spinBox->setEnabled(true);
    ui->A_nodeid_spinBox->setEnabled(true);
    ui->B_nodeid_spinBox->setEnabled(true);
    ui->master_hearbeat_spinBox->setEnabled(true);
}

void MainWindow::can_connect()
{
    /* config can */
    char cmd[125];
    memset(cmd, 0, sizeof(cmd));
    snprintf(cmd, sizeof(cmd), "ifconfig can0 down && canconfig can0 bitrate %s ctrlmode triple-sampling on && ifconfig can0 up",
             ui->can_baudrate_comboBox->currentText().toUtf8().data());
    system(cmd);
    /* create sockeet connect */
    QString errorString;
    m_canDevice.reset(QCanBus::instance()->createDevice("socketcan", "can0", &errorString));
    if (!m_canDevice) {
        ui->can_config_log_textBrowser->append("ERROR: create socketcan device fail," + errorString);
        my_message_box("CAN config", "create socketcan device fail");
        return;
    }
    connect(m_canDevice.get(), &QCanBusDevice::framesReceived, this, &MainWindow::can_message_callback);
    connect(m_canDevice.get(), &QCanBusDevice::errorOccurred, this, &MainWindow::can_errors_slot);
    if (!m_canDevice->connectDevice()) {
        ui->can_config_log_textBrowser->append("ERROR: Connect can device fail");
        my_message_box("CAN config", "Connect can device fail");
        m_canDevice.reset();
        return;
    } else {
        m_canDevice->setConfigurationParameter(QCanBusDevice::BitRateKey, QVariant(250000));
        const QVariant bitRate = m_canDevice->configurationParameter(QCanBusDevice::BitRateKey);
        if (bitRate.isValid()) {
            ui->can_config_log_textBrowser->append("INFO: Can baudrate at " + ui->can_baudrate_comboBox->currentText() + " kBit/s");
        } else {
            ui->can_config_log_textBrowser->append("ERROR: Can baudrate bitrate invalid");
            my_message_box("CAN config", "Can baudrate bitrate invalid");
            return;
        }
        if (m_canDevice->hasBusStatus()) {
            can_status_timer->start(2000);
            ui->tabWidget->setCurrentIndex(1);
            ui->slave_heartbeat_spinBox->setEnabled(false);
            ui->A_nodeid_spinBox->setEnabled(false);
            ui->B_nodeid_spinBox->setEnabled(false);
            ui->master_hearbeat_spinBox->setEnabled(false);
        } else {
            ui->can_config_log_textBrowser->append("ERROR: no can bus status available");
        }
    }
}

void MainWindow::can_message_callback()
{
    if (!m_canDevice)
        return;

    while (m_canDevice->framesAvailable()) {
        const QCanBusFrame frame = m_canDevice->readFrame();

        QString view;
        if (frame.frameType() == QCanBusFrame::ErrorFrame) {
            view = m_canDevice->interpretErrorFrame(frame);
            ui->can_config_log_textBrowser->append("ERROR: " + view);
        }
        int        dlc  = frame.frameType() == QCanBusFrame::DataFrame ? frame.payload().size() : 0;
        QByteArray data = frame.payload();
        //        ui->can_config_log_textBrowser->append(QString::number(frame.frameId(), 16) + " - " + QString::number(dlc) + ":");
        //        QString str = data.toHex();
        //        ui->can_config_log_textBrowser->append(str);
        status_class->can_data_callback(frame.frameId(), dlc, data);
    }
}

void MainWindow::ui_init()
{
    uint32_t ctrl_height          = 20;
    uint32_t sounbox_photo_height = 30;
    uint32_t sounbox_photo_width  = 30;
    uint32_t font_size            = 14;
    ui->tabWidget->setStyleSheet(  // QSpinBox StyleSheet
        "QSpinBox { height: " + QString::number(ctrl_height)
        + "px; }"
          "QSpinBox { background-color: #f2f2f2; border-radius: 5px; border: 1px solid #e0e0e0; padding: 5px; color: "
          "#333333; font-size: "
        + QString::number(font_size)
        + "px;text-align: center;border-width: 2px;border-style: solid;border-color: "
          "rgb(200,200,255);border-top-left-radius: 12px;border-bottom-left-radius: 12px;border-top-right-radius: "
          "12px;border-bottom-right-radius: 12px;  }"
          "QSpinBox::up-arrow{ border: none; width:"
        + QString::number(sounbox_photo_width) + "px; height: " + QString::number(sounbox_photo_height)
        + "px; image: url(:/new/photo/qrc/add.png); }"
          "QSpinBox::down-arrow { border: none; width: "
        + QString::number(sounbox_photo_width) + "px; height: " + QString::number(sounbox_photo_height)
        + "px; image: "
          "url(:/new/photo/qrc/minus.png); }"
          "QSpinBox::up-button{ subcontrol-origin: padding; subcontrol-position: "
          "center right; border: none; width: "
          "15px; background-color: transparent; }"
          "QSpinBox::down-button { subcontrol-origin: padding; "
          "subcontrol-position: center left; border: none; width: "
          "15px; background-color: transparent; }"
          "QSpinBox::up-button:hover, QSpinBox::down-button:hover { "
          "background-color: #e0e0e0; }"
          // QGroupBox StyleSheet
          "QGroupBox{border: 2px solid gray;border-radius:10px;margin-top:2ex;font-family:微软雅黑;font:bold "
        + QString::number(font_size)
        + "px;}"
          "QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top center;padding:1px;}"
          // QComboBox StyleSheet
          "QComboBox {font-family:  Microsoft YaHei"
          ";font-size:"
        + QString::number(font_size) + "px;height: " + QString::number(ctrl_height)
        + "px;color: #000000;font-style: italic;font-weight: bold;padding-left: 10px;border-width: "
          "2px;border-style: solid;border-color: green;border-top-left-radius: "
        + QString::number(ctrl_height / 2) + "px;border-bottom-left-radius: " + QString::number(ctrl_height / 2)
        + "px;}"
          "QPushButton{ background-color: rgb(200,200,255);}"
        + "QProgressBar {border: 2px solid grey;border-radius: 10px;text-align: center;}"
        + "QProgressBar::chunk {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #71a2f9, stop:1 #bd3fef);border-radius: 8px; }");
    ui->A_nodeid_spinBox->setValue(81);
    ui->B_nodeid_spinBox->setValue(82);
    ui->slave_heartbeat_spinBox->setValue(1000);
    ui->master_hearbeat_spinBox->setValue(1000);
}

void MainWindow::on_can_config_pushButton_clicked()
{
    can_connect();
}

void MainWindow::on_start_slave_pushButton_clicked()
{
    if (!m_canDevice)
        return;
    QByteArray cmd;
    cmd.append(1);
    QCanBusFrame frame = QCanBusFrame(0, cmd);
    m_canDevice->writeFrame(frame);
}

void MainWindow::on_Can_disconnect_pushButton_clicked()
{
    can_disconnect();
}

void MainWindow::on_reset_data_pushButton_clicked()
{
    status_class->reset_ui_data();
}

void MainWindow::on_a_safe_status_checkBox_clicked(bool checked)
{
    ui->a_safe_status_checkBox->setChecked(!checked);
}

void MainWindow::on_b_safe_status_checkBox_clicked(bool checked)
{
    ui->b_safe_status_checkBox->setChecked(!checked);
}

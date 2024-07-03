#include "status.h"
#include "mainwindow.h"
#include <QBitmap>
#include <QDebug>
#include <QPainterPath>
#define LED_LEFT_DISTANCE  20
#define LED_RIGHT_DISTANCE LED_LEFT_DISTANCE
#define LED_UP_DISTANCE    0
#define LED_DOWN_DISTANCE  LED_UP_DISTANCE
#define LED_DIAMETER       200
#define TABLE_LINE_HEIGHT  40
#define TABLE_COL_WEIGHT   69
status::status(QWidget* parent)
    : QWidget { parent }
{
    ui         = MainWindow::my_ui->ui;
    mainwindow = ( MainWindow* )parent;
    status_ui_init();
}

void status::status_ui_init()
{
    reset_ui_data();
    rotation_time.setTimerType(Qt::PreciseTimer);
    connect(&rotation_time, &QTimer::timeout, this, &status::encode_rotation_slot);
    rotation_time.start(20);
    a_heartbeat_timer = new QTimer(this);
    a_heartbeat_timer->setSingleShot(true);
    connect(a_heartbeat_timer, &QTimer::timeout, this, &status::a_heartbeat_timeout_slot);
    b_heartbeat_timer = new QTimer(this);
    b_heartbeat_timer->setSingleShot(true);
    connect(a_heartbeat_timer, &QTimer::timeout, this, &status::b_heartbeat_timeout_slot);
}

void status::di_status_config(uint8_t mcu_id, uint16_t data, bool reset)
{
    if (mcu_id >= MCU_NUM) {
        return;
    }
    QLabel* led_label[2][12] = {
        { ui->switch1_a_label, ui->switch2_a_label, ui->switch3_a_label, ui->switch4_a_label, ui->switch5_a_label, ui->switch6_a_label, ui->switch7_a_label,
          ui->switch8_a_label, ui->switch9_a_label, ui->switch10_a_label, ui->switch11_a_label, ui->switch12_a_label },
        { ui->switch1_b_label, ui->switch2_b_label, ui->switch3_b_label, ui->switch4_b_label, ui->switch5_b_label, ui->switch6_b_label, ui->switch7_b_label,
          ui->switch8_b_label, ui->switch9_b_label, ui->switch10_b_label, ui->switch11_b_label, ui->switch12_b_label }
    };

    for (uint8_t i = 0; i < 12; i++) {
        QPixmap source_pix;
        if (reset) {
            source_pix.load(":/new/photo/qrc/led_grey.png");
        } else {
            if ((data & (0x01 << i)) != 0) {
                source_pix.load(":/new/photo/qrc/led_green.png");
            } else {
                source_pix.load(":/new/photo/qrc/led_red.png");
            }
        }
        led_label[mcu_id][i]->setPixmap(source_pix.scaled(80, 80));
    }
}

void status::do_status_config(uint8_t mcu_id, uint8_t data, bool reset)
{
#define DO_LED_SIZE 140
    QLabel* relay1_label[2] = { ui->relay1_a_label, ui->relay1_b_label };
    QLabel* relay2_label[2] = { ui->relay2_a_label, ui->relay2_b_label };
    QLabel* mos_label[4]    = { ui->mos1_label, ui->mos2_label, ui->mos3_label, ui->mos4_label };
    for (uint8_t i = 0; i < 6; i++) {
        QPixmap source_pix;
        if (reset || ((data & (0x01 << i)) == 0)) {
            source_pix.load(":/new/photo/qrc/led_grey.png");
        } else {
            source_pix.load(":/new/photo/qrc/led_green.png");
        }
        if (i == 0) {
            relay1_label[mcu_id]->setPixmap(source_pix.scaled(DO_LED_SIZE, DO_LED_SIZE));
        } else if (i == 1) {
            relay2_label[mcu_id]->setPixmap(source_pix.scaled(DO_LED_SIZE, DO_LED_SIZE));
        } else {
            mos_label[i - 2]->setPixmap(source_pix.scaled(DO_LED_SIZE, DO_LED_SIZE));
        }
    }
}

void status::error_status_config(uint8_t mcu_id, uint8_t data, bool reset)
{
    QLabel* error_label[2][6] = { { ui->power_error_a_label, ui->element_error_a_label, ui->version_error_a_label, ui->com_error_a_label,
                                    ui->output_error_a_label, ui->input_error_a_label },
                                  { ui->power_error_b_label, ui->element_error_b_label, ui->version_error_b_label, ui->com_error_b_label,
                                    ui->output_error_b_label, ui->input_error_b_label } };
    for (uint8_t i = 0; i < 6; i++) {
        QPixmap source_pix;
        if (reset) {
            source_pix.load(":/new/photo/qrc/led_grey.png");
        } else if (((data & (0x01 << i)) == 0)) {
            source_pix.load(":/new/photo/qrc/led_green.png");
        } else {
            source_pix.load(":/new/photo/qrc/led_red.png");
        }
        error_label[mcu_id][i]->setPixmap(source_pix.scaled(110, 110));
    }
}

void status::set_led(QLabel* label, label_color_e color)
{
    uint8_t size = LED_DIAMETER;
    // 将label中的文字清空
    label->setText("");
    // 先设置矩形大小
    // 如果ui界面设置的label大小比最小宽度和高度小，矩形将被设置为最小宽度和最小高度；
    // 如果ui界面设置的label大小比最小宽度和高度大，矩形将被设置为最大宽度和最大高度；
    QString min_width  = QString("min-width: %1px;").arg(size);   // 最小宽度：size
    QString min_height = QString("min-height: %1px;").arg(size);  // 最小高度：size
    QString max_width  = QString("max-width: %1px;").arg(size);   // 最小宽度：size
    QString max_height = QString("max-height: %1px;").arg(size);  // 最小高度：size
    // 再设置边界形状及边框
    QString border_radius = QString("border-radius: %1px;").arg(size / 2);  // 边框是圆角，半径为size/2
    QString border        = QString("border:0px solid black;");             // 边框为1px黑色
    // 最后设置背景颜色
    // QString background = "background-color:";
    //    switch (color) {
    //    case LABEL_GREY:
    //        background += "rgb(190,190,190)";
    //        break;
    //    case LABEL_RED:
    //        background += "rgb(255,0,0)";
    //        break;
    //    case LABEL_GREEN:
    //        background += "rgb(0,255,0)";
    //        break;
    //    case LABEL_YWLLOW:
    //        background += "rgb(255,255,0)";
    //        break;
    //    default:
    //        break;
    //    }

    const QString SheetStyle = min_width + min_height + max_width + max_height + border_radius + border;  // + background;
    label->setStyleSheet(SheetStyle);
    label->setAlignment(Qt::AlignCenter);
}

void status::can_heartbeat_callback(uint8_t mcu_id, uint8_t len, QByteArray data)
{
    if (len < 1) {
        return;
    }
    QLabel*  can_open_status[MCU_NUM] = { ui->a_canopen_status_label, ui->b_canopen_status_label };
    QTimer*  timer[MCU_NUM]           = { a_heartbeat_timer, b_heartbeat_timer };
    uint32_t heart_time               = ui->slave_heartbeat_spinBox->value() * 2;
    QString  str;
    QString  style;
    switch (data[0]) {
    case 0x7f:
        str   = "预操作";
        style = "color: rgb(0,0,200); font-weight: bold;";
        break;
    case 0x05:
        str   = "操作";
        style = "color: rgb(0,200,0); font-weight: bold;";
        break;
    default:
        str   = "未知";
        style = "color: rgb(100,0,0); font-weight: bold;";
        break;
    }
    can_open_status[mcu_id]->setText(str);
    can_open_status[mcu_id]->setStyleSheet(style);
    timer[mcu_id]->start(heart_time);
}

void status::can_pdo0_callback(uint8_t mcu_id, uint8_t len, QByteArray data)
{
    QCheckBox* ss[MCU_NUM] = { ui->a_safe_status_checkBox, ui->b_safe_status_checkBox };
    QLabel*    sf[MCU_NUM] = { ui->a_sf_code_label, ui->b_sf_code_label };
    if (len < 6) {
        return;
    }
    uint8_t  safety_status = data[1];
    uint8_t  error_type    = data[2];
    uint16_t di_state      = data[3] | (data[4] << 8);
    uint8_t  do_state      = data[5];
    if (safety_status == 0) {
        ss[mcu_id]->setChecked(false);
    } else {
        ss[mcu_id]->setChecked(true);
    }
    di_status_config(mcu_id, di_state);
    sf[mcu_id]->setText("0x" + QString::number(safety_status, 16));
    do_status_config(mcu_id, do_state);
    error_status_config(mcu_id, error_type);
}

void status::can_pdo1_callback(uint8_t mcu_id, uint8_t len, QByteArray data)
{
    if (len < 6) {
        return;
    }
    QProgressBar* ai1_pro[2] = { ui->ai1_a_progressBar, ui->ai1_b_progressBar };
    QProgressBar* ai2_pro[2] = { ui->ai2_a_progressBar, ui->ai2_b_progressBar };
    uint16_t      ai1        = data[0] | data[1] << 8;
    uint16_t      ai2        = data[2] | data[3] << 8;
    QString       str;
    if (mcu_id == MCU_A) {
        str = "A: ";
    } else {
        str = "B: ";
    }
    double ai1_v = ai1 / 1000.0;
    double ai2_v = ai2 / 1000.0;
    ai1_pro[mcu_id]->setValue(ai1);
    ai1_pro[mcu_id]->setFormat(str + QString::number(ai1_v, 'f', 2) + "V");
    ai2_pro[mcu_id]->setValue(ai2);
    ai2_pro[mcu_id]->setFormat(QString::number(ai2_v, 'f', 2) + "V");
}

void status::can_pdo2_callback(uint8_t mcu_id, uint8_t len, QByteArray data)
{
    if (len < 8) {
        return;
    }
    uint32_t data1 = data[0] | data[1] << 8 | data[2] << 16 | data[3] << 24;
    uint32_t data2 = data[4] | data[5] << 8 | data[6] << 16 | data[7] << 24;
    qep1_data      = data1 & 0x7ffffff;
    qep2_data      = data2 & 0x7ffffff;
    qep1_dir       = (data1 >> 27) & 0x01;
    qep2_dir       = (data2 >> 27) & 0x01;
    ui->motor1_fr_label->setText(QString::number(qep1_data) + " pulse/s");
    ui->motor2_fr_label->setText(QString::number(qep2_data) + " pulse/s");
}

void status::can_pdo3_callback(uint8_t mcu_id, uint8_t len, QByteArray data)
{
    if (len < 8) {
        ui->can_config_log_textBrowser->append("pdo3 len error");
        return;
    }
    uint32_t data1 = data[0] | data[1] << 8 | data[2] << 16 | data[3] << 24;
    uint32_t data2 = data[4] | data[5] << 8 | data[6] << 16 | data[7] << 24;
    uint8_t  af1   = (data1 >> 25) & 0x03;
    uint8_t  af2   = (data2 >> 25) & 0x03;

    switch (af1) {
    case PI_IS_COUNTER:
        if (mcu_id == MCU_A) {
            pi_qep1_data = (data1 & 0X1FFFFFF);
            pi_qep1_dir  = 0;
        } else {
            pi_qep2_data = (data1 & 0X1FFFFFF);
            pi_qep2_dir  = 0;
        }
        break;
    case PI_IS_ENCODER:
        pi_qep1_data = (data1 & 0X1FFFFFF);
        pi_qep1_dir  = ((data1 >> 27) & 0X1);
        break;
    case PI_IS_DI:
        pi_qep1_data = 0;
        pi_qep1_dir  = 0;
        break;
    default:
        break;
    }

    switch (af2) {
    case PI_IS_COUNTER:
        if (mcu_id == MCU_A) {
            pi_qep1_data = (data2 & 0X1FFFFFF);
            pi_qep1_dir  = 0;
        } else {
            pi_qep2_data = (data2 & 0X1FFFFFF);
            pi_qep2_dir  = 0;
        }
        break;
    case PI_IS_ENCODER:
        pi_qep2_data = (data2 & 0X1FFFFFF);
        pi_qep2_dir  = ((data2 >> 27) & 0X1);
        break;
    case PI_IS_DI:
        pi_qep2_data = 0;
        pi_qep2_dir  = 0;
        break;
    default:
        break;
    }
    ui->encode1_fr_label->setText(QString::number(pi_qep1_data) + " pulse/s");
    ui->encode2_fr_label->setText(QString::number(pi_qep2_data) + " pulse/s");
}

void status::can_data_callback(uint32_t id, uint8_t len, QByteArray data)
{
    uint8_t a_nodeid = ui->A_nodeid_spinBox->value();
    uint8_t b_nodeid = ui->B_nodeid_spinBox->value();
    switch (id - a_nodeid) {
    case 0x700:
        can_heartbeat_callback(MCU_A, len, data);
        break;
    case 0x180:
        can_pdo0_callback(MCU_A, len, data);
        break;
    case 0x280:
        can_pdo1_callback(MCU_A, len, data);
        break;
    case 0x380:
        can_pdo2_callback(MCU_A, len, data);
        break;
    case 0x480:
        can_pdo3_callback(MCU_A, len, data);
        break;
    }

    switch (id - b_nodeid) {
    case 0x700:
        can_heartbeat_callback(MCU_B, len, data);
        break;
    case 0x180:
        can_pdo0_callback(MCU_B, len, data);
        break;
    case 0x280:
        can_pdo1_callback(MCU_B, len, data);
        break;
    case 0x380:
        can_pdo2_callback(MCU_B, len, data);
        break;
    case 0x480:
        can_pdo3_callback(MCU_B, len, data);
        break;
    }
}

void status::reset_ui_data()
{
    QLabel*    can_open_status[MCU_NUM] = { ui->a_canopen_status_label, ui->b_canopen_status_label };
    QCheckBox* ss[MCU_NUM]              = { ui->a_safe_status_checkBox, ui->b_safe_status_checkBox };
    QLabel*    sf[MCU_NUM]              = { ui->a_sf_code_label, ui->b_sf_code_label };
    for (uint8_t i = 0; i < MCU_NUM; i++) {
        can_open_status[i]->setText("离线");
        can_open_status[i]->setStyleSheet("color: rgb(200,0,0); font-weight: bold;");
        ss[i]->setChecked(false);
        sf[i]->setText("未知");
    }
    qep1_data    = 0;
    qep2_data    = 0;
    pi_qep1_data = 0;
    pi_qep2_data = 0;
    di_status_config(MCU_A, 0, true);
    di_status_config(MCU_B, 0, true);
    do_status_config(MCU_A, 0, true);
    do_status_config(MCU_B, 0, true);
    error_status_config(MCU_A, 0, true);
    error_status_config(MCU_B, 0, true);
    QPixmap qep_source(":/new/photo/qrc/motor.png");

    qep1_pix = qep_source.scaled(200, 200);
    qep2_pix = qep_source.scaled(200, 200);
    set_led(ui->motor1_label, LABEL_GREEN);
    set_led(ui->motor2_label, LABEL_GREEN);
    ui->motor1_label->setPixmap(qep1_pix);
    ui->motor2_label->setPixmap(qep2_pix);
    QPixmap pi_source(":/new/photo/qrc/encode.png");
    pi_qep1_pix = pi_source.scaled(200, 200);
    pi_qep2_pix = pi_source.scaled(200, 200);
    set_led(ui->encode1_label, LABEL_GREEN);
    set_led(ui->encode2_label, LABEL_GREEN);
    ui->encode1_label->setPixmap(pi_qep1_pix);
    ui->encode2_label->setPixmap(pi_qep2_pix);
}

void status::a_heartbeat_timeout_slot()
{
    ui->a_canopen_status_label->setText(OFFLINE);
    ui->a_canopen_status_label->setStyleSheet("color: rgb(100,0,0); font-weight: bold;");
}

void status::b_heartbeat_timeout_slot()
{
    ui->b_canopen_status_label->setText(OFFLINE);
    ui->b_canopen_status_label->setStyleSheet("color: rgb(100,0,0); font-weight: bold;");
}

void status::encode_rotation_slot()
{
    static int angle[4]        = { 0 };  // qep1 qpe2 pi_qep1 pi_qep2
    uint32_t   speed[4]        = { qep1_data, qep2_data, pi_qep1_data, pi_qep2_data };
    QLabel*    encode_label[4] = { ui->motor1_label, ui->motor2_label, ui->encode1_label, ui->encode2_label };
    QPixmap    encode_pix[4]   = { qep1_pix, qep2_pix, pi_qep1_pix, pi_qep2_pix };
    uint8_t    dir[4]          = { qep1_dir, qep2_dir, pi_qep1_dir, pi_qep2_dir };
    for (uint8_t i = 0; i < 4; i++) {
        if (speed[i] == 0) {
            continue;
        }
        if (dir[i] == 1) {
            angle[i] += (speed[i] / 100);
        } else {
            angle[i] -= (speed[i] / 100);
        }
        angle[i] %= 360;
        encode_label[i]->setPixmap(encode_pix[i].transformed(QTransform().rotate(angle[i])));
    }
}

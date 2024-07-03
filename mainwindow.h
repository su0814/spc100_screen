#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QCanBus>
#include <QCanBusDevice>
#include <QCanBusFrame>
#include <QMainWindow>
#include <linux/can.h>
class status;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

public:
    static MainWindow* my_ui;
    Ui::MainWindow*    ui;

private:
    /* baout can function */
    void can_connect(void);
    void can_disconnect(void);
    /* about info display */
    void my_message_box(QString title, QString text);

private:
    /* about can param */
    std::unique_ptr<QCanBusDevice> m_canDevice;
    QTimer*                        can_status_timer = nullptr;

    /* about status */
    status* status_class = nullptr;
private slots:
    /* about can callback */
    void can_errors_slot(QCanBusDevice::CanBusError) const;
    void can_status_update_slot(void);
    void can_message_callback();
    /* about ui */
    void ui_init(void);
private slots:
    void on_can_config_pushButton_clicked();
    void on_start_slave_pushButton_clicked();
    void on_Can_disconnect_pushButton_clicked();
    void on_reset_data_pushButton_clicked();
    void on_a_safe_status_checkBox_clicked(bool checked);
    void on_b_safe_status_checkBox_clicked(bool checked);
};
#endif  // MAINWINDOW_H

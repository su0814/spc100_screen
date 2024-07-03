#ifndef STATUS_H
#define STATUS_H

#include "ui_mainwindow.h"
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QWidget>
#define ERROR_TYPE_NUM 6
#define DI_NUM         12
#define DO_NUM         6
#define OFFLINE        "离线"

#define DI_DATA_RESET 0XFFFF
#define DO_DATA_RESET 0XFF
enum {
    MCU_A = 0,
    MCU_B,
    MCU_NUM,
};
typedef enum {
    LABEL_RED,
    LABEL_GREEN,
    LABEL_YWLLOW,
    LABEL_GREY,
} label_color_e;
typedef enum {
    RADAR_PF,
    RADAR_WF,
    RADAR_AUTO,
} radar_e;
class MainWindow;
class status : public QWidget {
    Q_OBJECT
public:
    explicit status(QWidget* parent = nullptr);
    Ui::MainWindow* ui                = nullptr;
    MainWindow*     mainwindow        = nullptr;
    QTimer*         a_heartbeat_timer = nullptr;
    QTimer*         b_heartbeat_timer = nullptr;

private:
    uint32_t qep1_data    = 0;
    uint32_t qep2_data    = 0;
    uint32_t pi_qep1_data = 0;
    uint32_t pi_qep2_data = 0;
    uint8_t  qep1_dir     = 1;
    uint8_t  qep2_dir     = 1;
    uint8_t  pi_qep1_dir  = 1;
    uint8_t  pi_qep2_dir  = 1;

    QPixmap qep1_pix;
    QPixmap qep2_pix;
    QPixmap pi_qep1_pix;
    QPixmap pi_qep2_pix;
    QTimer  rotation_time;

public:
    void can_data_callback(uint32_t id, uint8_t len, QByteArray data);
    void reset_ui_data(void);

private:
    void status_ui_init(void);
    void can_heartbeat_callback(uint8_t mcu_id, uint8_t len, QByteArray data);
    void can_pdo0_callback(uint8_t mcu_id, uint8_t len, QByteArray data);
    void can_pdo1_callback(uint8_t mcu_id, uint8_t len, QByteArray data);
    void can_pdo2_callback(uint8_t mcu_id, uint8_t len, QByteArray data);
    void can_pdo3_callback(uint8_t mcu_id, uint8_t len, QByteArray data);

    void di_status_config(uint8_t mcu_id, uint16_t data);
    void do_status_config(uint8_t mcu_id, uint8_t data);
    void error_status_config(uint8_t mcu_id, uint8_t data);
    /* 指示灯 */
    void set_led(QLabel* label, label_color_e color);
signals:
private slots:
    void a_heartbeat_timeout_slot(void);
    void b_heartbeat_timeout_slot(void);
    void encode_rotation_slot(void);
};

#endif  // STATUS_H

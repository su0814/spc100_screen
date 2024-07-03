#ifndef MY_CAN_H
#define MY_CAN_H

#include <QObject>
#include <linux/can.h>

class my_can : public QObject {
    Q_OBJECT
public:
    explicit my_can(QObject* parent = nullptr);

signals:
    void can_message_recvived(struct can_frame message);

public:
    int  can_message_send(struct can_frame message);
    int  can_socket_start_listening(uint32_t baudrate);
    void can_socket_stop_listening(void);
    int  can_socket_open(uint32_t baudrate);
    void can_socket_close(void);

    int recv_can_msg(char* data, int* dlc);

private:
    void     can_socket_listen_thread(void);
    int      my_socket;
    bool     socket_is_listen;
    QThread* thread = nullptr;
};

#endif  // MY_CAN_H

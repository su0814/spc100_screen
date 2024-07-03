#include "my_can.h"
#include "mainwindow.h"
#include "qwidget.h"
#include "ui_mainwindow.h"
#include <QThread>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <qdebug.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>
#define CAN_DEVICE "can0"

my_can::my_can(QObject* parent)
    : QObject { parent }
{
    socket_is_listen = false;
    my_socket        = -1;
    thread           = new QThread();
}

int my_can::can_socket_open(uint32_t baudrate)
{
    //    QString config_cmd = "ifconfig " + QString(CAN_DEVICE) + " down && canconfig " + CAN_DEVICE + " bitrate " + QString::number(baudrate)
    //                         + " ctrlmode triple-sampling on && ifconfig " + CAN_DEVICE + " up";
    //    char* cmd = config_cmd.toUtf8().data();

    char cmd[125];
    memset(cmd, 0, sizeof(cmd));
    snprintf(cmd, sizeof(cmd), "ifconfig %s down && canconfig %s bitrate %d ctrlmode triple-sampling on && ifconfig %s up", CAN_DEVICE, CAN_DEVICE, baudrate,
             CAN_DEVICE);
    system(cmd);
    //    my_socket = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    //    if (my_socket < 0) {
    //        printf("socket create fail\r\n");
    //        fflush(stdout);
    //        return -1;
    //    }
    //    struct ifreq ifr;
    //    strcpy(ifr.ifr_name, CAN_DEVICE);
    //    if (ioctl(my_socket, SIOCGIFINDEX, &ifr) < 0) {
    //        printf("ioctl fail \r\n");
    //        fflush(stdout);
    //        can_socket_close();
    //        return -2;
    //    }
    //    struct sockaddr_can addr;
    //    addr.can_family  = AF_CAN;
    //    addr.can_ifindex = ifr.ifr_ifindex;
    //    if (bind(my_socket, ( struct sockaddr* )&addr, sizeof(addr)) < 0) {
    //        printf("bind fail \r\n");
    //        fflush(stdout);
    //        can_socket_close();
    //        return -3;
    //    }
    //    struct can_filter rfilter[2];
    //    rfilter[0].can_id   = 0;
    //    rfilter[0].can_mask = CAN_SFF_MASK;
    //    rfilter[1].can_id   = 0;
    //    rfilter[1].can_mask = CAN_SFF_MASK;
    //    setsockopt(my_socket, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));
    return 0;
}

void my_can::can_socket_close()
{
    if (my_socket >= 0) {
        close(my_socket);
        my_socket = -1;
    }
}

void my_can::can_socket_listen_thread()
{
    struct can_frame frame;
    while (socket_is_listen) {
        QApplication::processEvents();
        ssize_t bytesRead = read(my_socket, &frame, sizeof(struct can_frame));
        if (bytesRead > 0) {
            printf("recv success\r\n");
            fflush(stdout);
            emit can_message_recvived(frame);
        }
    }
}

int my_can::can_socket_start_listening(uint32_t baudrate)
{
    char data_recv[50];
    int  can_dlc;
    if (socket_is_listen) {
        printf("socket_is_listen is ture\r\n");
        fflush(stdout);
        return -1;
    }
    int ret = can_socket_open(baudrate);
    if (ret != 0) {
        printf("socket open file\r\n");
        fflush(stdout);
        return -2;
    }
    printf("open success\r\n");
    while (1) {
        recv_can_msg(data_recv, &can_dlc);
        for (int i = 0; i < can_dlc; i++) {
            printf("%02X ", data_recv[i]);
        }
        printf("\n");
        fflush(stdout);
    }
    // can_socket_listen_thread();

    //    fflush(stdout);
    socket_is_listen = true;
    //    moveToThread(thread);
    //    connect(thread, &QThread::started, this, &my_can::can_socket_listen_thread);
    //    thread->start();
}

void my_can::can_socket_stop_listening()
{
    socket_is_listen = false;
    thread->wait();
    disconnect(thread, &QThread::started, this, &my_can::can_socket_listen_thread);
}

int my_can::can_message_send(can_frame message)
{
    if (my_socket < 0) {
        return -1;
    }
    ssize_t bytesWritten = write(my_socket, &message, sizeof(struct can_frame));
    if (bytesWritten < 0) {
        return -2;
    }
}

int my_can::recv_can_msg(char* data, int* dlc)
{
    int                 s;
    struct sockaddr_can addr;
    struct ifreq        ifr;
    struct can_frame    frame;
    struct can_filter   rfilter[2];

    s = socket(PF_CAN, SOCK_RAW, CAN_RAW);  // 创建套接字
    strcpy(ifr.ifr_name, CAN_DEVICE);
    ioctl(s, SIOCGIFINDEX, &ifr);  // 指定can0设备

    addr.can_family  = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    bind(s, ( struct sockaddr* )&addr, sizeof(addr));  // 将套接字与can0绑定

    //    // 定义接收规则，只接收指定的CAN ID报文
    //    rfilter[0].can_id   = 0;
    //    rfilter[0].can_mask = CAN_SFF_MASK;
    //    rfilter[1].can_id   = 0;
    //    rfilter[1].can_mask = CAN_SFF_MASK;

    //    // 设置过滤规则
    //    setsockopt(s, SOL_CAN_RAW, CAN_RAW_FILTER, &rfilter, sizeof(rfilter));

    // 读取CAN报文
    printf("start read file\r\n");
    fflush(stdout);
    read(s, ( uint8_t* )&frame, 1);
    printf("sread success\r\n");
    fflush(stdout);
    *dlc = frame.can_dlc;
    memcpy(data, frame.data, *dlc);
    return 0;
}

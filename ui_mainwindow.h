/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_19;
    QTabWidget *tabWidget;
    QWidget *tab_can;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *can_config_pushButton;
    QComboBox *can_baudrate_comboBox;
    QLabel *label;
    QPushButton *Can_disconnect_pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QSpinBox *A_nodeid_spinBox;
    QLabel *label_3;
    QSpinBox *B_nodeid_spinBox;
    QLabel *label_4;
    QSpinBox *slave_heartbeat_spinBox;
    QLabel *label_5;
    QSpinBox *master_hearbeat_spinBox;
    QLabel *can_status_label;
    QTextBrowser *can_config_log_textBrowser;
    QWidget *tab_status;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QCheckBox *a_safe_status_checkBox;
    QLabel *label_10;
    QLabel *a_sf_code_label;
    QLabel *label_8;
    QGroupBox *groupBox_15;
    QGridLayout *gridLayout_20;
    QProgressBar *ai1_b_progressBar;
    QProgressBar *ai1_a_progressBar;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *b_sf_code_label;
    QCheckBox *b_safe_status_checkBox;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_23;
    QProgressBar *ai2_b_progressBar;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_22;
    QProgressBar *ai2_a_progressBar;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *b_canopen_status_label;
    QLabel *label_19;
    QLabel *a_canopen_status_label;
    QLabel *label_20;
    QPushButton *start_slave_pushButton;
    QPushButton *reset_data_pushButton;
    QWidget *tab;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_11;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *switch1_a_label;
    QLabel *switch1_b_label;
    QLabel *switch2_label;
    QLabel *switch3_label;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_10;
    QLabel *label_12;
    QLabel *pf_leda_label;
    QLabel *pf_ledb_label;
    QLabel *label_13;
    QLabel *wf_leda_label;
    QLabel *wf_ledb_label;
    QLabel *label_14;
    QLabel *af_leda_label;
    QLabel *af_ledb_label;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QLabel *estop_led1_label;
    QLabel *estop_led2_label;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_12;
    QLabel *uswitch1_label;
    QLabel *uswitch2_label;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_14;
    QLabel *ref_left_label;
    QLabel *ref_right_label;
    QWidget *tab_2;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_8;
    QLabel *motor1_label;
    QLabel *motor1_fr_label;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_15;
    QLabel *motor2_label;
    QLabel *motor2_fr_label;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_16;
    QLabel *encode1_label;
    QLabel *encode1_fr_label;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_17;
    QLabel *encode2_label;
    QLabel *encode2_fr_label;
    QWidget *tab_3;
    QGridLayout *gridLayout_27;
    QGroupBox *groupBox_19;
    QGridLayout *gridLayout_24;
    QLabel *relay1_b_label;
    QLabel *relay1_a_label;
    QLabel *label_31;
    QLabel *label_32;
    QGroupBox *groupBox_20;
    QGridLayout *gridLayout_26;
    QLabel *relay2_b_label;
    QLabel *relay2_a_label;
    QLabel *label_33;
    QLabel *label_34;
    QGroupBox *groupBox_21;
    QGridLayout *gridLayout_25;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *mos1_label;
    QLabel *mos2_label;
    QLabel *mos3_label;
    QLabel *mos4_label;
    QWidget *tab_4;
    QGridLayout *gridLayout_29;
    QGroupBox *groupBox_22;
    QGridLayout *gridLayout_28;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *power_error_a_label;
    QLabel *power_error_b_label;
    QLabel *scheck_error_a_label;
    QLabel *ccheck_error_a_label;
    QLabel *com_error_a_label;
    QLabel *output_error_a_label;
    QLabel *input_error_a_label;
    QLabel *scheck_error_b_label;
    QLabel *ccheck_error_b_label;
    QLabel *com_error_b_label;
    QLabel *output_error_b_label;
    QLabel *input_error_b_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1030, 642);
        MainWindow->setMinimumSize(QSize(1024, 600));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_19 = new QGridLayout(centralwidget);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::West);
        tab_can = new QWidget();
        tab_can->setObjectName(QString::fromUtf8("tab_can"));
        gridLayout_4 = new QGridLayout(tab_can);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(tab_can);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        can_config_pushButton = new QPushButton(groupBox);
        can_config_pushButton->setObjectName(QString::fromUtf8("can_config_pushButton"));
        can_config_pushButton->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(can_config_pushButton, 1, 0, 1, 2);

        can_baudrate_comboBox = new QComboBox(groupBox);
        can_baudrate_comboBox->addItem(QString());
        can_baudrate_comboBox->addItem(QString());
        can_baudrate_comboBox->setObjectName(QString::fromUtf8("can_baudrate_comboBox"));
        can_baudrate_comboBox->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(can_baudrate_comboBox, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Can_disconnect_pushButton = new QPushButton(groupBox);
        Can_disconnect_pushButton->setObjectName(QString::fromUtf8("Can_disconnect_pushButton"));
        Can_disconnect_pushButton->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(Can_disconnect_pushButton, 2, 0, 1, 2);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_can);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        A_nodeid_spinBox = new QSpinBox(groupBox_2);
        A_nodeid_spinBox->setObjectName(QString::fromUtf8("A_nodeid_spinBox"));
        A_nodeid_spinBox->setMinimum(0);
        A_nodeid_spinBox->setMaximum(127);
        A_nodeid_spinBox->setValue(81);

        gridLayout_3->addWidget(A_nodeid_spinBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        B_nodeid_spinBox = new QSpinBox(groupBox_2);
        B_nodeid_spinBox->setObjectName(QString::fromUtf8("B_nodeid_spinBox"));
        B_nodeid_spinBox->setMaximum(127);
        B_nodeid_spinBox->setValue(82);

        gridLayout_3->addWidget(B_nodeid_spinBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        slave_heartbeat_spinBox = new QSpinBox(groupBox_2);
        slave_heartbeat_spinBox->setObjectName(QString::fromUtf8("slave_heartbeat_spinBox"));
        slave_heartbeat_spinBox->setMinimum(100);
        slave_heartbeat_spinBox->setMaximum(10000);
        slave_heartbeat_spinBox->setSingleStep(100);

        gridLayout_3->addWidget(slave_heartbeat_spinBox, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        master_hearbeat_spinBox = new QSpinBox(groupBox_2);
        master_hearbeat_spinBox->setObjectName(QString::fromUtf8("master_hearbeat_spinBox"));
        master_hearbeat_spinBox->setMinimum(100);
        master_hearbeat_spinBox->setMaximum(10000);
        master_hearbeat_spinBox->setSingleStep(100);

        gridLayout_3->addWidget(master_hearbeat_spinBox, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        can_status_label = new QLabel(tab_can);
        can_status_label->setObjectName(QString::fromUtf8("can_status_label"));
        can_status_label->setFont(font);

        gridLayout_4->addWidget(can_status_label, 2, 0, 1, 1);

        can_config_log_textBrowser = new QTextBrowser(tab_can);
        can_config_log_textBrowser->setObjectName(QString::fromUtf8("can_config_log_textBrowser"));

        gridLayout_4->addWidget(can_config_log_textBrowser, 0, 1, 3, 1);

        tabWidget->addTab(tab_can, QString());
        tab_status = new QWidget();
        tab_status->setObjectName(QString::fromUtf8("tab_status"));
        gridLayout_7 = new QGridLayout(tab_status);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_3 = new QGroupBox(tab_status);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        a_safe_status_checkBox = new QCheckBox(groupBox_3);
        a_safe_status_checkBox->setObjectName(QString::fromUtf8("a_safe_status_checkBox"));
        a_safe_status_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{spacing: 5px;color: green;}\n"
"          QCheckBox::indicator{width: \n"
"        80 px;height: 40\n"
"        px;}\n"
"          QCheckBox::indicator:enabled:unchecked {image: url(:/new/photo/qrc/run.png);}\n"
"          QCheckBox::indicator:enabled:checked {image: url(:/new/photo/qrc/safe.png);}"));

        gridLayout_5->addWidget(a_safe_status_checkBox, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 2);

        a_sf_code_label = new QLabel(groupBox_3);
        a_sf_code_label->setObjectName(QString::fromUtf8("a_sf_code_label"));
        a_sf_code_label->setFont(font);

        gridLayout_5->addWidget(a_sf_code_label, 3, 2, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_15 = new QGroupBox(tab_status);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        gridLayout_20 = new QGridLayout(groupBox_15);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        ai1_b_progressBar = new QProgressBar(groupBox_15);
        ai1_b_progressBar->setObjectName(QString::fromUtf8("ai1_b_progressBar"));
        ai1_b_progressBar->setMaximum(4096);
        ai1_b_progressBar->setValue(0);

        gridLayout_20->addWidget(ai1_b_progressBar, 1, 0, 1, 1);

        ai1_a_progressBar = new QProgressBar(groupBox_15);
        ai1_a_progressBar->setObjectName(QString::fromUtf8("ai1_a_progressBar"));
        ai1_a_progressBar->setStyleSheet(QString::fromUtf8(""));
        ai1_a_progressBar->setMinimum(0);
        ai1_a_progressBar->setMaximum(4096);
        ai1_a_progressBar->setValue(0);

        gridLayout_20->addWidget(ai1_a_progressBar, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_15, 2, 0, 1, 2);

        groupBox_4 = new QGroupBox(tab_status);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 2);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 0, 0, 1, 1);

        b_sf_code_label = new QLabel(groupBox_4);
        b_sf_code_label->setObjectName(QString::fromUtf8("b_sf_code_label"));
        b_sf_code_label->setFont(font);

        gridLayout_6->addWidget(b_sf_code_label, 1, 2, 1, 1);

        b_safe_status_checkBox = new QCheckBox(groupBox_4);
        b_safe_status_checkBox->setObjectName(QString::fromUtf8("b_safe_status_checkBox"));
        b_safe_status_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{spacing: 5px;color: green;}\n"
"          QCheckBox::indicator{width: \n"
"        80 px;height: 40\n"
"        px;}\n"
"          QCheckBox::indicator:enabled:unchecked {image: url(:/new/photo/qrc/run.png);}\n"
"          QCheckBox::indicator:enabled:checked {image: url(:/new/photo/qrc/safe.png);}"));

        gridLayout_6->addWidget(b_safe_status_checkBox, 0, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_18 = new QGroupBox(tab_status);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        gridLayout_23 = new QGridLayout(groupBox_18);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        ai2_b_progressBar = new QProgressBar(groupBox_18);
        ai2_b_progressBar->setObjectName(QString::fromUtf8("ai2_b_progressBar"));
        ai2_b_progressBar->setMaximum(4096);
        ai2_b_progressBar->setValue(0);

        gridLayout_23->addWidget(ai2_b_progressBar, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_18, 4, 0, 1, 2);

        groupBox_17 = new QGroupBox(tab_status);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        gridLayout_22 = new QGridLayout(groupBox_17);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        ai2_a_progressBar = new QProgressBar(groupBox_17);
        ai2_a_progressBar->setObjectName(QString::fromUtf8("ai2_a_progressBar"));
        ai2_a_progressBar->setMaximum(4096);
        ai2_a_progressBar->setValue(0);

        gridLayout_22->addWidget(ai2_a_progressBar, 0, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_17, 3, 0, 1, 2);

        groupBox_5 = new QGroupBox(tab_status);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        b_canopen_status_label = new QLabel(groupBox_5);
        b_canopen_status_label->setObjectName(QString::fromUtf8("b_canopen_status_label"));
        b_canopen_status_label->setFont(font);
        b_canopen_status_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(b_canopen_status_label, 2, 3, 1, 1);

        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_19, 2, 0, 1, 1);

        a_canopen_status_label = new QLabel(groupBox_5);
        a_canopen_status_label->setObjectName(QString::fromUtf8("a_canopen_status_label"));
        a_canopen_status_label->setFont(font);
        a_canopen_status_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(a_canopen_status_label, 2, 1, 1, 1);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 2, 2, 1, 1);

        start_slave_pushButton = new QPushButton(groupBox_5);
        start_slave_pushButton->setObjectName(QString::fromUtf8("start_slave_pushButton"));
        start_slave_pushButton->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(start_slave_pushButton, 0, 0, 1, 2);

        reset_data_pushButton = new QPushButton(groupBox_5);
        reset_data_pushButton->setObjectName(QString::fromUtf8("reset_data_pushButton"));
        reset_data_pushButton->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(reset_data_pushButton, 0, 2, 1, 2);


        gridLayout_7->addWidget(groupBox_5, 0, 0, 1, 2);

        tabWidget->addTab(tab_status, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_13 = new QGridLayout(tab);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_11 = new QGridLayout(groupBox_8);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_16, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_17, 0, 2, 1, 1);

        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_18, 0, 3, 1, 1);

        switch1_a_label = new QLabel(groupBox_8);
        switch1_a_label->setObjectName(QString::fromUtf8("switch1_a_label"));
        switch1_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(switch1_a_label, 1, 0, 1, 1);

        switch1_b_label = new QLabel(groupBox_8);
        switch1_b_label->setObjectName(QString::fromUtf8("switch1_b_label"));
        switch1_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(switch1_b_label, 1, 1, 1, 1);

        switch2_label = new QLabel(groupBox_8);
        switch2_label->setObjectName(QString::fromUtf8("switch2_label"));
        switch2_label->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(switch2_label, 1, 2, 1, 1);

        switch3_label = new QLabel(groupBox_8);
        switch3_label->setObjectName(QString::fromUtf8("switch3_label"));
        switch3_label->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(switch3_label, 1, 3, 1, 1);


        gridLayout_13->addWidget(groupBox_8, 1, 0, 1, 1);

        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_10 = new QGridLayout(groupBox_7);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(50, 16777215));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_12, 0, 0, 1, 1);

        pf_leda_label = new QLabel(groupBox_7);
        pf_leda_label->setObjectName(QString::fromUtf8("pf_leda_label"));
        pf_leda_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(pf_leda_label, 0, 1, 1, 1);

        pf_ledb_label = new QLabel(groupBox_7);
        pf_ledb_label->setObjectName(QString::fromUtf8("pf_ledb_label"));
        pf_ledb_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(pf_ledb_label, 0, 2, 1, 1);

        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_13, 1, 0, 1, 1);

        wf_leda_label = new QLabel(groupBox_7);
        wf_leda_label->setObjectName(QString::fromUtf8("wf_leda_label"));
        wf_leda_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(wf_leda_label, 1, 1, 1, 1);

        wf_ledb_label = new QLabel(groupBox_7);
        wf_ledb_label->setObjectName(QString::fromUtf8("wf_ledb_label"));
        wf_ledb_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(wf_ledb_label, 1, 2, 1, 1);

        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_14, 2, 0, 1, 1);

        af_leda_label = new QLabel(groupBox_7);
        af_leda_label->setObjectName(QString::fromUtf8("af_leda_label"));
        af_leda_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(af_leda_label, 2, 1, 1, 1);

        af_ledb_label = new QLabel(groupBox_7);
        af_ledb_label->setObjectName(QString::fromUtf8("af_ledb_label"));
        af_ledb_label->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(af_ledb_label, 2, 2, 1, 1);


        gridLayout_13->addWidget(groupBox_7, 1, 1, 1, 1);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        estop_led1_label = new QLabel(groupBox_6);
        estop_led1_label->setObjectName(QString::fromUtf8("estop_led1_label"));
        estop_led1_label->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(estop_led1_label, 0, 0, 1, 1);

        estop_led2_label = new QLabel(groupBox_6);
        estop_led2_label->setObjectName(QString::fromUtf8("estop_led2_label"));
        estop_led2_label->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(estop_led2_label, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_6, 1, 2, 1, 1);

        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_12 = new QGridLayout(groupBox_9);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        uswitch1_label = new QLabel(groupBox_9);
        uswitch1_label->setObjectName(QString::fromUtf8("uswitch1_label"));
        uswitch1_label->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(uswitch1_label, 0, 0, 1, 1);

        uswitch2_label = new QLabel(groupBox_9);
        uswitch2_label->setObjectName(QString::fromUtf8("uswitch2_label"));
        uswitch2_label->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(uswitch2_label, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_9, 0, 0, 1, 1);

        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_14 = new QGridLayout(groupBox_10);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        ref_left_label = new QLabel(groupBox_10);
        ref_left_label->setObjectName(QString::fromUtf8("ref_left_label"));
        ref_left_label->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(ref_left_label, 0, 0, 1, 1);

        ref_right_label = new QLabel(groupBox_10);
        ref_right_label->setObjectName(QString::fromUtf8("ref_right_label"));
        ref_right_label->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(ref_right_label, 0, 1, 1, 1);


        gridLayout_13->addWidget(groupBox_10, 0, 1, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_18 = new QGridLayout(tab_2);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        groupBox_11 = new QGroupBox(tab_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(groupBox_11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        motor1_label = new QLabel(groupBox_11);
        motor1_label->setObjectName(QString::fromUtf8("motor1_label"));
        motor1_label->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(motor1_label, 0, 0, 1, 1);

        motor1_fr_label = new QLabel(groupBox_11);
        motor1_fr_label->setObjectName(QString::fromUtf8("motor1_fr_label"));
        motor1_fr_label->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        motor1_fr_label->setFont(font2);
        motor1_fr_label->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(motor1_fr_label, 1, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_11, 0, 0, 1, 1);

        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_15 = new QGridLayout(groupBox_13);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        motor2_label = new QLabel(groupBox_13);
        motor2_label->setObjectName(QString::fromUtf8("motor2_label"));
        motor2_label->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(motor2_label, 0, 0, 1, 1);

        motor2_fr_label = new QLabel(groupBox_13);
        motor2_fr_label->setObjectName(QString::fromUtf8("motor2_fr_label"));
        motor2_fr_label->setMaximumSize(QSize(16777215, 30));
        motor2_fr_label->setFont(font2);
        motor2_fr_label->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(motor2_fr_label, 1, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_13, 0, 1, 1, 1);

        groupBox_12 = new QGroupBox(tab_2);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_16 = new QGridLayout(groupBox_12);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        encode1_label = new QLabel(groupBox_12);
        encode1_label->setObjectName(QString::fromUtf8("encode1_label"));
        encode1_label->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(encode1_label, 0, 0, 1, 1);

        encode1_fr_label = new QLabel(groupBox_12);
        encode1_fr_label->setObjectName(QString::fromUtf8("encode1_fr_label"));
        encode1_fr_label->setMaximumSize(QSize(16777215, 30));
        encode1_fr_label->setFont(font2);
        encode1_fr_label->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(encode1_fr_label, 1, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_12, 1, 0, 1, 1);

        groupBox_14 = new QGroupBox(tab_2);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        gridLayout_17 = new QGridLayout(groupBox_14);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        encode2_label = new QLabel(groupBox_14);
        encode2_label->setObjectName(QString::fromUtf8("encode2_label"));
        encode2_label->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(encode2_label, 0, 0, 1, 1);

        encode2_fr_label = new QLabel(groupBox_14);
        encode2_fr_label->setObjectName(QString::fromUtf8("encode2_fr_label"));
        encode2_fr_label->setMaximumSize(QSize(16777215, 30));
        encode2_fr_label->setFont(font2);
        encode2_fr_label->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(encode2_fr_label, 1, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_14, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_27 = new QGridLayout(tab_3);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        groupBox_19 = new QGroupBox(tab_3);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        gridLayout_24 = new QGridLayout(groupBox_19);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        relay1_b_label = new QLabel(groupBox_19);
        relay1_b_label->setObjectName(QString::fromUtf8("relay1_b_label"));
        relay1_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(relay1_b_label, 1, 1, 1, 1);

        relay1_a_label = new QLabel(groupBox_19);
        relay1_a_label->setObjectName(QString::fromUtf8("relay1_a_label"));
        relay1_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(relay1_a_label, 0, 1, 1, 1);

        label_31 = new QLabel(groupBox_19);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        label_31->setFont(font3);
        label_31->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(label_31, 0, 0, 1, 1);

        label_32 = new QLabel(groupBox_19);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font3);
        label_32->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(label_32, 1, 0, 1, 1);


        gridLayout_27->addWidget(groupBox_19, 0, 0, 1, 1);

        groupBox_20 = new QGroupBox(tab_3);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        gridLayout_26 = new QGridLayout(groupBox_20);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        relay2_b_label = new QLabel(groupBox_20);
        relay2_b_label->setObjectName(QString::fromUtf8("relay2_b_label"));
        relay2_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(relay2_b_label, 1, 1, 1, 1);

        relay2_a_label = new QLabel(groupBox_20);
        relay2_a_label->setObjectName(QString::fromUtf8("relay2_a_label"));
        relay2_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(relay2_a_label, 0, 1, 1, 1);

        label_33 = new QLabel(groupBox_20);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font3);
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_33, 0, 0, 1, 1);

        label_34 = new QLabel(groupBox_20);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font3);
        label_34->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_34, 1, 0, 1, 1);


        gridLayout_27->addWidget(groupBox_20, 0, 1, 1, 1);

        groupBox_21 = new QGroupBox(tab_3);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        gridLayout_25 = new QGridLayout(groupBox_21);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        label_27 = new QLabel(groupBox_21);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font3);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(label_27, 0, 0, 1, 1);

        label_28 = new QLabel(groupBox_21);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font3);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(label_28, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_21);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font3);
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(label_29, 0, 2, 1, 1);

        label_30 = new QLabel(groupBox_21);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font3);
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(label_30, 0, 3, 1, 1);

        mos1_label = new QLabel(groupBox_21);
        mos1_label->setObjectName(QString::fromUtf8("mos1_label"));
        mos1_label->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(mos1_label, 1, 0, 1, 1);

        mos2_label = new QLabel(groupBox_21);
        mos2_label->setObjectName(QString::fromUtf8("mos2_label"));
        mos2_label->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(mos2_label, 1, 1, 1, 1);

        mos3_label = new QLabel(groupBox_21);
        mos3_label->setObjectName(QString::fromUtf8("mos3_label"));
        mos3_label->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(mos3_label, 1, 2, 1, 1);

        mos4_label = new QLabel(groupBox_21);
        mos4_label->setObjectName(QString::fromUtf8("mos4_label"));
        mos4_label->setAlignment(Qt::AlignCenter);

        gridLayout_25->addWidget(mos4_label, 1, 3, 1, 1);


        gridLayout_27->addWidget(groupBox_21, 1, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_29 = new QGridLayout(tab_4);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        groupBox_22 = new QGroupBox(tab_4);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        gridLayout_28 = new QGridLayout(groupBox_22);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        label_21 = new QLabel(groupBox_22);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font3);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_21, 0, 1, 1, 1);

        label_22 = new QLabel(groupBox_22);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font3);
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_22, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox_22);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font3);
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_23, 0, 3, 1, 1);

        label_24 = new QLabel(groupBox_22);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font3);
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_24, 0, 4, 1, 1);

        label_25 = new QLabel(groupBox_22);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font3);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_25, 0, 5, 1, 1);

        label_26 = new QLabel(groupBox_22);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font3);
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_26, 0, 6, 1, 1);

        label_6 = new QLabel(groupBox_22);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_22);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(label_7, 2, 0, 1, 1);

        power_error_a_label = new QLabel(groupBox_22);
        power_error_a_label->setObjectName(QString::fromUtf8("power_error_a_label"));
        power_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(power_error_a_label, 1, 1, 1, 1);

        power_error_b_label = new QLabel(groupBox_22);
        power_error_b_label->setObjectName(QString::fromUtf8("power_error_b_label"));
        power_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(power_error_b_label, 2, 1, 1, 1);

        scheck_error_a_label = new QLabel(groupBox_22);
        scheck_error_a_label->setObjectName(QString::fromUtf8("scheck_error_a_label"));
        scheck_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(scheck_error_a_label, 1, 2, 1, 1);

        ccheck_error_a_label = new QLabel(groupBox_22);
        ccheck_error_a_label->setObjectName(QString::fromUtf8("ccheck_error_a_label"));
        ccheck_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(ccheck_error_a_label, 1, 3, 1, 1);

        com_error_a_label = new QLabel(groupBox_22);
        com_error_a_label->setObjectName(QString::fromUtf8("com_error_a_label"));
        com_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(com_error_a_label, 1, 4, 1, 1);

        output_error_a_label = new QLabel(groupBox_22);
        output_error_a_label->setObjectName(QString::fromUtf8("output_error_a_label"));
        output_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(output_error_a_label, 1, 5, 1, 1);

        input_error_a_label = new QLabel(groupBox_22);
        input_error_a_label->setObjectName(QString::fromUtf8("input_error_a_label"));
        input_error_a_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(input_error_a_label, 1, 6, 1, 1);

        scheck_error_b_label = new QLabel(groupBox_22);
        scheck_error_b_label->setObjectName(QString::fromUtf8("scheck_error_b_label"));
        scheck_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(scheck_error_b_label, 2, 2, 1, 1);

        ccheck_error_b_label = new QLabel(groupBox_22);
        ccheck_error_b_label->setObjectName(QString::fromUtf8("ccheck_error_b_label"));
        ccheck_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(ccheck_error_b_label, 2, 3, 1, 1);

        com_error_b_label = new QLabel(groupBox_22);
        com_error_b_label->setObjectName(QString::fromUtf8("com_error_b_label"));
        com_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(com_error_b_label, 2, 4, 1, 1);

        output_error_b_label = new QLabel(groupBox_22);
        output_error_b_label->setObjectName(QString::fromUtf8("output_error_b_label"));
        output_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(output_error_b_label, 2, 5, 1, 1);

        input_error_b_label = new QLabel(groupBox_22);
        input_error_b_label->setObjectName(QString::fromUtf8("input_error_b_label"));
        input_error_b_label->setAlignment(Qt::AlignCenter);

        gridLayout_28->addWidget(input_error_b_label, 2, 6, 1, 1);


        gridLayout_29->addWidget(groupBox_22, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout_19->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1030, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\200\273\347\272\277\351\205\215\347\275\256", nullptr));
        can_config_pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        can_baudrate_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "250000", nullptr));
        can_baudrate_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "500000", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        Can_disconnect_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\351\205\215\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\234\272A\350\212\202\347\202\271ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\234\272B\350\212\202\347\202\271ID", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\234\272\345\277\203\350\267\263\346\227\266\351\227\264", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\234\272\345\277\203\350\267\263\346\227\266\351\227\264", nullptr));
        can_status_label->setText(QCoreApplication::translate("MainWindow", "CAN \346\200\273\347\272\277\347\212\266\346\200\201: \347\246\273\347\272\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_can), QCoreApplication::translate("MainWindow", "\346\200\273\347\272\277", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 A \345\256\211\345\205\250\347\212\266\346\200\201", nullptr));
        a_safe_status_checkBox->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\256\211\345\205\250\345\212\237\350\203\275", nullptr));
        a_sf_code_label->setText(QCoreApplication::translate("MainWindow", "Unknow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\256\211\345\205\250\347\212\266\346\200\201", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "\346\273\221\345\212\250\345\217\230\351\230\273\345\231\2501", nullptr));
        ai1_b_progressBar->setFormat(QCoreApplication::translate("MainWindow", "B: 0V", nullptr));
        ai1_a_progressBar->setFormat(QCoreApplication::translate("MainWindow", "A: 0V", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 B \345\256\211\345\205\250\347\212\266\346\200\201", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\256\211\345\205\250\345\212\237\350\203\275", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\256\211\345\205\250\347\212\266\346\200\201", nullptr));
        b_sf_code_label->setText(QCoreApplication::translate("MainWindow", "Unknow", nullptr));
        b_safe_status_checkBox->setText(QString());
        groupBox_18->setTitle(QCoreApplication::translate("MainWindow", "\346\273\221\345\212\250\345\217\230\351\230\273\345\231\2503", nullptr));
        ai2_b_progressBar->setFormat(QCoreApplication::translate("MainWindow", "0V", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "\346\273\221\345\212\250\345\217\230\351\230\273\345\231\2502", nullptr));
        ai2_a_progressBar->setFormat(QCoreApplication::translate("MainWindow", "0V", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\345\217\260", nullptr));
        b_canopen_status_label->setText(QCoreApplication::translate("MainWindow", "Offline", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 A:", nullptr));
        a_canopen_status_label->setText(QCoreApplication::translate("MainWindow", "Offline", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 B:", nullptr));
        start_slave_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\344\273\216\346\234\272CANopen", nullptr));
        reset_data_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_status), QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\256", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\2561A", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\2561B", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\2562", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\2563", nullptr));
        switch1_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        switch1_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        switch2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        switch3_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "\351\233\267\350\276\276", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\344\277\235\346\212\244\345\214\272", nullptr));
        pf_leda_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pf_ledb_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\350\255\246\345\221\212\345\214\272", nullptr));
        wf_leda_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        wf_ledb_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\351\200\232\347\224\250", nullptr));
        af_leda_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        af_ledb_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\346\200\245\345\201\234", nullptr));
        estop_led1_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        estop_led2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "\346\247\275\345\275\242\345\274\200\345\205\263", nullptr));
        uswitch1_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        uswitch2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "\345\217\215\345\260\204\344\274\240\346\204\237\345\231\250", nullptr));
        ref_left_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ref_right_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\344\274\240\346\204\237\345\231\250", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "\347\224\265\346\234\2721", nullptr));
        motor1_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        motor1_fr_label->setText(QCoreApplication::translate("MainWindow", "0 pulse/s", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "\347\224\265\346\234\2722", nullptr));
        motor2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        motor2_fr_label->setText(QCoreApplication::translate("MainWindow", "0 pulse/s", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\345\231\2501", nullptr));
        encode1_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        encode1_fr_label->setText(QCoreApplication::translate("MainWindow", "0 pulse/s", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\345\231\2502", nullptr));
        encode2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        encode2_fr_label->setText(QCoreApplication::translate("MainWindow", "0 pulse/s", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\345\231\250", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("MainWindow", "RELAY1 ", nullptr));
        relay1_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        relay1_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 A", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 B", nullptr));
        groupBox_20->setTitle(QCoreApplication::translate("MainWindow", "RELAY2", nullptr));
        relay2_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        relay2_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 A", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227 B", nullptr));
        groupBox_21->setTitle(QCoreApplication::translate("MainWindow", "MOS", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "MOS1", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "MOS2", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "MOS3", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "MOS4", nullptr));
        mos1_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mos2_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mos3_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        mos4_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272", nullptr));
        groupBox_22->setTitle(QCoreApplication::translate("MainWindow", "\346\225\205\351\232\234\347\212\266\346\200\201", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\347\224\265\346\272\220\346\225\205\351\232\234", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\350\207\252\346\243\200\346\225\205\351\232\234", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\344\272\222\346\243\200\346\225\205\351\232\234", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\351\200\232\350\256\257\346\225\205\351\232\234", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\346\225\205\351\232\234", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\225\205\351\232\234", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227A", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\250\241\345\235\227B", nullptr));
        power_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        scheck_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ccheck_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        com_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        output_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        input_error_a_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        scheck_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ccheck_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        com_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        output_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        input_error_b_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\346\225\205\351\232\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

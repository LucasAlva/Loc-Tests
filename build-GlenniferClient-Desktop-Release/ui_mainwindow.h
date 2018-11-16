/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <drillslider.h>
#include <ledindicator.h>
#include "intedit.h"
#include "speedometer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab_Map;
    QHBoxLayout *horizontalLayout_4;
    QGraphicsView *mapGraphicsView;
    QWidget *tab_Locomotion;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QPushButton *locomotion_UpButton;
    QPushButton *locomotion_DownButton;
    QPushButton *locomotion_RightButton;
    QPushButton *locomotion_LeftButton;
    QPushButton *locomotion_StopButton;
    QPushButton *tankPivotButtonR;
    QPushButton *tankPivotButtonL;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSlider *horizontalSlider_6;
    QLabel *label_7;
    QSlider *slider_UpsetSpeed;
    QLabel *label_10;
    QSlider *slider_LocomotionSpeed;
    QSpacerItem *horizontalSpacer_5;
    Speedometer *speedometer;
    QLCDNumber *lcdNumber_LocomotionSpeed;
    QLCDNumber *lcdNumber_LocomotionUpsetSpeed;
    QCheckBox *checkBox_RunCloseLoop;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *locomotion_StrafeButton;
    QPushButton *locomotion_TurnButton;
    QPushButton *locomotion_StraightButton;
    QProgressBar *locomotion_ProgressBar;
    QWidget *tab_ExcavationControl;
    QSplitter *splitter_4;
    Speedometer *speedometer_Excavation;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QLCDNumber *lcdNumber_ExcavationTargetDepth;
    DrillSlider *slider_ExcavationTargetDepth;
    QLabel *label_6;
    QPushButton *pushButton_DigDeep;
    QCheckBox *checkBox_BucketConveyorOn;
    QLabel *label_12;
    QPushButton *pushButton_DigStop;
    QLabel *label_11;
    QLCDNumber *lcdNumber_ExcavationDigSpeed;
    QPushButton *pushButton_DigSurface;
    QSlider *slider_ExcavationMoveSpeed;
    QLCDNumber *lcdNumber_ExcavationMoveSpeed;
    QSplitter *splitter_3;
    QSlider *slider_ExcavationDigSpeed;
    QSpinBox *spinBox_upperCurrent;
    QSpinBox *spinBox_lowerCurrent;
    QLabel *label;
    QWidget *tab_DepositionControl;
    QSlider *horizontalSlider_9;
    QCheckBox *checkBox_3;
    QLabel *label_5;
    QProgressBar *locomotion_ProgressBar_4;
    QGraphicsView *graphicsView_3;
    QWidget *tab;
    QWidget *tab_MotorClosedLoop;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_2;
    QSlider *slider_FrontLeftWheel;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar_FrontLeftWheelForwards;
    QProgressBar *progressBar_FrontLeftWheelBackwards;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_FrontLeftWheelStop;
    QSpacerItem *verticalSpacer;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_15;
    QLCDNumber *lcdNumber_FrontLeftWheel;
    QLabel *label_20;
    IntEdit *lineEdit_FrontLeftWheel;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_20;
    QSlider *slider_FrontRightWheel;
    QVBoxLayout *verticalLayout_20;
    QProgressBar *progressBar_FrontRightWheelForwards;
    QProgressBar *progressBar_FrontRightWheelBackwards;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton_FrontRightWheelStop;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_21;
    QLCDNumber *lcdNumber_FrontRightWheel;
    QLabel *label_21;
    IntEdit *lineEdit_FrontRightWheel;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_24;
    QSlider *slider_BackLeftWheel;
    QVBoxLayout *verticalLayout_26;
    QProgressBar *progressBar_BackLeftWheelForwards;
    QProgressBar *progressBar_BackLeftWheelBackwards;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_23;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pushButton_BackLeftWheelStop;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_25;
    QLCDNumber *lcdNumber_BackLeftWheel;
    QLabel *label_25;
    IntEdit *lineEdit_BackLeftWheel;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_30;
    QHBoxLayout *horizontalLayout_28;
    QSlider *slider_BackRightWheel;
    QVBoxLayout *verticalLayout_31;
    QProgressBar *progressBar_BackRightWheelForwards;
    QProgressBar *progressBar_BackRightWheeBackwards;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_26;
    QSpacerItem *verticalSpacer_24;
    QPushButton *pushButton_BackRightWheelStop;
    QSpacerItem *verticalSpacer_25;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_29;
    QLCDNumber *lcdNumber_BackRightWheel;
    QLabel *label_28;
    IntEdit *lineEdit_BackRightWheel;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_5;
    LedIndicator *ledIndicator_ExcavationArmExtendRight;
    QSlider *slider_ExcavationArm;
    QProgressBar *progressBar_ExcavationArm;
    QHBoxLayout *horizontalLayout_12;
    QLCDNumber *lcdNumber_ExcavationArm;
    QLabel *label_15;
    IntEdit *lineEdit_ExcavationArm;
    LedIndicator *ledIndicator_ExcavationArmExtendLeft;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_36;
    QPushButton *pushButton_ExcavationTranslationExtend;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_ExcavationTranslationStop;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_ExcavationTranslationRetract;
    QHBoxLayout *horizontalLayout_13;
    QLCDNumber *lcdNumber_ExcavationTranslation;
    QLabel *label_16;
    IntEdit *lineEdit_ExcavationTranslation;
    QSlider *slider_ExcavationTranslation;
    QSpacerItem *verticalSpacer_5;
    QProgressBar *progressBar_ExcavationTranslation;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_14;
    LedIndicator *ledIndicator_ExcavationTranslationExtendLeft;
    LedIndicator *ledIndicator_ExcavationTranslationExtendRight;
    LedIndicator *ledIndicator_ExcavationTranslationRetract;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QSlider *slider_ExcavationConveyor;
    QSpacerItem *verticalSpacer_15;
    QProgressBar *progressBar_ExcavationConveyor;
    QCheckBox *checkBox_ExcavationConveyor;
    QLCDNumber *lcdNumber_ExcavationConveyor;
    QLabel *label_2;
    IntEdit *lineEdit_ExcavationConveyor;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_18;
    QSlider *slider_DepositionDump;
    QProgressBar *progressBar_DepositionDump;
    QVBoxLayout *verticalLayout_37;
    QPushButton *pushButton_DepositionDumpDump;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_DepositionDumpStop;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pushButton_DepositionDumpStore;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_19;
    QLCDNumber *lcdNumber_DepositionDump;
    QLabel *label_17;
    IntEdit *lineEdit_DepositionDump;
    LedIndicator *ledIndicator_DepositionRetractLeft;
    LedIndicator *ledIndicator_DepositionRetractRight;
    LedIndicator *ledIndicator_DepositionExtendLeft;
    LedIndicator *ledIndicator_DepositionExtendRIght;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_22;
    QSlider *slider_LeftLooky;
    QProgressBar *progressBar_LeftLooky;
    QVBoxLayout *verticalLayout_38;
    QPushButton *pushButton_LeftLooky_Forward;
    QPushButton *pushButton_LeftLooky_Side;
    QPushButton *pushButton_LeftLooky_Backward;
    QHBoxLayout *horizontalLayout_14;
    QLCDNumber *lcdNumber_LeftLooky;
    QLabel *label_22;
    IntEdit *lineEdit_LeftLooky;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_29;
    QHBoxLayout *horizontalLayout_23;
    QSlider *slider_RightLooky;
    QProgressBar *progressBar_RightLooky;
    QVBoxLayout *verticalLayout_39;
    QPushButton *pushButton_RightLooky_Forward;
    QPushButton *pushButton_RightLooky_Side;
    QPushButton *pushButton_RightLooky_Backward;
    QHBoxLayout *horizontalLayout_27;
    QLCDNumber *lcdNumber_RightLooky;
    QLabel *label_29;
    IntEdit *lineEdit_RightLooky;
    QLCDNumber *lcdNumber_LoadCellLeft;
    QLCDNumber *lcdNumber_LoadCellRight;
    QLabel *label_3;
    QLabel *label_13;
    QPushButton *pushButton_InitialExcavationTranslation;
    QPushButton *pushButton_MaxExcavationArm;
    QPushButton *pushButton_MinExcavationArm;
    QPushButton *pushButton_MidExcavationArm;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_19;
    QTextBrowser *consoleOutputTextBrowser;
    QPushButton *pushButton_EStop;
    QPushButton *pushButton_EUnstop;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 701);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setFocusPolicy(Qt::NoFocus);
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(500, 400));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tab_Map = new QWidget();
        tab_Map->setObjectName(QStringLiteral("tab_Map"));
        horizontalLayout_4 = new QHBoxLayout(tab_Map);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mapGraphicsView = new QGraphicsView(tab_Map);
        mapGraphicsView->setObjectName(QStringLiteral("mapGraphicsView"));
        mapGraphicsView->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(mapGraphicsView);

        tabWidget->addTab(tab_Map, QString());
        tab_Locomotion = new QWidget();
        tab_Locomotion->setObjectName(QStringLiteral("tab_Locomotion"));
        verticalLayout_6 = new QVBoxLayout(tab_Locomotion);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(tab_Locomotion);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        graphicsView = new QGraphicsView(groupBox);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(graphicsView);


        verticalLayout_6->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_Locomotion);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        locomotion_UpButton = new QPushButton(groupBox_2);
        locomotion_UpButton->setObjectName(QStringLiteral("locomotion_UpButton"));
        locomotion_UpButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(locomotion_UpButton, 0, 1, 1, 1);

        locomotion_DownButton = new QPushButton(groupBox_2);
        locomotion_DownButton->setObjectName(QStringLiteral("locomotion_DownButton"));
        locomotion_DownButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(locomotion_DownButton, 2, 1, 1, 1);

        locomotion_RightButton = new QPushButton(groupBox_2);
        locomotion_RightButton->setObjectName(QStringLiteral("locomotion_RightButton"));
        locomotion_RightButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(locomotion_RightButton, 1, 2, 1, 1);

        locomotion_LeftButton = new QPushButton(groupBox_2);
        locomotion_LeftButton->setObjectName(QStringLiteral("locomotion_LeftButton"));
        locomotion_LeftButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(locomotion_LeftButton, 1, 0, 1, 1);

        locomotion_StopButton = new QPushButton(groupBox_2);
        locomotion_StopButton->setObjectName(QStringLiteral("locomotion_StopButton"));
        locomotion_StopButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(locomotion_StopButton, 1, 1, 1, 1);

        tankPivotButtonR = new QPushButton(groupBox_2);
        tankPivotButtonR->setObjectName(QStringLiteral("tankPivotButtonR"));
        tankPivotButtonR->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(tankPivotButtonR, 0, 2, 1, 1);

        tankPivotButtonL = new QPushButton(groupBox_2);
        tankPivotButtonL->setObjectName(QStringLiteral("tankPivotButtonL"));
        tankPivotButtonL->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(tankPivotButtonL, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        horizontalSlider_6 = new QSlider(groupBox_2);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setFocusPolicy(Qt::NoFocus);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_6, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        slider_UpsetSpeed = new QSlider(groupBox_2);
        slider_UpsetSpeed->setObjectName(QStringLiteral("slider_UpsetSpeed"));
        slider_UpsetSpeed->setFocusPolicy(Qt::NoFocus);
        slider_UpsetSpeed->setMinimum(20);
        slider_UpsetSpeed->setMaximum(100);
        slider_UpsetSpeed->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_UpsetSpeed, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        slider_LocomotionSpeed = new QSlider(groupBox_2);
        slider_LocomotionSpeed->setObjectName(QStringLiteral("slider_LocomotionSpeed"));
        slider_LocomotionSpeed->setFocusPolicy(Qt::NoFocus);
        slider_LocomotionSpeed->setMinimum(20);
        slider_LocomotionSpeed->setMaximum(100);
        slider_LocomotionSpeed->setValue(20);
        slider_LocomotionSpeed->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_LocomotionSpeed, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        speedometer = new Speedometer(groupBox_2);
        speedometer->setObjectName(QStringLiteral("speedometer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(speedometer->sizePolicy().hasHeightForWidth());
        speedometer->setSizePolicy(sizePolicy1);
        speedometer->setMinimumSize(QSize(0, 0));
        lcdNumber_LocomotionSpeed = new QLCDNumber(speedometer);
        lcdNumber_LocomotionSpeed->setObjectName(QStringLiteral("lcdNumber_LocomotionSpeed"));
        lcdNumber_LocomotionSpeed->setGeometry(QRect(0, 80, 64, 23));
        lcdNumber_LocomotionSpeed->setMouseTracking(false);
        lcdNumber_LocomotionSpeed->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_LocomotionSpeed->setProperty("value", QVariant(0));
        lcdNumber_LocomotionSpeed->setProperty("intValue", QVariant(0));
        lcdNumber_LocomotionUpsetSpeed = new QLCDNumber(speedometer);
        lcdNumber_LocomotionUpsetSpeed->setObjectName(QStringLiteral("lcdNumber_LocomotionUpsetSpeed"));
        lcdNumber_LocomotionUpsetSpeed->setGeometry(QRect(0, 170, 64, 23));
        lcdNumber_LocomotionUpsetSpeed->setMouseTracking(false);
        lcdNumber_LocomotionUpsetSpeed->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_LocomotionUpsetSpeed->setProperty("value", QVariant(0));
        lcdNumber_LocomotionUpsetSpeed->setProperty("intValue", QVariant(0));
        checkBox_RunCloseLoop = new QCheckBox(speedometer);
        checkBox_RunCloseLoop->setObjectName(QStringLiteral("checkBox_RunCloseLoop"));
        checkBox_RunCloseLoop->setGeometry(QRect(0, 0, 111, 22));

        horizontalLayout->addWidget(speedometer);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        locomotion_StrafeButton = new QPushButton(groupBox_2);
        locomotion_StrafeButton->setObjectName(QStringLiteral("locomotion_StrafeButton"));
        locomotion_StrafeButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(locomotion_StrafeButton);

        locomotion_TurnButton = new QPushButton(groupBox_2);
        locomotion_TurnButton->setObjectName(QStringLiteral("locomotion_TurnButton"));
        locomotion_TurnButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(locomotion_TurnButton);

        locomotion_StraightButton = new QPushButton(groupBox_2);
        locomotion_StraightButton->setObjectName(QStringLiteral("locomotion_StraightButton"));
        locomotion_StraightButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(locomotion_StraightButton);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(groupBox_2);

        locomotion_ProgressBar = new QProgressBar(tab_Locomotion);
        locomotion_ProgressBar->setObjectName(QStringLiteral("locomotion_ProgressBar"));
        locomotion_ProgressBar->setMaximum(100);
        locomotion_ProgressBar->setValue(0);

        verticalLayout_6->addWidget(locomotion_ProgressBar);

        tabWidget->addTab(tab_Locomotion, QString());
        tab_ExcavationControl = new QWidget();
        tab_ExcavationControl->setObjectName(QStringLiteral("tab_ExcavationControl"));
        splitter_4 = new QSplitter(tab_ExcavationControl);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(40, 340, 207, 29));
        splitter_4->setOrientation(Qt::Horizontal);
        speedometer_Excavation = new Speedometer(tab_ExcavationControl);
        speedometer_Excavation->setObjectName(QStringLiteral("speedometer_Excavation"));
        speedometer_Excavation->setGeometry(QRect(210, 20, 311, 251));
        layoutWidget = new QWidget(tab_ExcavationControl);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 280, 581, 211));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lcdNumber_ExcavationTargetDepth = new QLCDNumber(layoutWidget);
        lcdNumber_ExcavationTargetDepth->setObjectName(QStringLiteral("lcdNumber_ExcavationTargetDepth"));
        lcdNumber_ExcavationTargetDepth->setFocusPolicy(Qt::NoFocus);
        lcdNumber_ExcavationTargetDepth->setSmallDecimalPoint(false);
        lcdNumber_ExcavationTargetDepth->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_ExcavationTargetDepth->setProperty("value", QVariant(100));

        gridLayout_4->addWidget(lcdNumber_ExcavationTargetDepth, 0, 1, 1, 1);

        slider_ExcavationTargetDepth = new DrillSlider(layoutWidget);
        slider_ExcavationTargetDepth->setObjectName(QStringLiteral("slider_ExcavationTargetDepth"));
        slider_ExcavationTargetDepth->setFocusPolicy(Qt::NoFocus);
        slider_ExcavationTargetDepth->setMaximum(100);
        slider_ExcavationTargetDepth->setValue(100);
        slider_ExcavationTargetDepth->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_ExcavationTargetDepth, 0, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 3, 2, 1, 1);

        pushButton_DigDeep = new QPushButton(layoutWidget);
        pushButton_DigDeep->setObjectName(QStringLiteral("pushButton_DigDeep"));

        gridLayout_4->addWidget(pushButton_DigDeep, 2, 0, 1, 2);

        checkBox_BucketConveyorOn = new QCheckBox(layoutWidget);
        checkBox_BucketConveyorOn->setObjectName(QStringLiteral("checkBox_BucketConveyorOn"));
        checkBox_BucketConveyorOn->setFocusPolicy(Qt::NoFocus);

        gridLayout_4->addWidget(checkBox_BucketConveyorOn, 1, 3, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 1, 2, 1, 1);

        pushButton_DigStop = new QPushButton(layoutWidget);
        pushButton_DigStop->setObjectName(QStringLiteral("pushButton_DigStop"));

        gridLayout_4->addWidget(pushButton_DigStop, 5, 0, 1, 4);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 2, 1, 1);

        lcdNumber_ExcavationDigSpeed = new QLCDNumber(layoutWidget);
        lcdNumber_ExcavationDigSpeed->setObjectName(QStringLiteral("lcdNumber_ExcavationDigSpeed"));
        lcdNumber_ExcavationDigSpeed->setEnabled(true);
        lcdNumber_ExcavationDigSpeed->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_ExcavationDigSpeed->setProperty("value", QVariant(2.5));

        gridLayout_4->addWidget(lcdNumber_ExcavationDigSpeed, 1, 1, 1, 1);

        pushButton_DigSurface = new QPushButton(layoutWidget);
        pushButton_DigSurface->setObjectName(QStringLiteral("pushButton_DigSurface"));

        gridLayout_4->addWidget(pushButton_DigSurface, 4, 0, 1, 2);

        slider_ExcavationMoveSpeed = new QSlider(layoutWidget);
        slider_ExcavationMoveSpeed->setObjectName(QStringLiteral("slider_ExcavationMoveSpeed"));
        slider_ExcavationMoveSpeed->setMaximum(100);
        slider_ExcavationMoveSpeed->setValue(15);
        slider_ExcavationMoveSpeed->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_ExcavationMoveSpeed, 3, 0, 1, 1);

        lcdNumber_ExcavationMoveSpeed = new QLCDNumber(layoutWidget);
        lcdNumber_ExcavationMoveSpeed->setObjectName(QStringLiteral("lcdNumber_ExcavationMoveSpeed"));
        lcdNumber_ExcavationMoveSpeed->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_ExcavationMoveSpeed->setProperty("value", QVariant(0.15));

        gridLayout_4->addWidget(lcdNumber_ExcavationMoveSpeed, 3, 1, 1, 1);

        splitter_3 = new QSplitter(layoutWidget);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        slider_ExcavationDigSpeed = new QSlider(splitter_3);
        slider_ExcavationDigSpeed->setObjectName(QStringLiteral("slider_ExcavationDigSpeed"));
        slider_ExcavationDigSpeed->setFocusPolicy(Qt::NoFocus);
        slider_ExcavationDigSpeed->setMaximum(100);
        slider_ExcavationDigSpeed->setValue(25);
        slider_ExcavationDigSpeed->setOrientation(Qt::Horizontal);
        splitter_3->addWidget(slider_ExcavationDigSpeed);

        gridLayout_4->addWidget(splitter_3, 1, 0, 1, 1);

        spinBox_upperCurrent = new QSpinBox(layoutWidget);
        spinBox_upperCurrent->setObjectName(QStringLiteral("spinBox_upperCurrent"));
        spinBox_upperCurrent->setMaximum(20);
        spinBox_upperCurrent->setValue(10);

        gridLayout_4->addWidget(spinBox_upperCurrent, 3, 3, 1, 1);

        spinBox_lowerCurrent = new QSpinBox(layoutWidget);
        spinBox_lowerCurrent->setObjectName(QStringLiteral("spinBox_lowerCurrent"));
        spinBox_lowerCurrent->setMaximum(20);
        spinBox_lowerCurrent->setValue(8);

        gridLayout_4->addWidget(spinBox_lowerCurrent, 4, 3, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 2, 3, 1, 1);

        tabWidget->addTab(tab_ExcavationControl, QString());
        tab_DepositionControl = new QWidget();
        tab_DepositionControl->setObjectName(QStringLiteral("tab_DepositionControl"));
        horizontalSlider_9 = new QSlider(tab_DepositionControl);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setGeometry(QRect(50, 330, 160, 29));
        horizontalSlider_9->setFocusPolicy(Qt::NoFocus);
        horizontalSlider_9->setOrientation(Qt::Horizontal);
        checkBox_3 = new QCheckBox(tab_DepositionControl);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(60, 380, 100, 22));
        checkBox_3->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(tab_DepositionControl);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 330, 91, 21));
        locomotion_ProgressBar_4 = new QProgressBar(tab_DepositionControl);
        locomotion_ProgressBar_4->setObjectName(QStringLiteral("locomotion_ProgressBar_4"));
        locomotion_ProgressBar_4->setGeometry(QRect(30, 450, 531, 21));
        locomotion_ProgressBar_4->setMaximum(100);
        locomotion_ProgressBar_4->setValue(24);
        graphicsView_3 = new QGraphicsView(tab_DepositionControl);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(20, 30, 556, 267));
        graphicsView_3->setFocusPolicy(Qt::NoFocus);
        tabWidget->addTab(tab_DepositionControl, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_MotorClosedLoop = new QWidget();
        tab_MotorClosedLoop->setObjectName(QStringLiteral("tab_MotorClosedLoop"));
        groupBox_3 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 9, 214, 159));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setFocusPolicy(Qt::NoFocus);
        verticalLayout_22 = new QVBoxLayout(groupBox_3);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        slider_FrontLeftWheel = new QSlider(groupBox_3);
        slider_FrontLeftWheel->setObjectName(QStringLiteral("slider_FrontLeftWheel"));
        slider_FrontLeftWheel->setFocusPolicy(Qt::NoFocus);
        slider_FrontLeftWheel->setMinimum(-100);
        slider_FrontLeftWheel->setMaximum(100);
        slider_FrontLeftWheel->setValue(0);
        slider_FrontLeftWheel->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(slider_FrontLeftWheel);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        progressBar_FrontLeftWheelForwards = new QProgressBar(groupBox_3);
        progressBar_FrontLeftWheelForwards->setObjectName(QStringLiteral("progressBar_FrontLeftWheelForwards"));
        progressBar_FrontLeftWheelForwards->setFocusPolicy(Qt::NoFocus);
        progressBar_FrontLeftWheelForwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_FrontLeftWheelForwards->setValue(0);
        progressBar_FrontLeftWheelForwards->setTextVisible(true);
        progressBar_FrontLeftWheelForwards->setOrientation(Qt::Vertical);
        progressBar_FrontLeftWheelForwards->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_3->addWidget(progressBar_FrontLeftWheelForwards);

        progressBar_FrontLeftWheelBackwards = new QProgressBar(groupBox_3);
        progressBar_FrontLeftWheelBackwards->setObjectName(QStringLiteral("progressBar_FrontLeftWheelBackwards"));
        progressBar_FrontLeftWheelBackwards->setFocusPolicy(Qt::NoFocus);
        progressBar_FrontLeftWheelBackwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_FrontLeftWheelBackwards->setValue(0);
        progressBar_FrontLeftWheelBackwards->setOrientation(Qt::Vertical);
        progressBar_FrontLeftWheelBackwards->setInvertedAppearance(true);

        verticalLayout_3->addWidget(progressBar_FrontLeftWheelBackwards);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(label_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_FrontLeftWheelStop = new QPushButton(groupBox_3);
        pushButton_FrontLeftWheelStop->setObjectName(QStringLiteral("pushButton_FrontLeftWheelStop"));
        pushButton_FrontLeftWheelStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(pushButton_FrontLeftWheelStop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(label_9);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_22->addLayout(horizontalLayout_2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        lcdNumber_FrontLeftWheel = new QLCDNumber(groupBox_3);
        lcdNumber_FrontLeftWheel->setObjectName(QStringLiteral("lcdNumber_FrontLeftWheel"));
        lcdNumber_FrontLeftWheel->setFocusPolicy(Qt::NoFocus);
        lcdNumber_FrontLeftWheel->setSmallDecimalPoint(false);
        lcdNumber_FrontLeftWheel->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_FrontLeftWheel->setProperty("value", QVariant(0));

        horizontalLayout_15->addWidget(lcdNumber_FrontLeftWheel);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_15->addWidget(label_20);

        lineEdit_FrontLeftWheel = new IntEdit(groupBox_3);
        lineEdit_FrontLeftWheel->setObjectName(QStringLiteral("lineEdit_FrontLeftWheel"));
        lineEdit_FrontLeftWheel->setFocusPolicy(Qt::ClickFocus);
        lineEdit_FrontLeftWheel->setClearButtonEnabled(false);

        horizontalLayout_15->addWidget(lineEdit_FrontLeftWheel);


        verticalLayout_22->addLayout(horizontalLayout_15);

        groupBox_4 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(229, 9, 237, 159));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setFocusPolicy(Qt::NoFocus);
        verticalLayout_23 = new QVBoxLayout(groupBox_4);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        slider_FrontRightWheel = new QSlider(groupBox_4);
        slider_FrontRightWheel->setObjectName(QStringLiteral("slider_FrontRightWheel"));
        slider_FrontRightWheel->setFocusPolicy(Qt::NoFocus);
        slider_FrontRightWheel->setMinimum(-100);
        slider_FrontRightWheel->setMaximum(100);
        slider_FrontRightWheel->setValue(0);
        slider_FrontRightWheel->setOrientation(Qt::Vertical);

        horizontalLayout_20->addWidget(slider_FrontRightWheel);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        progressBar_FrontRightWheelForwards = new QProgressBar(groupBox_4);
        progressBar_FrontRightWheelForwards->setObjectName(QStringLiteral("progressBar_FrontRightWheelForwards"));
        progressBar_FrontRightWheelForwards->setFocusPolicy(Qt::NoFocus);
        progressBar_FrontRightWheelForwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_FrontRightWheelForwards->setValue(0);
        progressBar_FrontRightWheelForwards->setTextVisible(true);
        progressBar_FrontRightWheelForwards->setOrientation(Qt::Vertical);
        progressBar_FrontRightWheelForwards->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_20->addWidget(progressBar_FrontRightWheelForwards);

        progressBar_FrontRightWheelBackwards = new QProgressBar(groupBox_4);
        progressBar_FrontRightWheelBackwards->setObjectName(QStringLiteral("progressBar_FrontRightWheelBackwards"));
        progressBar_FrontRightWheelBackwards->setFocusPolicy(Qt::NoFocus);
        progressBar_FrontRightWheelBackwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_FrontRightWheelBackwards->setValue(0);
        progressBar_FrontRightWheelBackwards->setOrientation(Qt::Vertical);
        progressBar_FrontRightWheelBackwards->setInvertedAppearance(true);

        verticalLayout_20->addWidget(progressBar_FrontRightWheelBackwards);


        horizontalLayout_20->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFocusPolicy(Qt::NoFocus);

        verticalLayout_21->addWidget(label_18);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_10);

        pushButton_FrontRightWheelStop = new QPushButton(groupBox_4);
        pushButton_FrontRightWheelStop->setObjectName(QStringLiteral("pushButton_FrontRightWheelStop"));
        pushButton_FrontRightWheelStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_21->addWidget(pushButton_FrontRightWheelStop);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_11);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFocusPolicy(Qt::NoFocus);

        verticalLayout_21->addWidget(label_19);


        horizontalLayout_20->addLayout(verticalLayout_21);


        verticalLayout_23->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        lcdNumber_FrontRightWheel = new QLCDNumber(groupBox_4);
        lcdNumber_FrontRightWheel->setObjectName(QStringLiteral("lcdNumber_FrontRightWheel"));
        lcdNumber_FrontRightWheel->setFocusPolicy(Qt::NoFocus);
        lcdNumber_FrontRightWheel->setSmallDecimalPoint(false);
        lcdNumber_FrontRightWheel->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_FrontRightWheel->setProperty("value", QVariant(0));

        horizontalLayout_21->addWidget(lcdNumber_FrontRightWheel);

        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_21->addWidget(label_21);

        lineEdit_FrontRightWheel = new IntEdit(groupBox_4);
        lineEdit_FrontRightWheel->setObjectName(QStringLiteral("lineEdit_FrontRightWheel"));

        horizontalLayout_21->addWidget(lineEdit_FrontRightWheel);


        verticalLayout_23->addLayout(horizontalLayout_21);

        groupBox_5 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(9, 174, 214, 158));
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setFocusPolicy(Qt::NoFocus);
        verticalLayout_25 = new QVBoxLayout(groupBox_5);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        slider_BackLeftWheel = new QSlider(groupBox_5);
        slider_BackLeftWheel->setObjectName(QStringLiteral("slider_BackLeftWheel"));
        slider_BackLeftWheel->setFocusPolicy(Qt::NoFocus);
        slider_BackLeftWheel->setMinimum(-100);
        slider_BackLeftWheel->setMaximum(100);
        slider_BackLeftWheel->setValue(0);
        slider_BackLeftWheel->setOrientation(Qt::Vertical);

        horizontalLayout_24->addWidget(slider_BackLeftWheel);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        progressBar_BackLeftWheelForwards = new QProgressBar(groupBox_5);
        progressBar_BackLeftWheelForwards->setObjectName(QStringLiteral("progressBar_BackLeftWheelForwards"));
        progressBar_BackLeftWheelForwards->setFocusPolicy(Qt::NoFocus);
        progressBar_BackLeftWheelForwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_BackLeftWheelForwards->setValue(0);
        progressBar_BackLeftWheelForwards->setTextVisible(true);
        progressBar_BackLeftWheelForwards->setOrientation(Qt::Vertical);
        progressBar_BackLeftWheelForwards->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_26->addWidget(progressBar_BackLeftWheelForwards);

        progressBar_BackLeftWheelBackwards = new QProgressBar(groupBox_5);
        progressBar_BackLeftWheelBackwards->setObjectName(QStringLiteral("progressBar_BackLeftWheelBackwards"));
        progressBar_BackLeftWheelBackwards->setFocusPolicy(Qt::NoFocus);
        progressBar_BackLeftWheelBackwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_BackLeftWheelBackwards->setValue(0);
        progressBar_BackLeftWheelBackwards->setOrientation(Qt::Vertical);
        progressBar_BackLeftWheelBackwards->setInvertedAppearance(true);

        verticalLayout_26->addWidget(progressBar_BackLeftWheelBackwards);


        horizontalLayout_24->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFocusPolicy(Qt::NoFocus);

        verticalLayout_27->addWidget(label_23);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_12);

        pushButton_BackLeftWheelStop = new QPushButton(groupBox_5);
        pushButton_BackLeftWheelStop->setObjectName(QStringLiteral("pushButton_BackLeftWheelStop"));
        pushButton_BackLeftWheelStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_27->addWidget(pushButton_BackLeftWheelStop);

        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_19);

        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFocusPolicy(Qt::NoFocus);

        verticalLayout_27->addWidget(label_24);


        horizontalLayout_24->addLayout(verticalLayout_27);


        verticalLayout_25->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        lcdNumber_BackLeftWheel = new QLCDNumber(groupBox_5);
        lcdNumber_BackLeftWheel->setObjectName(QStringLiteral("lcdNumber_BackLeftWheel"));
        lcdNumber_BackLeftWheel->setFocusPolicy(Qt::NoFocus);
        lcdNumber_BackLeftWheel->setSmallDecimalPoint(false);
        lcdNumber_BackLeftWheel->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_BackLeftWheel->setProperty("value", QVariant(0));

        horizontalLayout_25->addWidget(lcdNumber_BackLeftWheel);

        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_25->addWidget(label_25);

        lineEdit_BackLeftWheel = new IntEdit(groupBox_5);
        lineEdit_BackLeftWheel->setObjectName(QStringLiteral("lineEdit_BackLeftWheel"));

        horizontalLayout_25->addWidget(lineEdit_BackLeftWheel);


        verticalLayout_25->addLayout(horizontalLayout_25);

        groupBox_13 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(229, 174, 237, 158));
        sizePolicy1.setHeightForWidth(groupBox_13->sizePolicy().hasHeightForWidth());
        groupBox_13->setSizePolicy(sizePolicy1);
        groupBox_13->setFocusPolicy(Qt::NoFocus);
        verticalLayout_30 = new QVBoxLayout(groupBox_13);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        slider_BackRightWheel = new QSlider(groupBox_13);
        slider_BackRightWheel->setObjectName(QStringLiteral("slider_BackRightWheel"));
        slider_BackRightWheel->setFocusPolicy(Qt::NoFocus);
        slider_BackRightWheel->setMinimum(-100);
        slider_BackRightWheel->setMaximum(100);
        slider_BackRightWheel->setValue(0);
        slider_BackRightWheel->setOrientation(Qt::Vertical);

        horizontalLayout_28->addWidget(slider_BackRightWheel);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        progressBar_BackRightWheelForwards = new QProgressBar(groupBox_13);
        progressBar_BackRightWheelForwards->setObjectName(QStringLiteral("progressBar_BackRightWheelForwards"));
        progressBar_BackRightWheelForwards->setFocusPolicy(Qt::NoFocus);
        progressBar_BackRightWheelForwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_BackRightWheelForwards->setValue(0);
        progressBar_BackRightWheelForwards->setTextVisible(true);
        progressBar_BackRightWheelForwards->setOrientation(Qt::Vertical);
        progressBar_BackRightWheelForwards->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_31->addWidget(progressBar_BackRightWheelForwards);

        progressBar_BackRightWheeBackwards = new QProgressBar(groupBox_13);
        progressBar_BackRightWheeBackwards->setObjectName(QStringLiteral("progressBar_BackRightWheeBackwards"));
        progressBar_BackRightWheeBackwards->setFocusPolicy(Qt::NoFocus);
        progressBar_BackRightWheeBackwards->setLayoutDirection(Qt::LeftToRight);
        progressBar_BackRightWheeBackwards->setValue(0);
        progressBar_BackRightWheeBackwards->setOrientation(Qt::Vertical);
        progressBar_BackRightWheeBackwards->setInvertedAppearance(true);

        verticalLayout_31->addWidget(progressBar_BackRightWheeBackwards);


        horizontalLayout_28->addLayout(verticalLayout_31);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        label_26 = new QLabel(groupBox_13);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFocusPolicy(Qt::NoFocus);

        verticalLayout_32->addWidget(label_26);

        verticalSpacer_24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_24);

        pushButton_BackRightWheelStop = new QPushButton(groupBox_13);
        pushButton_BackRightWheelStop->setObjectName(QStringLiteral("pushButton_BackRightWheelStop"));
        pushButton_BackRightWheelStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_32->addWidget(pushButton_BackRightWheelStop);

        verticalSpacer_25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_25);

        label_27 = new QLabel(groupBox_13);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFocusPolicy(Qt::NoFocus);

        verticalLayout_32->addWidget(label_27);


        horizontalLayout_28->addLayout(verticalLayout_32);


        verticalLayout_30->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        lcdNumber_BackRightWheel = new QLCDNumber(groupBox_13);
        lcdNumber_BackRightWheel->setObjectName(QStringLiteral("lcdNumber_BackRightWheel"));
        lcdNumber_BackRightWheel->setFocusPolicy(Qt::NoFocus);
        lcdNumber_BackRightWheel->setSmallDecimalPoint(false);
        lcdNumber_BackRightWheel->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_BackRightWheel->setProperty("value", QVariant(0));

        horizontalLayout_29->addWidget(lcdNumber_BackRightWheel);

        label_28 = new QLabel(groupBox_13);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_29->addWidget(label_28);

        lineEdit_BackRightWheel = new IntEdit(groupBox_13);
        lineEdit_BackRightWheel->setObjectName(QStringLiteral("lineEdit_BackRightWheel"));

        horizontalLayout_29->addWidget(lineEdit_BackRightWheel);


        verticalLayout_30->addLayout(horizontalLayout_29);

        groupBox_8 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(15, 337, 181, 191));
        sizePolicy1.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy1);
        groupBox_8->setFocusPolicy(Qt::NoFocus);
        gridLayout_5 = new QGridLayout(groupBox_8);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        ledIndicator_ExcavationArmExtendRight = new LedIndicator(groupBox_8);
        ledIndicator_ExcavationArmExtendRight->setObjectName(QStringLiteral("ledIndicator_ExcavationArmExtendRight"));
        ledIndicator_ExcavationArmExtendRight->setEnabled(true);
        ledIndicator_ExcavationArmExtendRight->setMinimumSize(QSize(42, 120));
        ledIndicator_ExcavationArmExtendRight->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_5->addWidget(ledIndicator_ExcavationArmExtendRight, 0, 2, 1, 1);

        slider_ExcavationArm = new QSlider(groupBox_8);
        slider_ExcavationArm->setObjectName(QStringLiteral("slider_ExcavationArm"));
        slider_ExcavationArm->setFocusPolicy(Qt::NoFocus);
        slider_ExcavationArm->setMinimum(-50);
        slider_ExcavationArm->setMaximum(100);
        slider_ExcavationArm->setValue(50);
        slider_ExcavationArm->setSliderPosition(50);
        slider_ExcavationArm->setOrientation(Qt::Vertical);

        gridLayout_5->addWidget(slider_ExcavationArm, 0, 0, 1, 1);

        progressBar_ExcavationArm = new QProgressBar(groupBox_8);
        progressBar_ExcavationArm->setObjectName(QStringLiteral("progressBar_ExcavationArm"));
        progressBar_ExcavationArm->setFocusPolicy(Qt::NoFocus);
        progressBar_ExcavationArm->setLayoutDirection(Qt::LeftToRight);
        progressBar_ExcavationArm->setMaximum(1024);
        progressBar_ExcavationArm->setValue(0);
        progressBar_ExcavationArm->setTextVisible(true);
        progressBar_ExcavationArm->setOrientation(Qt::Vertical);
        progressBar_ExcavationArm->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_5->addWidget(progressBar_ExcavationArm, 0, 3, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        lcdNumber_ExcavationArm = new QLCDNumber(groupBox_8);
        lcdNumber_ExcavationArm->setObjectName(QStringLiteral("lcdNumber_ExcavationArm"));
        lcdNumber_ExcavationArm->setFocusPolicy(Qt::NoFocus);
        lcdNumber_ExcavationArm->setSmallDecimalPoint(false);
        lcdNumber_ExcavationArm->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_ExcavationArm->setProperty("value", QVariant(0));

        horizontalLayout_12->addWidget(lcdNumber_ExcavationArm);

        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_12->addWidget(label_15);

        lineEdit_ExcavationArm = new IntEdit(groupBox_8);
        lineEdit_ExcavationArm->setObjectName(QStringLiteral("lineEdit_ExcavationArm"));

        horizontalLayout_12->addWidget(lineEdit_ExcavationArm);


        gridLayout_5->addLayout(horizontalLayout_12, 3, 0, 1, 4);

        ledIndicator_ExcavationArmExtendLeft = new LedIndicator(groupBox_8);
        ledIndicator_ExcavationArmExtendLeft->setObjectName(QStringLiteral("ledIndicator_ExcavationArmExtendLeft"));
        ledIndicator_ExcavationArmExtendLeft->setEnabled(true);
        ledIndicator_ExcavationArmExtendLeft->setMinimumSize(QSize(0, 0));
        ledIndicator_ExcavationArmExtendLeft->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_5->addWidget(ledIndicator_ExcavationArmExtendLeft, 0, 1, 1, 1);

        groupBox_9 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(229, 338, 251, 191));
        sizePolicy1.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy1);
        groupBox_9->setFocusPolicy(Qt::NoFocus);
        gridLayout_2 = new QGridLayout(groupBox_9);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        pushButton_ExcavationTranslationExtend = new QPushButton(groupBox_9);
        pushButton_ExcavationTranslationExtend->setObjectName(QStringLiteral("pushButton_ExcavationTranslationExtend"));
        pushButton_ExcavationTranslationExtend->setFocusPolicy(Qt::NoFocus);

        verticalLayout_36->addWidget(pushButton_ExcavationTranslationExtend);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_3);

        pushButton_ExcavationTranslationStop = new QPushButton(groupBox_9);
        pushButton_ExcavationTranslationStop->setObjectName(QStringLiteral("pushButton_ExcavationTranslationStop"));
        pushButton_ExcavationTranslationStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_36->addWidget(pushButton_ExcavationTranslationStop);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_8);

        pushButton_ExcavationTranslationRetract = new QPushButton(groupBox_9);
        pushButton_ExcavationTranslationRetract->setObjectName(QStringLiteral("pushButton_ExcavationTranslationRetract"));
        pushButton_ExcavationTranslationRetract->setFocusPolicy(Qt::NoFocus);

        verticalLayout_36->addWidget(pushButton_ExcavationTranslationRetract);


        gridLayout_2->addLayout(verticalLayout_36, 0, 5, 3, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        lcdNumber_ExcavationTranslation = new QLCDNumber(groupBox_9);
        lcdNumber_ExcavationTranslation->setObjectName(QStringLiteral("lcdNumber_ExcavationTranslation"));
        lcdNumber_ExcavationTranslation->setFocusPolicy(Qt::NoFocus);
        lcdNumber_ExcavationTranslation->setSmallDecimalPoint(false);
        lcdNumber_ExcavationTranslation->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_ExcavationTranslation->setProperty("value", QVariant(0));

        horizontalLayout_13->addWidget(lcdNumber_ExcavationTranslation);

        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_13->addWidget(label_16);

        lineEdit_ExcavationTranslation = new IntEdit(groupBox_9);
        lineEdit_ExcavationTranslation->setObjectName(QStringLiteral("lineEdit_ExcavationTranslation"));

        horizontalLayout_13->addWidget(lineEdit_ExcavationTranslation);


        gridLayout_2->addLayout(horizontalLayout_13, 3, 0, 1, 6);

        slider_ExcavationTranslation = new QSlider(groupBox_9);
        slider_ExcavationTranslation->setObjectName(QStringLiteral("slider_ExcavationTranslation"));
        slider_ExcavationTranslation->setFocusPolicy(Qt::NoFocus);
        slider_ExcavationTranslation->setMinimum(-100);
        slider_ExcavationTranslation->setMaximum(100);
        slider_ExcavationTranslation->setPageStep(1);
        slider_ExcavationTranslation->setValue(0);
        slider_ExcavationTranslation->setSliderPosition(0);
        slider_ExcavationTranslation->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(slider_ExcavationTranslation, 0, 0, 3, 1);

        verticalSpacer_5 = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 2, 1, 1);

        progressBar_ExcavationTranslation = new QProgressBar(groupBox_9);
        progressBar_ExcavationTranslation->setObjectName(QStringLiteral("progressBar_ExcavationTranslation"));
        progressBar_ExcavationTranslation->setFocusPolicy(Qt::NoFocus);
        progressBar_ExcavationTranslation->setLayoutDirection(Qt::LeftToRight);
        progressBar_ExcavationTranslation->setMaximum(100);
        progressBar_ExcavationTranslation->setValue(0);
        progressBar_ExcavationTranslation->setTextVisible(true);
        progressBar_ExcavationTranslation->setOrientation(Qt::Vertical);
        progressBar_ExcavationTranslation->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar_ExcavationTranslation, 0, 1, 3, 1);

        verticalSpacer_6 = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 1, 3, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_14, 1, 4, 1, 1);

        ledIndicator_ExcavationTranslationExtendLeft = new LedIndicator(groupBox_9);
        ledIndicator_ExcavationTranslationExtendLeft->setObjectName(QStringLiteral("ledIndicator_ExcavationTranslationExtendLeft"));

        gridLayout_2->addWidget(ledIndicator_ExcavationTranslationExtendLeft, 0, 2, 1, 1);

        ledIndicator_ExcavationTranslationExtendRight = new LedIndicator(groupBox_9);
        ledIndicator_ExcavationTranslationExtendRight->setObjectName(QStringLiteral("ledIndicator_ExcavationTranslationExtendRight"));

        gridLayout_2->addWidget(ledIndicator_ExcavationTranslationExtendRight, 0, 4, 1, 1);

        ledIndicator_ExcavationTranslationRetract = new LedIndicator(groupBox_9);
        ledIndicator_ExcavationTranslationRetract->setObjectName(QStringLiteral("ledIndicator_ExcavationTranslationRetract"));

        gridLayout_2->addWidget(ledIndicator_ExcavationTranslationRetract, 2, 3, 1, 1);

        groupBox_6 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(480, 300, 151, 231));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        groupBox_6->setFocusPolicy(Qt::NoFocus);
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        slider_ExcavationConveyor = new QSlider(groupBox_6);
        slider_ExcavationConveyor->setObjectName(QStringLiteral("slider_ExcavationConveyor"));
        slider_ExcavationConveyor->setMinimumSize(QSize(0, 100));
        slider_ExcavationConveyor->setFocusPolicy(Qt::NoFocus);
        slider_ExcavationConveyor->setMinimum(-100);
        slider_ExcavationConveyor->setMaximum(100);
        slider_ExcavationConveyor->setValue(0);
        slider_ExcavationConveyor->setSliderPosition(0);
        slider_ExcavationConveyor->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(slider_ExcavationConveyor, 1, 2, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_15, 1, 0, 1, 1);

        progressBar_ExcavationConveyor = new QProgressBar(groupBox_6);
        progressBar_ExcavationConveyor->setObjectName(QStringLiteral("progressBar_ExcavationConveyor"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressBar_ExcavationConveyor->sizePolicy().hasHeightForWidth());
        progressBar_ExcavationConveyor->setSizePolicy(sizePolicy2);
        progressBar_ExcavationConveyor->setValue(0);
        progressBar_ExcavationConveyor->setOrientation(Qt::Vertical);

        gridLayout_7->addWidget(progressBar_ExcavationConveyor, 1, 3, 1, 1);

        checkBox_ExcavationConveyor = new QCheckBox(groupBox_6);
        checkBox_ExcavationConveyor->setObjectName(QStringLiteral("checkBox_ExcavationConveyor"));
        checkBox_ExcavationConveyor->setFocusPolicy(Qt::NoFocus);

        gridLayout_7->addWidget(checkBox_ExcavationConveyor, 0, 0, 1, 3);

        lcdNumber_ExcavationConveyor = new QLCDNumber(groupBox_6);
        lcdNumber_ExcavationConveyor->setObjectName(QStringLiteral("lcdNumber_ExcavationConveyor"));
        lcdNumber_ExcavationConveyor->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(lcdNumber_ExcavationConveyor, 2, 0, 1, 3);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 2, 3, 1, 1);

        lineEdit_ExcavationConveyor = new IntEdit(groupBox_6);
        lineEdit_ExcavationConveyor->setObjectName(QStringLiteral("lineEdit_ExcavationConveyor"));

        gridLayout_7->addWidget(lineEdit_ExcavationConveyor, 3, 0, 1, 3);

        groupBox_10 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(620, 300, 300, 214));
        sizePolicy1.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy1);
        groupBox_10->setFocusPolicy(Qt::NoFocus);
        gridLayout_6 = new QGridLayout(groupBox_10);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        slider_DepositionDump = new QSlider(groupBox_10);
        slider_DepositionDump->setObjectName(QStringLiteral("slider_DepositionDump"));
        slider_DepositionDump->setFocusPolicy(Qt::NoFocus);
        slider_DepositionDump->setMinimum(-100);
        slider_DepositionDump->setMaximum(100);
        slider_DepositionDump->setValue(0);
        slider_DepositionDump->setOrientation(Qt::Vertical);

        horizontalLayout_18->addWidget(slider_DepositionDump);

        progressBar_DepositionDump = new QProgressBar(groupBox_10);
        progressBar_DepositionDump->setObjectName(QStringLiteral("progressBar_DepositionDump"));
        progressBar_DepositionDump->setFocusPolicy(Qt::NoFocus);
        progressBar_DepositionDump->setLayoutDirection(Qt::LeftToRight);
        progressBar_DepositionDump->setMaximum(90);
        progressBar_DepositionDump->setValue(0);
        progressBar_DepositionDump->setTextVisible(true);
        progressBar_DepositionDump->setOrientation(Qt::Vertical);
        progressBar_DepositionDump->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_18->addWidget(progressBar_DepositionDump);

        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        pushButton_DepositionDumpDump = new QPushButton(groupBox_10);
        pushButton_DepositionDumpDump->setObjectName(QStringLiteral("pushButton_DepositionDumpDump"));
        pushButton_DepositionDumpDump->setFocusPolicy(Qt::NoFocus);

        verticalLayout_37->addWidget(pushButton_DepositionDumpDump);

        verticalSpacer_4 = new QSpacerItem(122, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_4);

        pushButton_DepositionDumpStop = new QPushButton(groupBox_10);
        pushButton_DepositionDumpStop->setObjectName(QStringLiteral("pushButton_DepositionDumpStop"));
        pushButton_DepositionDumpStop->setFocusPolicy(Qt::NoFocus);

        verticalLayout_37->addWidget(pushButton_DepositionDumpStop);

        verticalSpacer_9 = new QSpacerItem(122, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_9);

        pushButton_DepositionDumpStore = new QPushButton(groupBox_10);
        pushButton_DepositionDumpStore->setObjectName(QStringLiteral("pushButton_DepositionDumpStore"));
        pushButton_DepositionDumpStore->setFocusPolicy(Qt::NoFocus);

        verticalLayout_37->addWidget(pushButton_DepositionDumpStore);


        horizontalLayout_18->addLayout(verticalLayout_37);


        gridLayout_6->addLayout(horizontalLayout_18, 0, 0, 3, 1);

        verticalSpacer_7 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 1, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_13, 1, 2, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        lcdNumber_DepositionDump = new QLCDNumber(groupBox_10);
        lcdNumber_DepositionDump->setObjectName(QStringLiteral("lcdNumber_DepositionDump"));
        lcdNumber_DepositionDump->setFocusPolicy(Qt::NoFocus);
        lcdNumber_DepositionDump->setSmallDecimalPoint(false);
        lcdNumber_DepositionDump->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_DepositionDump->setProperty("value", QVariant(0));

        horizontalLayout_19->addWidget(lcdNumber_DepositionDump);

        label_17 = new QLabel(groupBox_10);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_19->addWidget(label_17);

        lineEdit_DepositionDump = new IntEdit(groupBox_10);
        lineEdit_DepositionDump->setObjectName(QStringLiteral("lineEdit_DepositionDump"));

        horizontalLayout_19->addWidget(lineEdit_DepositionDump);


        gridLayout_6->addLayout(horizontalLayout_19, 3, 0, 1, 3);

        ledIndicator_DepositionRetractLeft = new LedIndicator(groupBox_10);
        ledIndicator_DepositionRetractLeft->setObjectName(QStringLiteral("ledIndicator_DepositionRetractLeft"));
        ledIndicator_DepositionRetractLeft->setEnabled(true);
        ledIndicator_DepositionRetractLeft->setMinimumSize(QSize(35, 35));
        ledIndicator_DepositionRetractLeft->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(ledIndicator_DepositionRetractLeft, 2, 1, 1, 1);

        ledIndicator_DepositionRetractRight = new LedIndicator(groupBox_10);
        ledIndicator_DepositionRetractRight->setObjectName(QStringLiteral("ledIndicator_DepositionRetractRight"));
        ledIndicator_DepositionRetractRight->setEnabled(true);
        ledIndicator_DepositionRetractRight->setMinimumSize(QSize(35, 35));
        ledIndicator_DepositionRetractRight->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(ledIndicator_DepositionRetractRight, 2, 2, 1, 1);

        ledIndicator_DepositionExtendLeft = new LedIndicator(groupBox_10);
        ledIndicator_DepositionExtendLeft->setObjectName(QStringLiteral("ledIndicator_DepositionExtendLeft"));
        ledIndicator_DepositionExtendLeft->setEnabled(true);
        ledIndicator_DepositionExtendLeft->setMinimumSize(QSize(35, 35));
        ledIndicator_DepositionExtendLeft->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(ledIndicator_DepositionExtendLeft, 0, 1, 1, 1);

        ledIndicator_DepositionExtendRIght = new LedIndicator(groupBox_10);
        ledIndicator_DepositionExtendRIght->setObjectName(QStringLiteral("ledIndicator_DepositionExtendRIght"));
        ledIndicator_DepositionExtendRIght->setEnabled(true);
        ledIndicator_DepositionExtendRIght->setMinimumSize(QSize(35, 35));
        ledIndicator_DepositionExtendRIght->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(ledIndicator_DepositionExtendRIght, 0, 2, 1, 1);

        ledIndicator_DepositionRetractLeft->raise();
        ledIndicator_DepositionRetractRight->raise();
        ledIndicator_DepositionExtendLeft->raise();
        ledIndicator_DepositionExtendRIght->raise();
        groupBox_11 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(470, 10, 213, 158));
        sizePolicy1.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy1);
        groupBox_11->setFocusPolicy(Qt::NoFocus);
        verticalLayout_24 = new QVBoxLayout(groupBox_11);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        slider_LeftLooky = new QSlider(groupBox_11);
        slider_LeftLooky->setObjectName(QStringLiteral("slider_LeftLooky"));
        slider_LeftLooky->setFocusPolicy(Qt::NoFocus);
        slider_LeftLooky->setMinimum(0);
        slider_LeftLooky->setMaximum(320);
        slider_LeftLooky->setValue(160);
        slider_LeftLooky->setOrientation(Qt::Vertical);

        horizontalLayout_22->addWidget(slider_LeftLooky);

        progressBar_LeftLooky = new QProgressBar(groupBox_11);
        progressBar_LeftLooky->setObjectName(QStringLiteral("progressBar_LeftLooky"));
        progressBar_LeftLooky->setFocusPolicy(Qt::NoFocus);
        progressBar_LeftLooky->setLayoutDirection(Qt::LeftToRight);
        progressBar_LeftLooky->setMaximum(1024);
        progressBar_LeftLooky->setValue(0);
        progressBar_LeftLooky->setTextVisible(true);
        progressBar_LeftLooky->setOrientation(Qt::Vertical);
        progressBar_LeftLooky->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_22->addWidget(progressBar_LeftLooky);

        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        pushButton_LeftLooky_Forward = new QPushButton(groupBox_11);
        pushButton_LeftLooky_Forward->setObjectName(QStringLiteral("pushButton_LeftLooky_Forward"));
        pushButton_LeftLooky_Forward->setFocusPolicy(Qt::NoFocus);

        verticalLayout_38->addWidget(pushButton_LeftLooky_Forward);

        pushButton_LeftLooky_Side = new QPushButton(groupBox_11);
        pushButton_LeftLooky_Side->setObjectName(QStringLiteral("pushButton_LeftLooky_Side"));

        verticalLayout_38->addWidget(pushButton_LeftLooky_Side);

        pushButton_LeftLooky_Backward = new QPushButton(groupBox_11);
        pushButton_LeftLooky_Backward->setObjectName(QStringLiteral("pushButton_LeftLooky_Backward"));
        pushButton_LeftLooky_Backward->setFocusPolicy(Qt::NoFocus);

        verticalLayout_38->addWidget(pushButton_LeftLooky_Backward);


        horizontalLayout_22->addLayout(verticalLayout_38);


        verticalLayout_24->addLayout(horizontalLayout_22);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        lcdNumber_LeftLooky = new QLCDNumber(groupBox_11);
        lcdNumber_LeftLooky->setObjectName(QStringLiteral("lcdNumber_LeftLooky"));
        lcdNumber_LeftLooky->setFocusPolicy(Qt::NoFocus);
        lcdNumber_LeftLooky->setSmallDecimalPoint(false);
        lcdNumber_LeftLooky->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_LeftLooky->setProperty("value", QVariant(0));

        horizontalLayout_14->addWidget(lcdNumber_LeftLooky);

        label_22 = new QLabel(groupBox_11);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_14->addWidget(label_22);

        lineEdit_LeftLooky = new IntEdit(groupBox_11);
        lineEdit_LeftLooky->setObjectName(QStringLiteral("lineEdit_LeftLooky"));

        horizontalLayout_14->addWidget(lineEdit_LeftLooky);


        verticalLayout_24->addLayout(horizontalLayout_14);

        groupBox_12 = new QGroupBox(tab_MotorClosedLoop);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(690, 10, 214, 158));
        sizePolicy1.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy1);
        groupBox_12->setFocusPolicy(Qt::NoFocus);
        verticalLayout_29 = new QVBoxLayout(groupBox_12);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        slider_RightLooky = new QSlider(groupBox_12);
        slider_RightLooky->setObjectName(QStringLiteral("slider_RightLooky"));
        slider_RightLooky->setFocusPolicy(Qt::NoFocus);
        slider_RightLooky->setMinimum(0);
        slider_RightLooky->setMaximum(320);
        slider_RightLooky->setValue(160);
        slider_RightLooky->setOrientation(Qt::Vertical);

        horizontalLayout_23->addWidget(slider_RightLooky);

        progressBar_RightLooky = new QProgressBar(groupBox_12);
        progressBar_RightLooky->setObjectName(QStringLiteral("progressBar_RightLooky"));
        progressBar_RightLooky->setFocusPolicy(Qt::NoFocus);
        progressBar_RightLooky->setLayoutDirection(Qt::LeftToRight);
        progressBar_RightLooky->setMaximum(1024);
        progressBar_RightLooky->setValue(0);
        progressBar_RightLooky->setTextVisible(true);
        progressBar_RightLooky->setOrientation(Qt::Vertical);
        progressBar_RightLooky->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_23->addWidget(progressBar_RightLooky);

        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        pushButton_RightLooky_Forward = new QPushButton(groupBox_12);
        pushButton_RightLooky_Forward->setObjectName(QStringLiteral("pushButton_RightLooky_Forward"));
        pushButton_RightLooky_Forward->setFocusPolicy(Qt::NoFocus);

        verticalLayout_39->addWidget(pushButton_RightLooky_Forward);

        pushButton_RightLooky_Side = new QPushButton(groupBox_12);
        pushButton_RightLooky_Side->setObjectName(QStringLiteral("pushButton_RightLooky_Side"));

        verticalLayout_39->addWidget(pushButton_RightLooky_Side);

        pushButton_RightLooky_Backward = new QPushButton(groupBox_12);
        pushButton_RightLooky_Backward->setObjectName(QStringLiteral("pushButton_RightLooky_Backward"));
        pushButton_RightLooky_Backward->setFocusPolicy(Qt::NoFocus);

        verticalLayout_39->addWidget(pushButton_RightLooky_Backward);


        horizontalLayout_23->addLayout(verticalLayout_39);


        verticalLayout_29->addLayout(horizontalLayout_23);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        lcdNumber_RightLooky = new QLCDNumber(groupBox_12);
        lcdNumber_RightLooky->setObjectName(QStringLiteral("lcdNumber_RightLooky"));
        lcdNumber_RightLooky->setFocusPolicy(Qt::NoFocus);
        lcdNumber_RightLooky->setSmallDecimalPoint(false);
        lcdNumber_RightLooky->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_RightLooky->setProperty("value", QVariant(0));

        horizontalLayout_27->addWidget(lcdNumber_RightLooky);

        label_29 = new QLabel(groupBox_12);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_27->addWidget(label_29);

        lineEdit_RightLooky = new IntEdit(groupBox_12);
        lineEdit_RightLooky->setObjectName(QStringLiteral("lineEdit_RightLooky"));

        horizontalLayout_27->addWidget(lineEdit_RightLooky);


        verticalLayout_29->addLayout(horizontalLayout_27);

        lcdNumber_LoadCellLeft = new QLCDNumber(tab_MotorClosedLoop);
        lcdNumber_LoadCellLeft->setObjectName(QStringLiteral("lcdNumber_LoadCellLeft"));
        lcdNumber_LoadCellLeft->setGeometry(QRect(490, 210, 91, 31));
        lcdNumber_LoadCellRight = new QLCDNumber(tab_MotorClosedLoop);
        lcdNumber_LoadCellRight->setObjectName(QStringLiteral("lcdNumber_LoadCellRight"));
        lcdNumber_LoadCellRight->setGeometry(QRect(620, 210, 91, 31));
        label_3 = new QLabel(tab_MotorClosedLoop);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(490, 180, 111, 31));
        label_13 = new QLabel(tab_MotorClosedLoop);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(620, 180, 111, 31));
        pushButton_InitialExcavationTranslation = new QPushButton(tab_MotorClosedLoop);
        pushButton_InitialExcavationTranslation->setObjectName(QStringLiteral("pushButton_InitialExcavationTranslation"));
        pushButton_InitialExcavationTranslation->setGeometry(QRect(790, 270, 111, 27));
        pushButton_MaxExcavationArm = new QPushButton(tab_MotorClosedLoop);
        pushButton_MaxExcavationArm->setObjectName(QStringLiteral("pushButton_MaxExcavationArm"));
        pushButton_MaxExcavationArm->setGeometry(QRect(800, 170, 99, 27));
        pushButton_MinExcavationArm = new QPushButton(tab_MotorClosedLoop);
        pushButton_MinExcavationArm->setObjectName(QStringLiteral("pushButton_MinExcavationArm"));
        pushButton_MinExcavationArm->setGeometry(QRect(800, 240, 99, 27));
        pushButton_MidExcavationArm = new QPushButton(tab_MotorClosedLoop);
        pushButton_MidExcavationArm->setObjectName(QStringLiteral("pushButton_MidExcavationArm"));
        pushButton_MidExcavationArm->setGeometry(QRect(800, 200, 99, 27));
        tabWidget->addTab(tab_MotorClosedLoop, QString());
        splitter->addWidget(tabWidget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setFocusPolicy(Qt::NoFocus);
        verticalLayout_19 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        consoleOutputTextBrowser = new QTextBrowser(verticalLayoutWidget);
        consoleOutputTextBrowser->setObjectName(QStringLiteral("consoleOutputTextBrowser"));
        consoleOutputTextBrowser->setFocusPolicy(Qt::NoFocus);

        verticalLayout_19->addWidget(consoleOutputTextBrowser);

        pushButton_EStop = new QPushButton(verticalLayoutWidget);
        pushButton_EStop->setObjectName(QStringLiteral("pushButton_EStop"));
        pushButton_EStop->setMinimumSize(QSize(0, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 105, 105, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 52, 52, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(120, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(160, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        pushButton_EStop->setPalette(palette);
        pushButton_EStop->setFocusPolicy(Qt::NoFocus);
        pushButton_EStop->setAutoFillBackground(true);

        verticalLayout_19->addWidget(pushButton_EStop);

        pushButton_EUnstop = new QPushButton(verticalLayoutWidget);
        pushButton_EUnstop->setObjectName(QStringLiteral("pushButton_EUnstop"));

        verticalLayout_19->addWidget(pushButton_EUnstop);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout->addWidget(splitter);

        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(commandLinkButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Map), QApplication::translate("MainWindow", "Map", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Motor Speed Feedback", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Control", 0));
        locomotion_UpButton->setText(QApplication::translate("MainWindow", "Up", 0));
        locomotion_DownButton->setText(QApplication::translate("MainWindow", "Down", 0));
        locomotion_RightButton->setText(QApplication::translate("MainWindow", "Right", 0));
        locomotion_LeftButton->setText(QApplication::translate("MainWindow", "Left", 0));
        locomotion_StopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        tankPivotButtonR->setText(QApplication::translate("MainWindow", "Tank Pivot Right", 0));
        tankPivotButtonL->setText(QApplication::translate("MainWindow", "Tank Pivot Left", 0));
        label_4->setText(QApplication::translate("MainWindow", "Speed", 0));
        label_7->setText(QApplication::translate("MainWindow", "Timeout", 0));
        label_10->setText(QApplication::translate("MainWindow", "Upset", 0));
        checkBox_RunCloseLoop->setText(QApplication::translate("MainWindow", "Close Loop", 0));
        locomotion_StrafeButton->setText(QApplication::translate("MainWindow", "Strafe", 0));
        locomotion_TurnButton->setText(QApplication::translate("MainWindow", "Turn", 0));
        locomotion_StraightButton->setText(QApplication::translate("MainWindow", "Forward", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_Locomotion), QApplication::translate("MainWindow", "Locomotion", 0));
        label_6->setText(QApplication::translate("MainWindow", "Target movement speed", 0));
        pushButton_DigDeep->setText(QApplication::translate("MainWindow", "Dig Deep", 0));
        checkBox_BucketConveyorOn->setText(QApplication::translate("MainWindow", "Bucket Conveyor on", 0));
        label_12->setText(QApplication::translate("MainWindow", "Dig Speed", 0));
        pushButton_DigStop->setText(QApplication::translate("MainWindow", "Stop Digging", 0));
        label_11->setText(QApplication::translate("MainWindow", "Target Depth", 0));
        pushButton_DigSurface->setText(QApplication::translate("MainWindow", "Dig Surface", 0));
        label->setText(QApplication::translate("MainWindow", "Currents:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_ExcavationControl), QApplication::translate("MainWindow", "Excavation Control", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "Conveyor", 0));
        label_5->setText(QApplication::translate("MainWindow", "Dump Angle", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_DepositionControl), QApplication::translate("MainWindow", "Deposition Control", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Autonomy", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Front Left Wheel", 0));
        label_8->setText(QApplication::translate("MainWindow", "60 RPM", 0));
        pushButton_FrontLeftWheelStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_9->setText(QApplication::translate("MainWindow", "-60 RPM", 0));
        label_20->setText(QApplication::translate("MainWindow", "RPM", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Front Right Wheel", 0));
        label_18->setText(QApplication::translate("MainWindow", "60 RPM", 0));
        pushButton_FrontRightWheelStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_19->setText(QApplication::translate("MainWindow", "-60 RPM", 0));
        label_21->setText(QApplication::translate("MainWindow", "RPM", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Back Left Wheel", 0));
        label_23->setText(QApplication::translate("MainWindow", "60 RPM", 0));
        pushButton_BackLeftWheelStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_24->setText(QApplication::translate("MainWindow", "-60 RPM", 0));
        label_25->setText(QApplication::translate("MainWindow", "RPM", 0));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "Back Right Wheel", 0));
        label_26->setText(QApplication::translate("MainWindow", "60 RPM", 0));
        pushButton_BackRightWheelStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_27->setText(QApplication::translate("MainWindow", "-60 RPM", 0));
        label_28->setText(QApplication::translate("MainWindow", "RPM", 0));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Excavation Arm", 0));
        label_15->setText(QApplication::translate("MainWindow", "deg", 0));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Excavation Translation", 0));
        pushButton_ExcavationTranslationExtend->setText(QApplication::translate("MainWindow", "Extend", 0));
        pushButton_ExcavationTranslationStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        pushButton_ExcavationTranslationRetract->setText(QApplication::translate("MainWindow", "Retract", 0));
        label_16->setText(QApplication::translate("MainWindow", "m", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Excavation Conveyor", 0));
        checkBox_ExcavationConveyor->setText(QApplication::translate("MainWindow", "On", 0));
        label_2->setText(QApplication::translate("MainWindow", "%", 0));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "           Deposition Dump", 0));
        pushButton_DepositionDumpDump->setText(QApplication::translate("MainWindow", "Dump", 0));
        pushButton_DepositionDumpStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        pushButton_DepositionDumpStore->setText(QApplication::translate("MainWindow", "Store", 0));
        label_17->setText(QApplication::translate("MainWindow", "deg", 0));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "Left Looky", 0));
        pushButton_LeftLooky_Forward->setText(QApplication::translate("MainWindow", "Forwardsy", 0));
        pushButton_LeftLooky_Side->setText(QApplication::translate("MainWindow", "Side", 0));
        pushButton_LeftLooky_Backward->setText(QApplication::translate("MainWindow", "Backward", 0));
        label_22->setText(QApplication::translate("MainWindow", "deg", 0));
        groupBox_12->setTitle(QApplication::translate("MainWindow", "Right Looky", 0));
        pushButton_RightLooky_Forward->setText(QApplication::translate("MainWindow", "Forward", 0));
        pushButton_RightLooky_Side->setText(QApplication::translate("MainWindow", "Side", 0));
        pushButton_RightLooky_Backward->setText(QApplication::translate("MainWindow", "Backward", 0));
        label_29->setText(QApplication::translate("MainWindow", "deg", 0));
        label_3->setText(QApplication::translate("MainWindow", "Left Load Cell", 0));
        label_13->setText(QApplication::translate("MainWindow", "Right Load Cell", 0));
        pushButton_InitialExcavationTranslation->setText(QApplication::translate("MainWindow", "Initial Translt", 0));
        pushButton_MaxExcavationArm->setText(QApplication::translate("MainWindow", "Max Extend", 0));
        pushButton_MinExcavationArm->setText(QApplication::translate("MainWindow", "Min Extend", 0));
        pushButton_MidExcavationArm->setText(QApplication::translate("MainWindow", "Mid Extend", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_MotorClosedLoop), QApplication::translate("MainWindow", "Motor closed-loop", 0));
        pushButton_EStop->setText(QApplication::translate("MainWindow", "Emergency Stop", 0));
        pushButton_EUnstop->setText(QApplication::translate("MainWindow", "Unstop", 0));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Video Feed", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

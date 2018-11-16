/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[116];
    char stringdata0[2045];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "handleLocomotionUp"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "handleLocomotionDown"
QT_MOC_LITERAL(4, 52, 20), // "handleLocomotionLeft"
QT_MOC_LITERAL(5, 73, 21), // "handleLocomotionRight"
QT_MOC_LITERAL(6, 95, 23), // "handleLocomotionRelease"
QT_MOC_LITERAL(7, 119, 20), // "handleLocomotionStop"
QT_MOC_LITERAL(8, 140, 24), // "handleLocomotionStraight"
QT_MOC_LITERAL(9, 165, 20), // "handleLocomotionTurn"
QT_MOC_LITERAL(10, 186, 22), // "handleLocomotionStrafe"
QT_MOC_LITERAL(11, 209, 24), // "handleFrontLeftWheelStop"
QT_MOC_LITERAL(12, 234, 23), // "handleFrontLeftWheelSet"
QT_MOC_LITERAL(13, 258, 5), // "value"
QT_MOC_LITERAL(14, 264, 25), // "handleFrontRightWheelStop"
QT_MOC_LITERAL(15, 290, 24), // "handleFrontRightWheelSet"
QT_MOC_LITERAL(16, 315, 23), // "handleBackLeftWheelStop"
QT_MOC_LITERAL(17, 339, 22), // "handleBackLeftWheelSet"
QT_MOC_LITERAL(18, 362, 24), // "handleBackRightWheelStop"
QT_MOC_LITERAL(19, 387, 23), // "handleBackRightWheelSet"
QT_MOC_LITERAL(20, 411, 22), // "handleExcavationArmSet"
QT_MOC_LITERAL(21, 434, 22), // "handleExcavationArmDig"
QT_MOC_LITERAL(22, 457, 22), // "handleExcavationArmJog"
QT_MOC_LITERAL(23, 480, 24), // "handleExcavationArmStore"
QT_MOC_LITERAL(24, 505, 30), // "handleExcavationTranslationSet"
QT_MOC_LITERAL(25, 536, 33), // "handleExcavationTranslationEx..."
QT_MOC_LITERAL(26, 570, 31), // "handleExcavationTranslationStop"
QT_MOC_LITERAL(27, 602, 34), // "handleExcavationTranslationRe..."
QT_MOC_LITERAL(28, 637, 24), // "handleExcavationConveyor"
QT_MOC_LITERAL(29, 662, 7), // "checked"
QT_MOC_LITERAL(30, 670, 23), // "handleDepositionDumpSet"
QT_MOC_LITERAL(31, 694, 24), // "handleDepositionDumpDump"
QT_MOC_LITERAL(32, 719, 24), // "handleDepositionDumpStop"
QT_MOC_LITERAL(33, 744, 25), // "handleDepositionDumpStore"
QT_MOC_LITERAL(34, 770, 18), // "handleLowerCurrent"
QT_MOC_LITERAL(35, 789, 18), // "handleUpperCurrent"
QT_MOC_LITERAL(36, 808, 11), // "handleEStop"
QT_MOC_LITERAL(37, 820, 13), // "handleEUnstop"
QT_MOC_LITERAL(38, 834, 16), // "handleTankPivotR"
QT_MOC_LITERAL(39, 851, 16), // "handleTankPivotL"
QT_MOC_LITERAL(40, 868, 24), // "handleExcavationArmDrive"
QT_MOC_LITERAL(41, 893, 17), // "handleTankPivotRK"
QT_MOC_LITERAL(42, 911, 17), // "handleTankPivotLK"
QT_MOC_LITERAL(43, 929, 17), // "handleTankPivotRB"
QT_MOC_LITERAL(44, 947, 17), // "handleTankPivotLB"
QT_MOC_LITERAL(45, 965, 18), // "handleLeftLookySet"
QT_MOC_LITERAL(46, 984, 22), // "handleLeftLookyForward"
QT_MOC_LITERAL(47, 1007, 19), // "handleLeftLookySide"
QT_MOC_LITERAL(48, 1027, 23), // "handleLeftLookyBackward"
QT_MOC_LITERAL(49, 1051, 19), // "handleRightLookySet"
QT_MOC_LITERAL(50, 1071, 23), // "handleRightLookyForward"
QT_MOC_LITERAL(51, 1095, 20), // "handleRightLookySide"
QT_MOC_LITERAL(52, 1116, 24), // "handleRightLookyBackward"
QT_MOC_LITERAL(53, 1141, 14), // "actionTabRight"
QT_MOC_LITERAL(54, 1156, 13), // "actionTabLeft"
QT_MOC_LITERAL(55, 1170, 9), // "digConfig"
QT_MOC_LITERAL(56, 1180, 10), // "dumpConfig"
QT_MOC_LITERAL(57, 1191, 13), // "forwardConfig"
QT_MOC_LITERAL(58, 1205, 10), // "turnConfig"
QT_MOC_LITERAL(59, 1216, 12), // "strafeConfig"
QT_MOC_LITERAL(60, 1229, 5), // "drill"
QT_MOC_LITERAL(61, 1235, 3), // "key"
QT_MOC_LITERAL(62, 1239, 11), // "handleDrill"
QT_MOC_LITERAL(63, 1251, 4), // "type"
QT_MOC_LITERAL(64, 1256, 7), // "digDeep"
QT_MOC_LITERAL(65, 1264, 6), // "meters"
QT_MOC_LITERAL(66, 1271, 6), // "digFwd"
QT_MOC_LITERAL(67, 1278, 6), // "digRev"
QT_MOC_LITERAL(68, 1285, 6), // "digEnd"
QT_MOC_LITERAL(69, 1292, 9), // "bcktWdraw"
QT_MOC_LITERAL(70, 1302, 7), // "bcktFwd"
QT_MOC_LITERAL(71, 1310, 7), // "bcktRev"
QT_MOC_LITERAL(72, 1318, 10), // "dumpExtend"
QT_MOC_LITERAL(73, 1329, 11), // "dumpRetract"
QT_MOC_LITERAL(74, 1341, 12), // "dumpConveyor"
QT_MOC_LITERAL(75, 1354, 15), // "drillParameters"
QT_MOC_LITERAL(76, 1370, 5), // "depth"
QT_MOC_LITERAL(77, 1376, 8), // "armDrive"
QT_MOC_LITERAL(78, 1385, 6), // "armDig"
QT_MOC_LITERAL(79, 1392, 7), // "armGTFO"
QT_MOC_LITERAL(80, 1400, 7), // "armPrep"
QT_MOC_LITERAL(81, 1408, 25), // "inverseExcavationConveyer"
QT_MOC_LITERAL(82, 1434, 25), // "regularExcavationConveyer"
QT_MOC_LITERAL(83, 1460, 13), // "handleDigDeep"
QT_MOC_LITERAL(84, 1474, 13), // "handleDigStop"
QT_MOC_LITERAL(85, 1488, 30), // "handleExcavationTargetDepthSet"
QT_MOC_LITERAL(86, 1519, 27), // "handleExcavationDigSpeedSet"
QT_MOC_LITERAL(87, 1547, 28), // "handleExcavationMoveSpeedSet"
QT_MOC_LITERAL(88, 1576, 29), // "handleExcavationConveyerSpeed"
QT_MOC_LITERAL(89, 1606, 19), // "handleInitialExtend"
QT_MOC_LITERAL(90, 1626, 22), // "handleMaxExcavationArm"
QT_MOC_LITERAL(91, 1649, 22), // "handleMinExcavationArm"
QT_MOC_LITERAL(92, 1672, 22), // "handleMidExcavationArm"
QT_MOC_LITERAL(93, 1695, 24), // "handleLocomotionSpeedSet"
QT_MOC_LITERAL(94, 1720, 21), // "handleLocomotionUpSet"
QT_MOC_LITERAL(95, 1742, 11), // "handleState"
QT_MOC_LITERAL(96, 1754, 4), // "data"
QT_MOC_LITERAL(97, 1759, 16), // "handleA_KeyPress"
QT_MOC_LITERAL(98, 1776, 16), // "handleD_KeyPress"
QT_MOC_LITERAL(99, 1793, 18), // "handleObstacleData"
QT_MOC_LITERAL(100, 1812, 22), // "handleLocalizationData"
QT_MOC_LITERAL(101, 1835, 15), // "handleTurnRight"
QT_MOC_LITERAL(102, 1851, 14), // "handleTurnLeft"
QT_MOC_LITERAL(103, 1866, 16), // "handleClosedLoop"
QT_MOC_LITERAL(104, 1883, 18), // "handleLocalization"
QT_MOC_LITERAL(105, 1902, 15), // "startLoc_Thread"
QT_MOC_LITERAL(106, 1918, 13), // "keyPressEvent"
QT_MOC_LITERAL(107, 1932, 10), // "QKeyEvent*"
QT_MOC_LITERAL(108, 1943, 2), // "ev"
QT_MOC_LITERAL(109, 1946, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(110, 1962, 10), // "wheelEvent"
QT_MOC_LITERAL(111, 1973, 12), // "QWheelEvent*"
QT_MOC_LITERAL(112, 1986, 5), // "event"
QT_MOC_LITERAL(113, 1992, 10), // "closeEvent"
QT_MOC_LITERAL(114, 2003, 12), // "QCloseEvent*"
QT_MOC_LITERAL(115, 2016, 28) // "on_commandLinkButton_clicked"

    },
    "MainWindow\0handleLocomotionUp\0\0"
    "handleLocomotionDown\0handleLocomotionLeft\0"
    "handleLocomotionRight\0handleLocomotionRelease\0"
    "handleLocomotionStop\0handleLocomotionStraight\0"
    "handleLocomotionTurn\0handleLocomotionStrafe\0"
    "handleFrontLeftWheelStop\0"
    "handleFrontLeftWheelSet\0value\0"
    "handleFrontRightWheelStop\0"
    "handleFrontRightWheelSet\0"
    "handleBackLeftWheelStop\0handleBackLeftWheelSet\0"
    "handleBackRightWheelStop\0"
    "handleBackRightWheelSet\0handleExcavationArmSet\0"
    "handleExcavationArmDig\0handleExcavationArmJog\0"
    "handleExcavationArmStore\0"
    "handleExcavationTranslationSet\0"
    "handleExcavationTranslationExtend\0"
    "handleExcavationTranslationStop\0"
    "handleExcavationTranslationRetract\0"
    "handleExcavationConveyor\0checked\0"
    "handleDepositionDumpSet\0"
    "handleDepositionDumpDump\0"
    "handleDepositionDumpStop\0"
    "handleDepositionDumpStore\0handleLowerCurrent\0"
    "handleUpperCurrent\0handleEStop\0"
    "handleEUnstop\0handleTankPivotR\0"
    "handleTankPivotL\0handleExcavationArmDrive\0"
    "handleTankPivotRK\0handleTankPivotLK\0"
    "handleTankPivotRB\0handleTankPivotLB\0"
    "handleLeftLookySet\0handleLeftLookyForward\0"
    "handleLeftLookySide\0handleLeftLookyBackward\0"
    "handleRightLookySet\0handleRightLookyForward\0"
    "handleRightLookySide\0handleRightLookyBackward\0"
    "actionTabRight\0actionTabLeft\0digConfig\0"
    "dumpConfig\0forwardConfig\0turnConfig\0"
    "strafeConfig\0drill\0key\0handleDrill\0"
    "type\0digDeep\0meters\0digFwd\0digRev\0"
    "digEnd\0bcktWdraw\0bcktFwd\0bcktRev\0"
    "dumpExtend\0dumpRetract\0dumpConveyor\0"
    "drillParameters\0depth\0armDrive\0armDig\0"
    "armGTFO\0armPrep\0inverseExcavationConveyer\0"
    "regularExcavationConveyer\0handleDigDeep\0"
    "handleDigStop\0handleExcavationTargetDepthSet\0"
    "handleExcavationDigSpeedSet\0"
    "handleExcavationMoveSpeedSet\0"
    "handleExcavationConveyerSpeed\0"
    "handleInitialExtend\0handleMaxExcavationArm\0"
    "handleMinExcavationArm\0handleMidExcavationArm\0"
    "handleLocomotionSpeedSet\0handleLocomotionUpSet\0"
    "handleState\0data\0handleA_KeyPress\0"
    "handleD_KeyPress\0handleObstacleData\0"
    "handleLocalizationData\0handleTurnRight\0"
    "handleTurnLeft\0handleClosedLoop\0"
    "handleLocalization\0startLoc_Thread\0"
    "keyPressEvent\0QKeyEvent*\0ev\0keyReleaseEvent\0"
    "wheelEvent\0QWheelEvent*\0event\0closeEvent\0"
    "QCloseEvent*\0on_commandLinkButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  524,    2, 0x0a /* Public */,
       3,    0,  525,    2, 0x0a /* Public */,
       4,    0,  526,    2, 0x0a /* Public */,
       5,    0,  527,    2, 0x0a /* Public */,
       6,    0,  528,    2, 0x0a /* Public */,
       7,    0,  529,    2, 0x0a /* Public */,
       8,    0,  530,    2, 0x0a /* Public */,
       9,    0,  531,    2, 0x0a /* Public */,
      10,    0,  532,    2, 0x0a /* Public */,
      11,    0,  533,    2, 0x0a /* Public */,
      12,    1,  534,    2, 0x0a /* Public */,
      14,    0,  537,    2, 0x0a /* Public */,
      15,    1,  538,    2, 0x0a /* Public */,
      16,    0,  541,    2, 0x0a /* Public */,
      17,    1,  542,    2, 0x0a /* Public */,
      18,    0,  545,    2, 0x0a /* Public */,
      19,    1,  546,    2, 0x0a /* Public */,
      20,    1,  549,    2, 0x0a /* Public */,
      21,    0,  552,    2, 0x0a /* Public */,
      22,    0,  553,    2, 0x0a /* Public */,
      23,    0,  554,    2, 0x0a /* Public */,
      24,    1,  555,    2, 0x0a /* Public */,
      25,    0,  558,    2, 0x0a /* Public */,
      26,    0,  559,    2, 0x0a /* Public */,
      27,    0,  560,    2, 0x0a /* Public */,
      28,    1,  561,    2, 0x0a /* Public */,
      30,    1,  564,    2, 0x0a /* Public */,
      31,    0,  567,    2, 0x0a /* Public */,
      32,    0,  568,    2, 0x0a /* Public */,
      33,    0,  569,    2, 0x0a /* Public */,
      34,    1,  570,    2, 0x0a /* Public */,
      35,    1,  573,    2, 0x0a /* Public */,
      36,    0,  576,    2, 0x0a /* Public */,
      37,    0,  577,    2, 0x0a /* Public */,
      38,    0,  578,    2, 0x0a /* Public */,
      39,    0,  579,    2, 0x0a /* Public */,
      40,    0,  580,    2, 0x0a /* Public */,
      41,    0,  581,    2, 0x0a /* Public */,
      42,    0,  582,    2, 0x0a /* Public */,
      43,    0,  583,    2, 0x0a /* Public */,
      44,    0,  584,    2, 0x0a /* Public */,
      45,    1,  585,    2, 0x0a /* Public */,
      46,    0,  588,    2, 0x0a /* Public */,
      47,    0,  589,    2, 0x0a /* Public */,
      48,    0,  590,    2, 0x0a /* Public */,
      49,    1,  591,    2, 0x0a /* Public */,
      50,    0,  594,    2, 0x0a /* Public */,
      51,    0,  595,    2, 0x0a /* Public */,
      52,    0,  596,    2, 0x0a /* Public */,
      53,    0,  597,    2, 0x0a /* Public */,
      54,    0,  598,    2, 0x0a /* Public */,
      55,    0,  599,    2, 0x0a /* Public */,
      56,    0,  600,    2, 0x0a /* Public */,
      57,    0,  601,    2, 0x0a /* Public */,
      58,    0,  602,    2, 0x0a /* Public */,
      59,    0,  603,    2, 0x0a /* Public */,
      60,    2,  604,    2, 0x0a /* Public */,
      62,    2,  609,    2, 0x0a /* Public */,
      64,    1,  614,    2, 0x0a /* Public */,
      66,    1,  617,    2, 0x0a /* Public */,
      67,    1,  620,    2, 0x0a /* Public */,
      68,    0,  623,    2, 0x0a /* Public */,
      69,    0,  624,    2, 0x0a /* Public */,
      70,    0,  625,    2, 0x0a /* Public */,
      71,    0,  626,    2, 0x0a /* Public */,
      72,    0,  627,    2, 0x0a /* Public */,
      73,    0,  628,    2, 0x0a /* Public */,
      74,    1,  629,    2, 0x0a /* Public */,
      75,    1,  632,    2, 0x0a /* Public */,
      77,    0,  635,    2, 0x0a /* Public */,
      78,    0,  636,    2, 0x0a /* Public */,
      79,    0,  637,    2, 0x0a /* Public */,
      80,    0,  638,    2, 0x0a /* Public */,
      81,    1,  639,    2, 0x0a /* Public */,
      82,    1,  642,    2, 0x0a /* Public */,
      83,    0,  645,    2, 0x0a /* Public */,
      84,    0,  646,    2, 0x0a /* Public */,
      85,    1,  647,    2, 0x0a /* Public */,
      86,    1,  650,    2, 0x0a /* Public */,
      87,    1,  653,    2, 0x0a /* Public */,
      88,    1,  656,    2, 0x0a /* Public */,
      89,    0,  659,    2, 0x0a /* Public */,
      90,    0,  660,    2, 0x0a /* Public */,
      91,    0,  661,    2, 0x0a /* Public */,
      92,    0,  662,    2, 0x0a /* Public */,
      93,    1,  663,    2, 0x0a /* Public */,
      94,    1,  666,    2, 0x0a /* Public */,
      95,    2,  669,    2, 0x0a /* Public */,
      97,    0,  674,    2, 0x0a /* Public */,
      98,    0,  675,    2, 0x0a /* Public */,
      99,    2,  676,    2, 0x0a /* Public */,
     100,    2,  681,    2, 0x0a /* Public */,
     101,    0,  686,    2, 0x0a /* Public */,
     102,    0,  687,    2, 0x0a /* Public */,
     103,    1,  688,    2, 0x0a /* Public */,
     104,    2,  691,    2, 0x0a /* Public */,
     105,    0,  696,    2, 0x0a /* Public */,
     106,    1,  697,    2, 0x0a /* Public */,
     109,    1,  700,    2, 0x0a /* Public */,
     110,    1,  703,    2, 0x0a /* Public */,
     113,    1,  706,    2, 0x0a /* Public */,
     115,    0,  709,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,   13,   61,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   63,   13,
    QMetaType::Void, QMetaType::Float,   65,
    QMetaType::Void, QMetaType::Float,   65,
    QMetaType::Void, QMetaType::Float,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Double,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   61,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   61,   96,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   61,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   61,   96,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 111,  112,
    QMetaType::Void, 0x80000000 | 114,  112,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleLocomotionUp(); break;
        case 1: _t->handleLocomotionDown(); break;
        case 2: _t->handleLocomotionLeft(); break;
        case 3: _t->handleLocomotionRight(); break;
        case 4: _t->handleLocomotionRelease(); break;
        case 5: _t->handleLocomotionStop(); break;
        case 6: _t->handleLocomotionStraight(); break;
        case 7: _t->handleLocomotionTurn(); break;
        case 8: _t->handleLocomotionStrafe(); break;
        case 9: _t->handleFrontLeftWheelStop(); break;
        case 10: _t->handleFrontLeftWheelSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->handleFrontRightWheelStop(); break;
        case 12: _t->handleFrontRightWheelSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->handleBackLeftWheelStop(); break;
        case 14: _t->handleBackLeftWheelSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->handleBackRightWheelStop(); break;
        case 16: _t->handleBackRightWheelSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->handleExcavationArmSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->handleExcavationArmDig(); break;
        case 19: _t->handleExcavationArmJog(); break;
        case 20: _t->handleExcavationArmStore(); break;
        case 21: _t->handleExcavationTranslationSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->handleExcavationTranslationExtend(); break;
        case 23: _t->handleExcavationTranslationStop(); break;
        case 24: _t->handleExcavationTranslationRetract(); break;
        case 25: _t->handleExcavationConveyor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->handleDepositionDumpSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->handleDepositionDumpDump(); break;
        case 28: _t->handleDepositionDumpStop(); break;
        case 29: _t->handleDepositionDumpStore(); break;
        case 30: _t->handleLowerCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->handleUpperCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->handleEStop(); break;
        case 33: _t->handleEUnstop(); break;
        case 34: _t->handleTankPivotR(); break;
        case 35: _t->handleTankPivotL(); break;
        case 36: _t->handleExcavationArmDrive(); break;
        case 37: _t->handleTankPivotRK(); break;
        case 38: _t->handleTankPivotLK(); break;
        case 39: _t->handleTankPivotRB(); break;
        case 40: _t->handleTankPivotLB(); break;
        case 41: _t->handleLeftLookySet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->handleLeftLookyForward(); break;
        case 43: _t->handleLeftLookySide(); break;
        case 44: _t->handleLeftLookyBackward(); break;
        case 45: _t->handleRightLookySet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->handleRightLookyForward(); break;
        case 47: _t->handleRightLookySide(); break;
        case 48: _t->handleRightLookyBackward(); break;
        case 49: _t->actionTabRight(); break;
        case 50: _t->actionTabLeft(); break;
        case 51: _t->digConfig(); break;
        case 52: _t->dumpConfig(); break;
        case 53: _t->forwardConfig(); break;
        case 54: _t->turnConfig(); break;
        case 55: _t->strafeConfig(); break;
        case 56: _t->drill((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 57: _t->handleDrill((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 58: _t->digDeep((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: _t->digFwd((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->digRev((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 61: _t->digEnd(); break;
        case 62: _t->bcktWdraw(); break;
        case 63: _t->bcktFwd(); break;
        case 64: _t->bcktRev(); break;
        case 65: _t->dumpExtend(); break;
        case 66: _t->dumpRetract(); break;
        case 67: _t->dumpConveyor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->drillParameters((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 69: _t->armDrive(); break;
        case 70: _t->armDig(); break;
        case 71: _t->armGTFO(); break;
        case 72: _t->armPrep(); break;
        case 73: _t->inverseExcavationConveyer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->regularExcavationConveyer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->handleDigDeep(); break;
        case 76: _t->handleDigStop(); break;
        case 77: _t->handleExcavationTargetDepthSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->handleExcavationDigSpeedSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->handleExcavationMoveSpeedSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->handleExcavationConveyerSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->handleInitialExtend(); break;
        case 82: _t->handleMaxExcavationArm(); break;
        case 83: _t->handleMinExcavationArm(); break;
        case 84: _t->handleMidExcavationArm(); break;
        case 85: _t->handleLocomotionSpeedSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->handleLocomotionUpSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: _t->handleState((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 88: _t->handleA_KeyPress(); break;
        case 89: _t->handleD_KeyPress(); break;
        case 90: _t->handleObstacleData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 91: _t->handleLocalizationData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 92: _t->handleTurnRight(); break;
        case 93: _t->handleTurnLeft(); break;
        case 94: _t->handleClosedLoop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->handleLocalization((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 96: _t->startLoc_Thread(); break;
        case 97: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 98: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 99: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 100: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 101: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 102)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 102;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

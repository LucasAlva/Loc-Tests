/********************************************************************************
** Form generated from reading UI file 'cameraone.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAONE_H
#define UI_CAMERAONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CameraOne
{
public:
    QLabel *cam1lbl;
    QLabel *cam4lbl;
    QLabel *cam3lbl;
    QLabel *cam2lbl;
    QLabel *cam5lbl;
    QCheckBox *leftView_Box;
    QCheckBox *rightView_Box;

    void setupUi(QDialog *CameraOne)
    {
        if (CameraOne->objectName().isEmpty())
            CameraOne->setObjectName(QString::fromUtf8("CameraOne"));
        CameraOne->resize(878, 266);
        cam1lbl = new QLabel(CameraOne);
        cam1lbl->setObjectName(QString::fromUtf8("cam1lbl"));
        cam1lbl->setGeometry(QRect(270, 10, 271, 201));
        cam4lbl = new QLabel(CameraOne);
        cam4lbl->setObjectName(QString::fromUtf8("cam4lbl"));
        cam4lbl->setGeometry(QRect(550, 380, 261, 201));
        cam3lbl = new QLabel(CameraOne);
        cam3lbl->setObjectName(QString::fromUtf8("cam3lbl"));
        cam3lbl->setGeometry(QRect(40, 470, 161, 91));
        cam2lbl = new QLabel(CameraOne);
        cam2lbl->setObjectName(QString::fromUtf8("cam2lbl"));
        cam2lbl->setGeometry(QRect(10, 20, 261, 191));
        cam5lbl = new QLabel(CameraOne);
        cam5lbl->setObjectName(QString::fromUtf8("cam5lbl"));
        cam5lbl->setGeometry(QRect(550, 20, 241, 191));
        leftView_Box = new QCheckBox(CameraOne);
        leftView_Box->setObjectName(QString::fromUtf8("leftView_Box"));
        leftView_Box->setGeometry(QRect(80, 240, 101, 17));
        rightView_Box = new QCheckBox(CameraOne);
        rightView_Box->setObjectName(QString::fromUtf8("rightView_Box"));
        rightView_Box->setGeometry(QRect(330, 240, 101, 17));

        retranslateUi(CameraOne);

        QMetaObject::connectSlotsByName(CameraOne);
    } // setupUi

    void retranslateUi(QDialog *CameraOne)
    {
        CameraOne->setWindowTitle(QApplication::translate("CameraOne", "Dialog", 0, QApplication::UnicodeUTF8));
        cam1lbl->setText(QString());
        cam4lbl->setText(QString());
        cam3lbl->setText(QString());
        cam2lbl->setText(QString());
        cam5lbl->setText(QString());
        leftView_Box->setText(QApplication::translate("CameraOne", "Left Drive Aim", 0, QApplication::UnicodeUTF8));
        rightView_Box->setText(QApplication::translate("CameraOne", "Right Drive Aim", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CameraOne: public Ui_CameraOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAONE_H

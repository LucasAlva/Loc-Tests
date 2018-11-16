/********************************************************************************
** Form generated from reading UI file 'cameraone.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAONE_H
#define UI_CAMERAONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

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
            CameraOne->setObjectName(QStringLiteral("CameraOne"));
        CameraOne->resize(878, 266);
        cam1lbl = new QLabel(CameraOne);
        cam1lbl->setObjectName(QStringLiteral("cam1lbl"));
        cam1lbl->setGeometry(QRect(270, 10, 271, 201));
        cam4lbl = new QLabel(CameraOne);
        cam4lbl->setObjectName(QStringLiteral("cam4lbl"));
        cam4lbl->setGeometry(QRect(550, 380, 261, 201));
        cam3lbl = new QLabel(CameraOne);
        cam3lbl->setObjectName(QStringLiteral("cam3lbl"));
        cam3lbl->setGeometry(QRect(40, 470, 161, 91));
        cam2lbl = new QLabel(CameraOne);
        cam2lbl->setObjectName(QStringLiteral("cam2lbl"));
        cam2lbl->setGeometry(QRect(10, 20, 261, 191));
        cam5lbl = new QLabel(CameraOne);
        cam5lbl->setObjectName(QStringLiteral("cam5lbl"));
        cam5lbl->setGeometry(QRect(550, 20, 241, 191));
        leftView_Box = new QCheckBox(CameraOne);
        leftView_Box->setObjectName(QStringLiteral("leftView_Box"));
        leftView_Box->setGeometry(QRect(80, 240, 101, 17));
        rightView_Box = new QCheckBox(CameraOne);
        rightView_Box->setObjectName(QStringLiteral("rightView_Box"));
        rightView_Box->setGeometry(QRect(330, 240, 101, 17));

        retranslateUi(CameraOne);

        QMetaObject::connectSlotsByName(CameraOne);
    } // setupUi

    void retranslateUi(QDialog *CameraOne)
    {
        CameraOne->setWindowTitle(QApplication::translate("CameraOne", "Dialog", 0));
        cam1lbl->setText(QString());
        cam4lbl->setText(QString());
        cam3lbl->setText(QString());
        cam2lbl->setText(QString());
        cam5lbl->setText(QString());
        leftView_Box->setText(QApplication::translate("CameraOne", "Left Drive Aim", 0));
        rightView_Box->setText(QApplication::translate("CameraOne", "Right Drive Aim", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraOne: public Ui_CameraOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAONE_H

/********************************************************************************
** Form generated from reading UI file 'pinengineclass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINENGINECLASS_H
#define UI_PINENGINECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PinEngineClass
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_0;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Sign;
    QLineEdit *lineEdit_pin;

    void setupUi(QDialog *PinEngineClass)
    {
        if (PinEngineClass->objectName().isEmpty())
            PinEngineClass->setObjectName(QString::fromUtf8("PinEngineClass"));
        PinEngineClass->resize(400, 300);
        pushButton_1 = new QPushButton(PinEngineClass);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 20, 75, 23));
        pushButton_2 = new QPushButton(PinEngineClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 20, 75, 23));
        pushButton_4 = new QPushButton(PinEngineClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 60, 75, 23));
        pushButton_3 = new QPushButton(PinEngineClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 20, 75, 23));
        pushButton_6 = new QPushButton(PinEngineClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 60, 75, 23));
        pushButton_5 = new QPushButton(PinEngineClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 60, 75, 23));
        pushButton_0 = new QPushButton(PinEngineClass);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(140, 150, 75, 23));
        pushButton_9 = new QPushButton(PinEngineClass);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 100, 75, 23));
        pushButton_8 = new QPushButton(PinEngineClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 100, 75, 23));
        pushButton_7 = new QPushButton(PinEngineClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 100, 75, 23));
        pushButton_Clear = new QPushButton(PinEngineClass);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(30, 220, 75, 23));
        pushButton_Sign = new QPushButton(PinEngineClass);
        pushButton_Sign->setObjectName(QString::fromUtf8("pushButton_Sign"));
        pushButton_Sign->setGeometry(QRect(260, 220, 75, 23));
        lineEdit_pin = new QLineEdit(PinEngineClass);
        lineEdit_pin->setObjectName(QString::fromUtf8("lineEdit_pin"));
        lineEdit_pin->setGeometry(QRect(70, 180, 221, 21));

        retranslateUi(PinEngineClass);

        QMetaObject::connectSlotsByName(PinEngineClass);
    } // setupUi

    void retranslateUi(QDialog *PinEngineClass)
    {
        PinEngineClass->setWindowTitle(QCoreApplication::translate("PinEngineClass", "Dialog", nullptr));
        pushButton_1->setText(QCoreApplication::translate("PinEngineClass", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PinEngineClass", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PinEngineClass", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PinEngineClass", "3", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PinEngineClass", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PinEngineClass", "5", nullptr));
        pushButton_0->setText(QCoreApplication::translate("PinEngineClass", "0", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PinEngineClass", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PinEngineClass", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PinEngineClass", "7", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("PinEngineClass", "Tyhjenn\303\244", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("PinEngineClass", "Kirjaudu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinEngineClass: public Ui_PinEngineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINENGINECLASS_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinEngineClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Sign;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_Pincode;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *PinEngineClass)
    {
        if (PinEngineClass->objectName().isEmpty())
            PinEngineClass->setObjectName(QString::fromUtf8("PinEngineClass"));
        PinEngineClass->resize(800, 600);
        label = new QLabel(PinEngineClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/paper_texture_beige_179500_800x600.jpg")));
        label_2 = new QLabel(PinEngineClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 100, 51, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: bold 14px;"));
        groupBox = new QGroupBox(PinEngineClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(-60, 140, 861, 401));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 20, 764, 351));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_Sign = new QPushButton(layoutWidget);
        pushButton_Sign->setObjectName(QString::fromUtf8("pushButton_Sign"));
        pushButton_Sign->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_Sign, 5, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_Clear = new QPushButton(layoutWidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_Clear, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        lineEdit_Pincode = new QLineEdit(PinEngineClass);
        lineEdit_Pincode->setObjectName(QString::fromUtf8("lineEdit_Pincode"));
        lineEdit_Pincode->setGeometry(QRect(240, 100, 281, 31));
        lineEdit_Pincode->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
" \n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        lineEdit_Pincode->setEchoMode(QLineEdit::Password);
        lineEdit_Pincode->setReadOnly(false);
        lcdNumber = new QLCDNumber(PinEngineClass);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(630, 40, 101, 61));

        retranslateUi(PinEngineClass);
        QObject::connect(pushButton_1, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_Sign, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), lineEdit_Pincode, SLOT(selectAll()));
        QObject::connect(pushButton_Clear, SIGNAL(clicked()), lineEdit_Pincode, SLOT(clear()));

        QMetaObject::connectSlotsByName(PinEngineClass);
    } // setupUi

    void retranslateUi(QDialog *PinEngineClass)
    {
        PinEngineClass->setWindowTitle(QCoreApplication::translate("PinEngineClass", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("PinEngineClass", "PIN", nullptr));
        groupBox->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("PinEngineClass", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("PinEngineClass", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("PinEngineClass", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("PinEngineClass", "0", nullptr));
        pushButton_6->setText(QCoreApplication::translate("PinEngineClass", "6", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("PinEngineClass", "Kirjaudu", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PinEngineClass", "7", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("PinEngineClass", "<---", nullptr));
        pushButton_5->setText(QCoreApplication::translate("PinEngineClass", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PinEngineClass", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PinEngineClass", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PinEngineClass", "9", nullptr));
        lineEdit_Pincode->setPlaceholderText(QCoreApplication::translate("PinEngineClass", "Sy\303\266t\303\244 PIN-koodisi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinEngineClass: public Ui_PinEngineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINENGINECLASS_H

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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PinEngineClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_1;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_0;
    QPushButton *pushButton_kumita;
    QPushButton *pushButton_kirjaudu;
    QLineEdit *lineEdit_pin;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *PinEngineClass)
    {
        if (PinEngineClass->objectName().isEmpty())
            PinEngineClass->setObjectName(QString::fromUtf8("PinEngineClass"));
        PinEngineClass->resize(800, 600);
        layoutWidget = new QWidget(PinEngineClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 190, 574, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 255, 203, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_7->setPalette(palette);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_7, 3, 1, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_8->setPalette(palette1);
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_8, 6, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_9->setPalette(palette2);
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_9, 3, 0, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_10->setPalette(palette3);
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_11->setPalette(palette4);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_11, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_12->setPalette(palette5);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_12, 6, 2, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_1->setPalette(palette6);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(239, 255, 203);\n"
"\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"font color: black"));
        pushButton_1->setIconSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_13->setPalette(palette7);
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_13, 3, 2, 1, 1);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_14->setPalette(palette8);
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_14, 6, 0, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_0->setPalette(palette9);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_0, 7, 1, 1, 1);

        pushButton_kumita = new QPushButton(layoutWidget);
        pushButton_kumita->setObjectName(QString::fromUtf8("pushButton_kumita"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_kumita->setPalette(palette10);
        pushButton_kumita->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_kumita, 7, 0, 1, 1);

        pushButton_kirjaudu = new QPushButton(layoutWidget);
        pushButton_kirjaudu->setObjectName(QString::fromUtf8("pushButton_kirjaudu"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_kirjaudu->setPalette(palette11);
        pushButton_kirjaudu->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        gridLayout->addWidget(pushButton_kirjaudu, 7, 2, 1, 1);

        lineEdit_pin = new QLineEdit(PinEngineClass);
        lineEdit_pin->setObjectName(QString::fromUtf8("lineEdit_pin"));
        lineEdit_pin->setGeometry(QRect(180, 80, 375, 24));
        lineEdit_pin->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 255, 203);\n"
"    border-style: outset;\n"
" \n"
"    border-radius: 10px;\n"
"    border-color: grey;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        lineEdit_pin->setMaxLength(4);
        lineEdit_pin->setEchoMode(QLineEdit::Normal);
        label = new QLabel(PinEngineClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/paper_texture_beige_179500_800x600.jpg")));
        label_2 = new QLabel(PinEngineClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 80, 51, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: bold 14px;"));
        label->raise();
        layoutWidget->raise();
        lineEdit_pin->raise();
        label_2->raise();

        retranslateUi(PinEngineClass);
        QObject::connect(pushButton_1, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_kirjaudu, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), lineEdit_pin, SLOT(selectAll()));
        QObject::connect(pushButton_kumita, SIGNAL(clicked()), lineEdit_pin, SLOT(clear()));

        QMetaObject::connectSlotsByName(PinEngineClass);
    } // setupUi

    void retranslateUi(QDialog *PinEngineClass)
    {
        PinEngineClass->setWindowTitle(QCoreApplication::translate("PinEngineClass", "Dialog", nullptr));
        pushButton_7->setText(QCoreApplication::translate("PinEngineClass", "5", nullptr));
        pushButton_8->setText(QCoreApplication::translate("PinEngineClass", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("PinEngineClass", "4", nullptr));
        pushButton_10->setText(QCoreApplication::translate("PinEngineClass", "3", nullptr));
        pushButton_11->setText(QCoreApplication::translate("PinEngineClass", "2", nullptr));
        pushButton_12->setText(QCoreApplication::translate("PinEngineClass", "9", nullptr));
        pushButton_1->setText(QCoreApplication::translate("PinEngineClass", "1", nullptr));
        pushButton_13->setText(QCoreApplication::translate("PinEngineClass", "6", nullptr));
        pushButton_14->setText(QCoreApplication::translate("PinEngineClass", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("PinEngineClass", "0", nullptr));
        pushButton_kumita->setText(QCoreApplication::translate("PinEngineClass", "<---", nullptr));
        pushButton_kirjaudu->setText(QCoreApplication::translate("PinEngineClass", "Kirjaudu", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("PinEngineClass", "PIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PinEngineClass: public Ui_PinEngineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINENGINECLASS_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *display;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *btn7;
    QPushButton *btnDiv;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn4;
    QPushButton *btnMul;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnSub;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *btnEqual;
    QPushButton *btnAdd;
    QPushButton *btnClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(419, 338);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 320, 202));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        display = new QLineEdit(widget);
        display->setObjectName("display");
        display->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(18);
        display->setFont(font);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        display->setReadOnly(true);

        gridLayout->addWidget(display, 0, 1, 1, 3);

        btn9 = new QPushButton(widget);
        btn9->setObjectName("btn9");

        gridLayout->addWidget(btn9, 1, 0, 1, 1);

        btn8 = new QPushButton(widget);
        btn8->setObjectName("btn8");

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn7 = new QPushButton(widget);
        btn7->setObjectName("btn7");

        gridLayout->addWidget(btn7, 1, 2, 1, 1);

        btnDiv = new QPushButton(widget);
        btnDiv->setObjectName("btnDiv");

        gridLayout->addWidget(btnDiv, 1, 3, 1, 1);

        btn6 = new QPushButton(widget);
        btn6->setObjectName("btn6");

        gridLayout->addWidget(btn6, 2, 0, 1, 1);

        btn5 = new QPushButton(widget);
        btn5->setObjectName("btn5");

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn4 = new QPushButton(widget);
        btn4->setObjectName("btn4");

        gridLayout->addWidget(btn4, 2, 2, 1, 1);

        btnMul = new QPushButton(widget);
        btnMul->setObjectName("btnMul");

        gridLayout->addWidget(btnMul, 2, 3, 1, 1);

        btn1 = new QPushButton(widget);
        btn1->setObjectName("btn1");

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btn2 = new QPushButton(widget);
        btn2->setObjectName("btn2");

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn3 = new QPushButton(widget);
        btn3->setObjectName("btn3");

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btnSub = new QPushButton(widget);
        btnSub->setObjectName("btnSub");

        gridLayout->addWidget(btnSub, 3, 3, 1, 1);

        btn0 = new QPushButton(widget);
        btn0->setObjectName("btn0");

        gridLayout->addWidget(btn0, 4, 0, 1, 1);

        btnDot = new QPushButton(widget);
        btnDot->setObjectName("btnDot");

        gridLayout->addWidget(btnDot, 4, 1, 1, 1);

        btnEqual = new QPushButton(widget);
        btnEqual->setObjectName("btnEqual");

        gridLayout->addWidget(btnEqual, 4, 2, 1, 1);

        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 4, 3, 1, 1);

        btnClear = new QPushButton(widget);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 419, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

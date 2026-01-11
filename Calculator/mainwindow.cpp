#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Number buttons
    connect(ui->btn0, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn1, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn2, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn3, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn4, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn5, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn6, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn7, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn8, &QPushButton::clicked, this, &MainWindow::digitPressed);
    connect(ui->btn9, &QPushButton::clicked, this, &MainWindow::digitPressed);

    // Operator buttons
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::operatorPressed);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::operatorPressed);

    // Equal and Clear
    connect(ui->btnEqual, &QPushButton::clicked, this, &MainWindow::equalPressed);
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::clearPressed);

}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digitPressed()
{
    QPushButton *button = (QPushButton*)sender();
    QString newValue = ui->display->text() + button->text();
    ui->display->setText(newValue);
}

void MainWindow::operatorPressed()
{
    QPushButton *button = (QPushButton*)sender();
    firstNumber = ui->display->text().toDouble();
    operation = button->text();
    ui->display->clear();
}

void MainWindow::equalPressed()
{
    double secondNumber = ui->display->text().toDouble();
    double result = 0;

    if (operation == "+")
        result = firstNumber + secondNumber;
    else if (operation == "-")
        result = firstNumber - secondNumber;
    else if (operation == "*")
        result = firstNumber * secondNumber;
    else if (operation == "/")
        result = firstNumber / secondNumber;

    ui->display->setText(QString::number(result));
}

void MainWindow::clearPressed()
{
    ui->display->clear();
}

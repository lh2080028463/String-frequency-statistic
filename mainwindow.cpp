#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mymainwindow.h"//页面二头文件
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->ppage2=new MyMainWindow;//实例化页面二

    connect(ui->enterButton,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage2->show();

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include<QPushButton>
#include"interface.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);

    this->ppage2=new MyMainWindow2;//实例化页面三（用于绘制图表）

    //返回窗口一
    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });

    //进入窗口三
    connect(ui->enterButton,&QPushButton::clicked,[=](){
        this->hide();
        this->ppage2->show();
    });

    connect(this->ppage2,&MyMainWindow2::back,[=](){
        this->ppage2->hide();
        this->show();
    });
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

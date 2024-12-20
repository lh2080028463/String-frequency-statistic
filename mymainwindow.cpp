#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include<QPushButton>
#include"interface.h"
#include "mymainwindow2.h"
#include<QString>

extern QMap<QString,int>m;

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
    connect(ui->enterButton,&QPushButton::clicked,this,[this](){
        onEnterButtonClicked(m);
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


void MyMainWindow::onEnterButtonClicked(QMap<QString, int> data)
{

    // 创建一个新的 MyMainWindow2 窗口
    MyMainWindow2 *chartWindow = new MyMainWindow2;

    // 绘制柱状图
    int num=fmin(data.size(),5);
    chartWindow->drawBarChart(data, num);

    // 显示窗口
    chartWindow->show();
}

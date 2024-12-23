#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include<QPushButton>
#include"interface.h"
#include "mymainwindow2.h"
#include<QString>
#include<chooser.h>

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
        if(ui->comboBox->currentText()=="柱状图"){
            onEnterButtonClicked(m,1);
        }
        else if(ui->comboBox->currentText()=="饼状图"){
            onEnterButtonClicked(m,2);
        }
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


void MyMainWindow::onEnterButtonClicked(QMap<QString, int> data,int index)
{

    // 创建一个新的 MyMainWindow2 窗口
    MyMainWindow2 *chartWindow = new MyMainWindow2;

    switch (index) {
    case 0:
    {

    }
    case 1:// 绘制柱状图
    {
        chartWindow->setWindowTitle("柱状图");
        if(ui->combobox3->currentIndex()==0){
            chartWindow->drawBarChart(data, ui->combobox2->currentIndex()+1,[=](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
                return left.second > right.second;
            });
        }
        else if(ui->combobox3->currentIndex()==1){
            chartWindow->drawBarChart(data, ui->combobox2->currentIndex()+1,[=](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
                return left.second < right.second;
            });
        }
        break;
    }
    case 2:
    {
        chartWindow->setWindowTitle("饼状图");
        if(ui->combobox3->currentIndex()==0){
            chartWindow->drawPieChart(data, ui->combobox2->currentIndex()+1,[=](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
                return left.second > right.second;
            });
        }
        else if(ui->combobox3->currentIndex()==1){
            chartWindow->drawPieChart(data, ui->combobox2->currentIndex()+1,[=](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
                return left.second < right.second;
            });
        }
        break;
    }
    default:
        break;
    }



    // 显示窗口
    chartWindow->show();
}

void MyMainWindow::on_pushButton_clicked()
{
    this->close();
    Chooser* chooser = new Chooser;
    chooser->show();
}



#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mymainwindow.h"//页面二头文件
#include<QPushButton>
#include"interface.h"
#include<QMap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->ppage2=new MyMainWindow;//实例化页面二

    connect(ui->enterButton,&QPushButton::clicked,[=](){
        int flag=ui->combobox->currentIndex();//0为直接输入，1为文件输入
        if(!flag){
            QString s = ui->textEdit->toPlainText();
            int l,r,len=s.length();
            extern QMap<QString,int>m;
            l=0;
            s+="#";

            while(l<len){
                if(suit(s[l])){
                    QString temp;
                    r=l+1;
                    while(r<len&&suit(s[r]))r++;
                    temp=s.mid(l,r-l);
                    if(m.contains(temp))m[temp]+=1;
                    else m.insert(temp,1);
                    l=r+1;
                }
                else{
                    l++;
                }
            }
        }
        this->hide();
        this->ppage2->show();

    });

    connect(this->ppage2,&MyMainWindow::back,[=](){
        this->ppage2->hide();
        this->show();
    });

    connect(ui->quitButton,&QPushButton::clicked,[=](){
        this->close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

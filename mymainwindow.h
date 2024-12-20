#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include"mymainwindow2.h"
#include<QPushButton>
#include<QChartView>
namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

    MyMainWindow2*ppage2=NULL;//页面三实例化对象地址
private slots:
    void onEnterButtonClicked(QMap<QString, int> data,int index);  // 按钮点击槽函数
signals:
    void back();

private:
    Ui::MyMainWindow *ui;
    void drawBarChart(QMap<QString, int> data, int n);  // 绘制柱状图函数
    QPushButton *enterButton;  // 按钮

};

#endif // MYMAINWINDOW_H

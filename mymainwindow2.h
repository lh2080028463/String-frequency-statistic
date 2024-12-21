#ifndef MYMAINWINDOW2_H
#define MYMAINWINDOW2_H

#include <QMainWindow>
#include <QtCharts>

namespace Ui {
class MyMainWindow2;
}

class MyMainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow2(QWidget *parent = nullptr);
    ~MyMainWindow2();
    void drawBarChart(QMap<QString, int> data,
                      int n,
                      std::function<bool(
                          const std::pair<QString, int>& left, const std::pair<QString, int>& right)> cmp);  // 绘制柱状图
    void drawPieChart(QMap<QString, int> data,
                      int n,
                      std::function<bool(
                          const std::pair<QString, int>& left, const std::pair<QString, int>& right)> cmp);  //绘制饼状图
signals:
    void back();

private:
    Ui::MyMainWindow2 *ui;
    QChartView *chartView;
};

#endif // MYMAINWINDOW2_H

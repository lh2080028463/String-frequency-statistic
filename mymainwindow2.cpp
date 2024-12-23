#include "mymainwindow2.h"
#include "ui_mymainwindow2.h"
#include<QPushButton>
#include"interface.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include <QValueAxis>
#include <QChart>

MyMainWindow2 ::MyMainWindow2 (QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow2 )
{
    ui->setupUi(this);

    // connect(ui->quitButton,&QPushButton::clicked,[=](){
    //     emit this->back();
    // });
    //setWindowTitle("Bar Chart");
    // 创建一个 QChartView 用于显示图表
    chartView = new QChartView(this);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMinimumSize(800, 600);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);
}

MyMainWindow2 ::~MyMainWindow2 ()
{
    delete ui;
}

//绘制柱状图

void MyMainWindow2::drawBarChart(QMap<QString, int> data,
                                 int n,
                                 std::function<bool(const std::pair<QString, int>& left, const std::pair<QString, int>& right)> cmp)
{
    // 将 QMap 数据转换为排序后的 QVector
    QVector<std::pair<QString, int>> sortedData;
    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        sortedData.append(qMakePair(it.key(), it.value()));
    }

    std::sort(sortedData.begin(), sortedData.end(),cmp);;
    // 按照值降序排序
    // std::sort(sortedData.begin(), sortedData.end(), [](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
    //     return left.second > right.second;
    // });

    // 创建 QBarSeries 并添加数据
    QBarSeries *series = new QBarSeries;


    QStringList categories;
    QBarSet set("Values");
    for (int i = 0; i < n && i < sortedData.size(); ++i) {
        set << sortedData[i].second;
        categories << sortedData[i].first;
    }
    series->append(&set);

    // 创建图表对象
    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Top " + QString::number(n) + " Bar Chart");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // 设置 X 轴（类别轴）
    auto axisX = new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    axisX->setTitleText("字符串");

    // 设置 Y 轴（数值轴）
    auto axisY = new QValueAxis;
    axisY->setRange(0, sortedData[0].second*1.25);  // 根据数据范围调整
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    axisY->setTitleText("字符串");

    series->setLabelsVisible(true);


    // 设置图例
    chart->legend()->setVisible(true);
    //chart->legend()->setAlignment(Qt::AlignBottom);

    // 设置 chartView 来显示图表
    chartView->setChart(chart);
}

//绘制饼状图
void  MyMainWindow2::drawPieChart(QMap<QString, int> data, int n,
                                  std::function<bool(const std::pair<QString, int>& left, const std::pair<QString, int>& right)> cmp){
    // 将 QMap 数据转换为排序后的 QVector
    QVector<std::pair<QString, int>> sortedData;
    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        sortedData.append(qMakePair(it.key(), it.value()));
    }

    // 按照值降序排序
    std::sort(sortedData.begin(), sortedData.end(), cmp);

    QPieSeries *series = new QPieSeries;
    QChart *chart = new QChart();
    chart->setTitle("字符串饼状图"); //设置表格标题

    QPieSlice *tempSlice;
    for (int i = 0; i < n && i < sortedData.size(); ++i) {
        series->append(sortedData[i].first,sortedData[i].second);
        tempSlice =series->slices().at(i);
        //tempSlice->setColor(QColor(255,10*i,0));//设置颜色
        tempSlice->setLabelVisible(true);
    }

    // if(n<sortedData.size())
    // {
    //     int elseNum=0;
    //     for(int i=n;i<sortedData.size();++i){
    //         elseNum+=sortedData[i].second;
    //     }
    //     series->append("其他",elseNum);
    //     tempSlice =series->slices().at(n);
    //     tempSlice->setLabelVisible(true);
    // }

    //饼状图的缩放因子
    series->setPieSize(0.6);


    chart->addSeries(series);
    chart->setAnimationOptions(QChart::AllAnimations);
    // 设置竖向图例
    chart->legend()->setAlignment(Qt::AlignRight);

    chart->setTheme(QChart::ChartThemeBlueIcy);
    chartView->setChart(chart);
}

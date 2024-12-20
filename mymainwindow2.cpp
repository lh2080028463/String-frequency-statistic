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

    connect(ui->quitButton,&QPushButton::clicked,[=](){
        emit this->back();
    });
    setWindowTitle("Bar Chart");
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

void MyMainWindow2::drawBarChart(QMap<QString, int> data, int n)
{
    // 将 QMap 数据转换为排序后的 QVector
    QVector<std::pair<QString, int>> sortedData;
    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        sortedData.append(qMakePair(it.key(), it.value()));
    }

    // 按照值降序排序
    std::sort(sortedData.begin(), sortedData.end(), [](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
        return left.second > right.second;
    });

    // 创建 QBarSeries 并添加数据
    QBarSeries *series = new QBarSeries;


    QStringList categories;
    QBarSet set("Values");
    for (int i = 0; i < n && i < sortedData.size(); ++i) {
        set << sortedData[i].second;
        categories << sortedData[i].first;
    }
    series->append(&set );

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

    // 设置 Y 轴（数值轴）
    auto axisY = new QValueAxis;
    axisY->setRange(0, 60);  // 根据数据范围调整
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // 设置图例
    //chart->legend()->setVisible(true);
    //chart->legend()->setAlignment(Qt::AlignBottom);

    // 设置 chartView 来显示图表
    chartView->setChart(chart);
}

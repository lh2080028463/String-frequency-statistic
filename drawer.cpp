#include "drawer.h"

Drawer::Drawer() {}

void Drawer::drawWordCloud(){

}

void Drawer::drawBarChart(QMap<QString,int> data){
    auto set0 = new QBarSet("Jane");
    auto set1 = new QBarSet("John");
    auto set2 = new QBarSet("Axel");
    auto set3 = new QBarSet("Mary");
    auto set4 = new QBarSet("Samantha");
    for(int i;i<data.size();i++){
        auto
    }
    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    QBarSeries *series = new QBarSeries;
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    auto chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Simple Bar Chart");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories {"Jan", "Feb", "Mar", "Apr", "May", "Jun"};
    auto axisX = new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    auto axisY = new QValueAxis;
    axisY->setRange(0,15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    createDefaultChartView(chart);

}

void Drawer::drawPieChart(QMap<QString,int> data){

}

#ifndef DRAWER_H
#define DRAWER_H

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QValueAxis>

#include<QMap>
#include<QString>

class Drawer
{
public:
    Drawer();
    void drawWordCloud();
    void drawBarChart(QMap<QString,int> data);
    void drawPieChart(QMap<QString,int> data);
};

#endif // DRAWER_H

#ifndef DRAWPICTURES_H
#define DRAWPICTURES_H
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>


class Drawer
{
public:
    drawPictures();
    void drawBarChat();
    void drawPieChat();
    void drawWordCloud();
};

#endif // DRAWPICTURES_H

#include "drawer.h"
#include <queue>
Drawer::Drawer() {}

void Drawer::drawWordCloud(){

}

/*void Drawer::drawBarChart(QMap<QString,int> data,int n){


    // auto set0 = new QBarSet("Jane");
    // auto set1 = new QBarSet("John");
    // auto set2 = new QBarSet("Axel");
    // auto set3 = new QBarSet("Mary");
    // auto set4 = new QBarSet("Samantha");
    // *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    // *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    // *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    // *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    // *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    QBarSeries *series = new QBarSeries;
    for (const auto &key : data.keys()) {
        auto temp = new QBarSet(key);
        *temp <<data[key];
        series->append(temp);
    }

    auto chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Simple Bar Chart");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    auto cmp = [](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
        return left.second < right.second; // 小的在前面
    };

    std::priority_queue<std::pair<QString, int>, std::vector<std::pair<QString, int>>, decltype(cmp)> maxHeap(cmp);

    // 将所有键值对放入堆中
    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        maxHeap.push(std::make_pair(it.key(), it.value()));
    }

    // 获取最大的 5 个元素

    QVector<std::pair<QString, int>> topElements;

    while (n > 0 && !maxHeap.empty()) {
        topElements.push_back(maxHeap.top());
        maxHeap.pop();
        n--;
    }

    QStringList categories;
    // 输出最大的 n 个元素
    for (const auto& element : topElements) {
        categories<<element.first;
    }

    auto axisX = new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    auto axisY = new QValueAxis;
    axisY->setRange(0,50);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    //createDefaultChartView(chart);

}*/

void Drawer::drawBarChart(QMap<QString, int> data, int n) {
    // Step 1: Sort the data by values in descending order and pick the top 'n' elements
    QVector<std::pair<QString, int>> sortedData;
    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        sortedData.append(qMakePair(it.key(), it.value()));
    }

    // Sort the data by value in descending order
    std::sort(sortedData.begin(), sortedData.end(), [](const std::pair<QString, int>& left, const std::pair<QString, int>& right) {
        return left.second > right.second; // Larger values come first
    });

    // Step 2: Create the bar series and set the categories
    QBarSeries *series = new QBarSeries;

    QStringList categories;
    for (int i = 0; i < n && i < sortedData.size(); ++i) {
        auto set = new QBarSet(sortedData[i].first);
        *set << sortedData[i].second;
        series->append(set);
        categories << sortedData[i].first;
    }

    // Step 3: Set up the chart
    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Top " + QString::number(n) + " Bar Chart");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Step 4: Configure the axes
    auto axisX = new QBarCategoryAxis;
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    auto axisY = new QValueAxis;
    axisY->setRange(0, 50);  // Adjust range as needed
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Step 5: Show the legend
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Step 6: Create the chart view
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
}


void Drawer::drawPieChart(QMap<QString,int> data, int n){

}

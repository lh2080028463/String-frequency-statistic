#ifndef TABLEWINDOW_H
#define TABLEWINDOW_H

#include <QMainWindow>

namespace Ui {
class tableWindow;
}

class tableWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit tableWindow(QWidget *parent = nullptr);
    ~tableWindow();

signals:
    void back();

private:
    Ui::tableWindow *ui;
};

#endif // TABLEWINDOW_H

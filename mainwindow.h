#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class BaseWidget;
class QStackedWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    BaseWidget *widget = nullptr;
    QStackedWidget *stackWidgets = nullptr;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "basewidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500, 500);

    stackWidgets = new QStackedWidget;

    widget = new BaseWidget(QColor(255,0,255), stackWidgets, this);

    stackWidgets->addWidget(widget);

    setCentralWidget(stackWidgets);
}

MainWindow::~MainWindow()
{

}

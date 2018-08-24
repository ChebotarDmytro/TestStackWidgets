#ifndef YELLOWWIDGET_H
#define YELLOWWIDGET_H

#include <QtWidgets>

class YellowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit YellowWidget(const QColor &color, QStackedWidget *stackWidget = nullptr,
                          QWidget *parent = nullptr);

private slots:
    void callWidget(bool check);

private:
    QStackedWidget *mStackWidget;
};

#endif // YELLOWWIDGET_H

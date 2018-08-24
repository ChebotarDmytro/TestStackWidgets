#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QtWidgets>

class YellowWidget;

class BaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BaseWidget(const QColor &color, QStackedWidget *stackWidget = nullptr,
                        QWidget *parent = nullptr);
    ~BaseWidget();

private slots:
    void callWidget(bool check);

private:
    QStackedWidget *mStackWidget;
    YellowWidget *yellowWidget;
};

#endif // BASEWIDGET_H

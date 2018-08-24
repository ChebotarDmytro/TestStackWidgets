#include "basewidget.h"
#include "yellowwidget.h"

BaseWidget::BaseWidget(const QColor& color, QStackedWidget *stackWidget,
                       QWidget *parent)
    : QWidget(parent),
      mStackWidget(stackWidget)
{
    QPalette pal;
    pal.setColor(this->backgroundRole(), color);
    this->setPalette(pal);
    this->setAutoFillBackground(true);

    QPushButton *close = new QPushButton("Close");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(close);

    this->setLayout(layout);

    connect(close, &QPushButton::clicked, this, &BaseWidget::callWidget);
}

BaseWidget::~BaseWidget()
{

}

void BaseWidget::callWidget(bool check)
{
    yellowWidget = new YellowWidget(Qt::yellow, mStackWidget);
//    QPalette pal;
//    pal.setColor(wid->backgroundRole(), Qt::yellow);
//    wid->setPalette(pal);
//    wid->setAutoFillBackground(true);

    mStackWidget->addWidget(yellowWidget);
    mStackWidget->setCurrentIndex(mStackWidget->indexOf(yellowWidget));
    qDebug() << "size stack: " << mStackWidget->count();
}

#include "yellowwidget.h"

YellowWidget::YellowWidget(const QColor &color, QStackedWidget *stackWidget, QWidget *parent)
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

  connect(close, &QPushButton::clicked, this, &YellowWidget::callWidget);
}

void YellowWidget::callWidget(bool check)
{
    mStackWidget->removeWidget(mStackWidget->currentWidget());
    qDebug() << "yellow size " << mStackWidget->count();
}

#include "QtWidgetsApplication1.h"
#include <QLabel>
QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent), label(new QLabel("hello", this))
{
    ui.setupUi(this);
    label->setGeometry(50, 100, 100, 30); // 设置 QLabel 的位置和大小
    button = new QPushButton("haha", this);
    
    connect(button, &QPushButton::clicked, this, &QtWidgetsApplication1::onclicked);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}


void  QtWidgetsApplication1::onclicked()
{
    button->setText("1");
    return;

}

#include "QtWidgetsApplication1.h"
#include <QLabel>
QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QLabel *label = new QLabel("hello",this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}


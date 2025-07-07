#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <QLabel>

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
    QLabel* label = QLabel("hello");

private:
    Ui::QtWidgetsApplication1Class ui;
};


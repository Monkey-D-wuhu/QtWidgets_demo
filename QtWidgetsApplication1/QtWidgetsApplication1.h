#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <QLabel>
#include <QPushButton>

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
   
private slots:
    void onclicked();    //²Ûº¯Êý


private:
    Ui::QtWidgetsApplication1Class ui;
    QLabel* label;
    QPushButton* button;
};


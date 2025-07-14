#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <QLabel>
#include <QPushButton>
#include <QTimer>
#include <QDebug>
#include <QDialog>
#include <QLineEdit>


class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();
   
private slots:
    void onclicked();    //槽函数
    void timeouted();    // 定时器demo示例函数
    void onTextChanged(const QString &text); // 输入框文本变化时的槽函数

protected:
    void closeEvent(QCloseEvent* ev);


private:
    Ui::QtWidgetsApplication1Class ui;
    QLabel* label;
    QPushButton* button;
    QTimer* timer;
    QDialog* dialog;
    QLineEdit* inputBox;     // 输入框
    QLabel* displayLabel;    // 显示输入内容的标签
};


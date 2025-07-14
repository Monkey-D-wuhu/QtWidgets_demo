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
    void onclicked();    //�ۺ���
    void timeouted();    // ��ʱ��demoʾ������
    void onTextChanged(const QString &text); // ������ı��仯ʱ�Ĳۺ���

protected:
    void closeEvent(QCloseEvent* ev);


private:
    Ui::QtWidgetsApplication1Class ui;
    QLabel* label;
    QPushButton* button;
    QTimer* timer;
    QDialog* dialog;
    QLineEdit* inputBox;     // �����
    QLabel* displayLabel;    // ��ʾ�������ݵı�ǩ
};


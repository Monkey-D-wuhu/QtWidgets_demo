#include "QtWidgetsApplication1.h"
#include <QMessageBox>
#include <QCloseEvent>


QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent), label(new QLabel("hello", this))
{
    ui.setupUi(this);
    
    // 设置窗口标题
    setWindowTitle("输入框演示");
    
    // 标签设置
    label->setGeometry(50, 100, 100, 30); // 设置 QLabel 的位置和大小
    
    // 按钮设置
    button = new QPushButton("haha", this);
    button->setGeometry(50, 200, 100, 30);
    
    // 定时器设置
    QTimer* timer = new QTimer(this);
    
    // 对话框设置
    QDialog* dialog = new QDialog(this);
    dialog->setGeometry(50, 150, 100, 20);
    dialog->setWindowTitle("我是对话框");
    dialog->show();
    
    // 新增：输入框设置
    inputBox = new QLineEdit(this);
    inputBox->setGeometry(50, 250, 200, 30);
    inputBox->setPlaceholderText("请在此输入内容...");
    
    // 新增：显示标签设置
    displayLabel = new QLabel("输入的内容将显示在这里", this);
    displayLabel->setGeometry(50, 290, 300, 30);
    displayLabel->setStyleSheet("border: 1px solid gray; padding: 2px;");
    
    // 连接信号和槽
    connect(button, &QPushButton::clicked, this, &QtWidgetsApplication1::onclicked);
    connect(timer, &QTimer::timeout, this, &QtWidgetsApplication1::timeouted);
    connect(inputBox, &QLineEdit::textChanged, this, &QtWidgetsApplication1::onTextChanged);
    
    timer->start(1000);
    qDebug() << "debug";
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}

void QtWidgetsApplication1::timeouted()
{
    button->setText("10023");
    return;
}


void QtWidgetsApplication1::onclicked()
{
    button->setText("1");
    return;
}

// 新增：处理输入框文本变化的槽函数
void QtWidgetsApplication1::onTextChanged(const QString &text)
{
    displayLabel->setText(text);
    qDebug() << "输入框内容变化：" << text;
}

void QtWidgetsApplication1::closeEvent(QCloseEvent* ev)
{
    QMessageBox::Button btn = QMessageBox::question(this, "关闭窗口", "你确定？");
    if (btn == QMessageBox::No)
        ev->ignore();
}
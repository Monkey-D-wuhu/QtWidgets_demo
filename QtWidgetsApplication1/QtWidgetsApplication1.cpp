#include "QtWidgetsApplication1.h"
#include <QMessageBox>
#include <QCloseEvent>


QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent), label(new QLabel("hello", this))
{
    ui.setupUi(this);
    
    // ���ô��ڱ���
    setWindowTitle("�������ʾ");
    
    // ��ǩ����
    label->setGeometry(50, 100, 100, 30); // ���� QLabel ��λ�úʹ�С
    
    // ��ť����
    button = new QPushButton("haha", this);
    button->setGeometry(50, 200, 100, 30);
    
    // ��ʱ������
    QTimer* timer = new QTimer(this);
    
    // �Ի�������
    QDialog* dialog = new QDialog(this);
    dialog->setGeometry(50, 150, 100, 20);
    dialog->setWindowTitle("���ǶԻ���");
    dialog->show();
    
    // ���������������
    inputBox = new QLineEdit(this);
    inputBox->setGeometry(50, 250, 200, 30);
    inputBox->setPlaceholderText("���ڴ���������...");
    
    // ��������ʾ��ǩ����
    displayLabel = new QLabel("��������ݽ���ʾ������", this);
    displayLabel->setGeometry(50, 290, 300, 30);
    displayLabel->setStyleSheet("border: 1px solid gray; padding: 2px;");
    
    // �����źźͲ�
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

// ����������������ı��仯�Ĳۺ���
void QtWidgetsApplication1::onTextChanged(const QString &text)
{
    displayLabel->setText(text);
    qDebug() << "��������ݱ仯��" << text;
}

void QtWidgetsApplication1::closeEvent(QCloseEvent* ev)
{
    QMessageBox::Button btn = QMessageBox::question(this, "�رմ���", "��ȷ����");
    if (btn == QMessageBox::No)
        ev->ignore();
}
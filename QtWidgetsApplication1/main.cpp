#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <vector>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    // ����Ӧ�ó������
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    
    QtWidgetsApplication1 window;
    window.show();;
    return app.exec();
}

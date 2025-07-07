#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <vector>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QtWidgetsApplication1 window;
    window.show();;
    return app.exec();
}

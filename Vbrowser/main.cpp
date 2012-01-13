#include <QtGui/QApplication>
#include "vbrowser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vbrowser w;
    w.show();

    return a.exec();
}

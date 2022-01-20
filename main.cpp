#include "scannergui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scannergui w;
    w.show();
    return a.exec();
    //
}

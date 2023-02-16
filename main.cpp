#include "combo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Combo w;
    w.show();
    return a.exec();
}

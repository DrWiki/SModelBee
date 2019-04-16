#include "SModelBee.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    SModelBee w;
    w.show();
    return a.exec();
}

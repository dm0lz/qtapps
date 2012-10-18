
#include<QtGui>
#include"fenetre.h"

int main (int argc, char *argv[])
{
    QApplication apps(argc, argv);

    MaFenetre ccc;
    ccc.show();

    return apps.exec();
}

#include "window.h"
#include <QtGui>

int main (int argc, char *argv[])
{
    QApplication myapp(argc, argv);

    windowe fenetre;
    fenetre.show();

    return myapp.exec();
}

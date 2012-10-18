#include <QtGui>
#include "fenetre.h"

int main (int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre Fenetre;
    Fenetre.show();

    return app.exec();

}

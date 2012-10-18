#include <QtGui>
#include"fenetre.h"

int main(int argc, char *argv[])
{
    QApplication monAppli(argc,argv);

    MaClassFenetre maFenetre ;

    maFenetre.show();

    return monAppli.exec();
}

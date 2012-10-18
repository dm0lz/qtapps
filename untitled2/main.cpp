#include<QtGui>
#include "test2.h"

int main (int argc, char *argv[])
{
    QApplication MonAppli(argc, argv);

    MaClassFenetre HHH;
    HHH.show();

    return MonAppli.exec();
}

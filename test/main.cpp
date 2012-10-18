#include"test.h"
#include<QtGui>

int main(int argc, char *argv[])
{
    QApplication monAppli(argc, argv);

    MaClassFenetre TT;
    TT.show();

    return monAppli.exec();
}

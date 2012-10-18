#include "fenetre.h"
#include<QtGui>

MaClassFenetre::MaClassFenetre() : QWidget()
{
    m_boutton = new QPushButton("clickOnIt", this);
    m_boutton->move(20,20);
}


#include<QtGui>
#include "fenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    m_boutton = new QPushButton ("mon boutton", this);
    m_boutton->move(200,100);
    m_boutton->setFont(QFont("Times new roman",15));

    m_truc = new QPushButton("Mon 2eme boutton", this);
    m_truc->move(200,200);
}

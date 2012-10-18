#include "test.h"
#include<QtGui>

MaClassFenetre::MaClassFenetre() : QWidget()
{
    //setFixedSize(200,300);
    m_boutton = new QPushButton("quitter", this);
    m_boutton->move(100,100);

    m_slider = new QSlider(this);
    m_slider->move(100,200);

    QObject::connect(m_boutton, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(ChangerLargeur(int)));
}

 void MaClassFenetre::ChangerLargeur(int largeur) //: QWidget()
{
    setFixedSize((largeur*6),400);
}

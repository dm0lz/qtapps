#include<QtGui>
#include"fenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    //page1
    m_boutton=new QPushButton("click", this);
    m_boutton->move(100,100);
    m_vbox1=new QVBoxLayout;
    m_vbox1->addWidget(m_boutton);

    //page2
    m_boutton2=new QPushButton("click2", this);
    m_boutton2->move(100,200);
    m_vbox2=new QVBoxLayout;
    m_vbox2->addWidget(m_boutton2);


    m_onglets=new QTabWidget(this);
    m_onglets->setGeometry(40, 20, 240, 160);

    m_page1=new QWidget(this);
    m_page2=new QWidget(this);
    m_page1->setLayout(m_vbox1);
    m_page2->setLayout(m_vbox2);

    m_onglets->addTab(m_page1,"hh");
    m_onglets->addTab(m_page2,"gg");

}

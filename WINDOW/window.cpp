#include "window.h"
#include <QtGui>

windowe::windowe() : QWidget()
{
    m_boutton = new QPushButton("a propos", this);
    m_boutton->move(100,100);

    m_quitter = new QPushButton("quitter", this);
    m_quitter->move(100,200);

    m_lcdNumber = new QLCDNumber(this);
    m_lcdNumber->move(100,300);
    m_lcdNumber->setSegmentStyle(QLCDNumber::Flat);

    m_slider = new QSlider(this);
    m_slider->move(100,400);

    m_progressBar = new QProgressBar(this);
    m_progressBar->move(100,500);
    m_progressBar->setGeometry(100, 500, 950, 30);

    m_messageBox = new QPushButton("cliquer pour afficher la oite de dialogue",this);
    m_messageBox->move(100,50);
    QObject::connect(m_messageBox, SIGNAL(clicked()), this, SLOT(ouvrirDialogue()));

    QObject::connect(m_boutton, SIGNAL(clicked()), qApp, SLOT(aboutQt()));
    QObject::connect(m_quitter, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcdNumber, SLOT(display(int)));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
}

void windowe::ouvrirDialogue()
{
    QMessageBox::information(this, "mon titre", "salut toi");
}

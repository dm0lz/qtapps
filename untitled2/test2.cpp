#include <Qtgui>
#include "test2.h"

MaClassFenetre::MaClassFenetre() : QWidget()
{
    setFixedSize(400,700);

    m_bouttonQuitter = new QPushButton("click me to quit", this);
    m_bouttonQuitter->move(100,100);

    m_bouttonAPropos = new QPushButton("A propos", this);
    m_bouttonAPropos->move(100,200);

    m_ouvrirBoiteDialogueText = new QPushButton("Click Me to open text dialog Box", this);
    m_ouvrirBoiteDialogueText->move(100,300);

    m_ouvrirBoiteDialogueQuestion = new QPushButton("Click Me to open question dialog Box", this);
    m_ouvrirBoiteDialogueQuestion->move(100,350);

    m_ouvrirInputBox = new QPushButton("Click Me to open Input Box", this);
    m_ouvrirInputBox->move(100,400);

    m_slider = new QSlider(this);
    m_slider->move(0,450);

    m_lcdNumber = new QLCDNumber (this);
    m_lcdNumber->move(100,500);

    m_progressBar = new QProgressBar(this);
    m_progressBar->move(100,600);

    QObject::connect(m_bouttonQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_bouttonAPropos, SIGNAL(clicked()), qApp, SLOT(aboutQt()));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcdNumber, SLOT(display(int)));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    QObject::connect(m_ouvrirBoiteDialogueText, SIGNAL(clicked()), this, SLOT(ouvrirBoiteDialogueText()));
    QObject::connect(m_ouvrirBoiteDialogueQuestion, SIGNAL(clicked()), this, SLOT(ouvrirBoiteDialogueQuestion()));
    QObject::connect(m_ouvrirInputBox, SIGNAL(clicked()), this, SLOT(ouvrirInputBox()));

}
void MaClassFenetre::changerLargeur(int largeur)
{
    setFixedSize((20+(largeur*6)),700);
}
void MaClassFenetre::ouvrirBoiteDialogueText()
{
    QMessageBox::information(this,"titre","text");

}
void MaClassFenetre::ouvrirBoiteDialogueQuestion()
{
    int reponse = QMessageBox::question(this, "titre", "question", QMessageBox::Yes | QMessageBox::No);

    if (reponse==QMessageBox::Yes)
    {
        QMessageBox::information(this,"titre","Vous avez repondu OUI à la question !!");
    }
    else if(reponse==QMessageBox::No)
    {
        QMessageBox::information(this,"titre","vous avez repondu NON à la question!!");
    }

}

void MaClassFenetre::ouvrirInputBox()
{
    bool ok=true;
    QString pseudo = QInputDialog::getText(this,"pseudo","quel est votre pseudo ??");

    if(ok && !pseudo.isEmpty())
    {
        QMessageBox::information(this,"titre", "salut "+pseudo+" !!!");
    }


}

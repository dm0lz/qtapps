#include"lyon.h"
#include<QtGui>

MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(400,600);

    m_bouttonQuitter=new QPushButton("click to quit", this);
    m_bouttonQuitter->move(100,100);

    m_bouttonDialogue=new QPushButton("click me to open dialog box", this);
    m_bouttonDialogue->move(100,200);

    m_bouttonInput = new QPushButton("click me to input", this);
    m_bouttonInput->move(100,300);

    m_bouttonFichier = new QPushButton("click me to select a file", this);
    m_bouttonFichier->move(100,400);

    QObject::connect(m_bouttonQuitter, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_bouttonDialogue, SIGNAL(clicked()), this, SLOT(ouvrirDialogBox()));
    QObject::connect(m_bouttonInput, SIGNAL(clicked()), this, SLOT(ouvrirInputBox()));
    QObject::connect(m_bouttonFichier, SIGNAL(clicked()), this, SLOT(ouvrirFichier()));

}

void MaFenetre::ouvrirDialogBox()
{
    int reponse=QMessageBox::question(this,"Page_Title","salut", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QMessageBox::information(this,"titre","vous avez repondu oui");
    }
    else
    {
        QMessageBox::information(this,"titre","vous avez repondu non");
    }
}

void MaFenetre::ouvrirInputBox()
{
    QString pseudo = QInputDialog::getText(this,"titre","quel est votre nom ???");

    if(!pseudo.isEmpty())
    {
        QMessageBox::information(this,"titre","bonjour "+pseudo+" !!!");
    }
}

void MaFenetre::ouvrirFichier()
{
    QString fichier = QFileDialog::getOpenFileName(this, "ouvrir un fichier");
}

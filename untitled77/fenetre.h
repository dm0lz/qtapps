#ifndef FENETRE_H
#define FENETRE_H

#include<QtGui>

class MaFenetre : public QWidget
{

public:
    MaFenetre();
private:
    QPushButton *m_boutton;
    QPushButton *m_boutton2;

    QTabWidget *m_onglets;

    QWidget *m_page1;
    QWidget *m_page2;

    QVBoxLayout *m_vbox1;
    QVBoxLayout *m_vbox2;

};

#endif // FENETRE_H

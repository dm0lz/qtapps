#ifndef LYON_H
#define LYON_H

#include<QtGui>

class MaFenetre : public QWidget
{
    Q_OBJECT
public:
    MaFenetre();
public slots:
    void ouvrirDialogBox();
    void ouvrirInputBox();
    void ouvrirFichier();
private:
    QPushButton *m_bouttonQuitter;
    QPushButton *m_bouttonDialogue;
    QPushButton *m_bouttonInput;
    QPushButton *m_bouttonFichier;
};

#endif // LYON_H

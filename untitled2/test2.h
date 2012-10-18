#ifndef TEST2_H
#define TEST2_H
#include<Qtgui>

class MaClassFenetre : public QWidget
{
    Q_OBJECT
public:
    MaClassFenetre();
public slots:
    void changerLargeur(int largeur);
    void ouvrirBoiteDialogueText();
    void ouvrirBoiteDialogueQuestion();
    void ouvrirInputBox();
private:
    QPushButton *m_bouttonQuitter;
    QPushButton *m_bouttonAPropos;
    QSlider *m_slider;
    QLCDNumber *m_lcdNumber;
    QProgressBar *m_progressBar;
    QPushButton *m_ouvrirBoiteDialogueText;
    QPushButton *m_ouvrirBoiteDialogueQuestion;
    QPushButton *m_ouvrirInputBox;

};

#endif // TEST2_H

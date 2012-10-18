#ifndef TEST_H
#define TEST_H
#include<QtGui>

class MaClassFenetre : public QWidget
{
    Q_OBJECT

public:
    MaClassFenetre();

public slots:
    void ChangerLargeur(int largeur);

private:
    QPushButton *m_boutton;
    QSlider *m_slider;

};

#endif // TEST_H

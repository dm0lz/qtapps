#include <QtGui>

class windowe : public QWidget
{
    Q_OBJECT

public:
    windowe();

public slots:
    void ouvrirDialogue();

 private:
    QPushButton *m_boutton;
    QPushButton *m_quitter;
    QLCDNumber *m_lcdNumber;
    QSlider *m_slider;
    QProgressBar *m_progressBar;
    QPushButton *m_messageBox;
};

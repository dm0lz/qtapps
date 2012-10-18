
#include<QApplication>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("bienvenue !!!");
    button.setToolTip("tooltip");
    button.setFont(QFont("Comic Sans MS", 20, QFont::Bold, true));

    button.show();

    return app.exec();
}

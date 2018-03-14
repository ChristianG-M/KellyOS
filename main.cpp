#include "home.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap(QPixmap("/home/dl17/Documentos/GarciaMiguelLuisChristian_SistemasOperativos/Proyecto/Imagenes/Boot2"));
    splash -> show();

    Home w;
    QTimer::singleShot(10000, splash, SLOT(close()));
    QTimer::singleShot(10000, &w, SLOT(show()));
    //w.show();

    return a.exec();
}

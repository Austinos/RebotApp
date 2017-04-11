#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <File.h>
#include <QForeachContainer>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;



    QVector <QString> vecteur;

    File *fichier=new File();

    if(fichier->readfile()) // si le fichier s'ouvre
    {

        if(fichier->erreur()==false) //s'il n'y a pas d'erreur
           {

            vecteur=fichier->vecteur(); //On copie le vecteur
            }else qDebug()<<"erreur";
    }

    QString mot;
    //affichage du vecteur
    foreach(mot,vecteur){
        qDebug()<<mot;
    }


//    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));







    return app.exec();
}

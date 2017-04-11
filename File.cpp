#include "File.h"
#include<QDebug>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

File::File(QObject *parent) : QObject(parent)
{

}
//Fonction qui lie le fichier texte et rempli le vecteur avec les commandes
bool File::readfile()
{
    QFile file("C:/Users/Korichi/Documents/LEGO_NARK/commandes.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        return false;
    }
    QTextStream in(&file);
       while (!in.atEnd())
       {
           text = in.readAll();
       }
       QStringList commande=text.split("\n",QString::SkipEmptyParts);
       int i=commande.length();
       while(i>0){
       vect.append(commande.value(commande.length()-i));
       i=i-1;
       }
       return true;
}

//Fonction qui vérifie si le fichier contient une commande erroné
bool File::erreur()
{
    QString m;

    foreach (m, vect) {
        if((m!="avancer")&&(m!="tourner a gauche")&&(m!="reculer")&&(m!="tourner a droite"))return true;

    }
   return false;
}

// fonction qui renvoie le vecteur de commandes
QVector <QString> File::vecteur(){

    return vect;
}


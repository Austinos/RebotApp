#ifndef REBOT_H
#define REBOT_H
#include <QObject>
#include <QObject>
#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class File : public QObject
{
    Q_OBJECT
public:
    explicit File(QObject *parent = 0);
    bool readfile();
    bool erreur();
    QVector <QString> vecteur();




signals:

public slots:
private:
    QVector <QString> vect;
    QString text;
};

#endif // REBOT_H

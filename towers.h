#ifndef TOWERS_H
#define TOWERS_H

#include <QObject>
#include<QPoint>
#include<QPixmap>

class Towers : public QObject
{
    Q_OBJECT
public:
   Towers(QPoint pos,QString pixFileName);
   void draw(QPainter *painter);
private:
   QPoint _pos;
   QPixmap pixmap;


signals:

public slots:
};

#endif // TOWERS_H

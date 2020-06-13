#include "towers.h"
#include<QPoint>
#include<QPixmap>
#include<QPainter>
Towers::Towers(QPoint pos,QString pixFileName):QObject(0),pixmap(pixFileName)
{
    _pos=pos;
}
void Towers::draw(QPainter *painter){
    painter->drawPixmap(_pos,pixmap);
}

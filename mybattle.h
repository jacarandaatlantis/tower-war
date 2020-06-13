#ifndef MYBATTLE_H
#define MYBATTLE_H

#include <QMainWindow>
#include"towers.h"
#include<QList>
class MyBattle : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyBattle(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
    void set_towers();
private:
    QList<Towers*>towers_list;
signals:
    void chooseBack();
};

#endif // MYBATTLE_H

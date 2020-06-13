#include "mybattle.h"
#include"mybutton.h"
#include<QPainter>

MyBattle::MyBattle(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(800,600);
    MyButton *back_bin=new MyButton(":/closed.jpg");
    back_bin->setParent(this);
    back_bin->move(50,50);
    MyButton *setTowers= new MyButton(":/tower1.jpg");
    setTowers->setParent(this);
    setTowers->move(500,500);
    connect(setTowers,&MyButton::clicked,this,&MyBattle::set_towers);
    connect(back_bin,&MyButton::clicked,this,[=](){
        emit chooseBack();
    });
}
void MyBattle::paintEvent(QPaintEvent *){
    QPainter painter(this);
    foreach(Towers *towers,towers_list)
        towers->draw(&painter);
}
void MyBattle::set_towers(){
    Towers * new_tower=new Towers(QPoint(200,200),":/tower1.jpg");
    towers_list.push_back(new_tower);
}

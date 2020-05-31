#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPixmap>
#include<QPaintEvent>
#include<QPushButton>
#include<QDebug>
#include"mybutton.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setFixedSize(800,600);
    ui->setupUi(this);
    MyButton *bin=new MyButton(":/closed.jpg");
    bin->setParent(this);
    bin->move(50,50);
    connect(bin,&MyButton::clicked,this,&QMainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pixmap(":/war.jpeg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

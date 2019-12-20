#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QObject>
#include <QGraphicsItem>
#include <QRectF>
#include<QCursor>
#include<QGraphicsSceneMouseEvent>
#include<QDrag>
#include<QWidget>
#include<QMimeData>
#include<QApplication>
#include<QGraphicsScene>
#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include<QGraphicsView>
#include<QTimer>
#include <QPixmap>
#include <QObject>
#include <QDebug>
#include<QKeyEvent>
#include<QList>
#include<QPainter>

class obstacle : public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit obstacle(QObject *parent = 0);

    int type;  //障碍物类型 1: 砖块 2: 金币 3：箱子
//    int number;  //障碍物个数
    int obPosX;  //障碍物坐标
    int obPosY;
    int obWidth;  //障碍物的宽
    int obHeight;  //障碍物的高
    int showflag;  //障碍物是否显示 0: 不显示 1： 显示

    QPixmap Ground = QPixmap(":/obstacle/obstacle/brick01.png");
    QPixmap Coin = QPixmap(":/obstacle/obstacle/coin.png");
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    //    void ObstacleGoLeft();  //障碍物左移
    void setType(int num);
    void setPosition(int x,int y);
    void setWidthHeight(int width,int height);
    QRectF boundingRect() const override;
signals:

public slots:
};

#endif // OBSTACLE_H

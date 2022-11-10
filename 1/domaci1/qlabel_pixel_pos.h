#ifndef QLABEL_PIXEL_POS_H
#define QLABEL_PIXEL_POS_H

#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QEvent>
#include <QtGui>

#include "geometrija.h"

class qlabel_pixel_pos : public QLabel
{
    Q_OBJECT
public:
    explicit qlabel_pixel_pos(QWidget *parent = 0);

    void mousePressEvent(QMouseEvent *ev);
    int x,y;
    int count = 0;
    bool image_loaded = false;
    point t1, t2, t3, t4, t5, t6, t7, t8;

signals:
    void Mouse_Pos();
};

#endif // QLABEL_PIXEL_POS_H

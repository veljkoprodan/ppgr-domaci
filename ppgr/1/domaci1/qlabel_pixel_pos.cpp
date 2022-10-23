#include "qlabel_pixel_pos.h"

qlabel_pixel_pos::qlabel_pixel_pos(QWidget *parent) :
    QLabel(parent)
{

}

void qlabel_pixel_pos::mousePressEvent(QMouseEvent *ev)
{
    if(this->count < 7 && this->image_loaded){

        this->count++;
        this->x = ev->x();
        this->y = ev->y();

        emit Mouse_Pos();
    }
}

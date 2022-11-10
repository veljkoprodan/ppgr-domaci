#include "geometrija.h"
#include <iostream>

point afinize(point t){
    double a = std::get<0>(t) / std::get<2>(t);
    double b = std::get<1>(t) / std::get<2>(t);

    return std::make_tuple(a,b,1);
}


point cross(point t1, point t2){
    double a = std::get<0>(t1);
    double b = std::get<1>(t1);
    double c = std::get<2>(t1);

    double d = std::get<0>(t2);
    double e = std::get<1>(t2);
    double f = std::get<2>(t2);

    return afinize(std::make_tuple(b*f - c*e, c*d - f*a, a*e - b*d));
}


point invisible(point t1, point t2, point t3, point t5, point t6, point t7, point t8){
    point xb = cross(cross(t2, t6), cross(t1, t5));
    point yb = cross(cross(t5, t6), cross(t7, t8));

    return afinize(cross(cross(t8, xb), cross(t3, yb)));
}

QString point_to_str(point t){

    return QString("(" +
           QString::number((long)std::get<0>(t)) + ", " +
           QString::number((long)std::get<1>(t)) + ", " +
           QString::number((long)std::get<2>(t)) + ")");
}

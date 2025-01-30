#include "points.hpp"

Point::Point(float abs, float ord){
    x = abs;
    y = ord;
}

void Point::affiche()const{
    cout << "(" << x << "," << y << ")";
}
void Point::deplace(float dx,float dy){
    this->x += dx;
    this->y += dy;
}
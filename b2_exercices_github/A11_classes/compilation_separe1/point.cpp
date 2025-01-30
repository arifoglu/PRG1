#include "point.h"
#include <iostream>
using namespace std;

bool operator==(const Point& p1, const Point& p2){
    return (p1.x == p2.x && p1.y == p2.y);
}
ostream& operator<<(ostream& os, const Point & p){
    os << "(" << p.x << "," << p.y << ")";
    return os;
}
Point operator+(const Point & p1,const Point& p2){
    return Point(p1.x + p2.x , p1.y + p2.y);
}
Point operator*(const Point& p, double d){
    return Point(p.x * d, p.y * d);
}
Point operator*(double d,const Point & p){
    return Point(d * p.x, d*p.y);
}
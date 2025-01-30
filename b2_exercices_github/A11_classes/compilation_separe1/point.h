#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point{
    private:
        double x, y;
    public:
        Point(double abs = 0.0, double ord = 0.0) : x(abs), y(ord) {};    
        friend ostream& operator<<(ostream& os, const Point &);
        friend Point operator+(const Point &,const Point &);
        friend Point operator*(const Point&, double);
        friend Point operator*(double, const Point&);
        friend bool operator==(const Point& , const Point&);
};

#endif
//g++ -c point.cpp -o point.o
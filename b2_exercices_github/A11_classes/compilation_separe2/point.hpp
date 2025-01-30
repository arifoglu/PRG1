#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    private :
        double x, y, maxX, maxY;

        bool x_valide(double x) const;
        bool y_valide(double y) const;
    public:
        Point();
        Point(double x, double y, double maxX = 100., double maxY = 100.)
        : x(x) , y(y) , maxX(max(x,maxX)), maxY(max(y,maxY))  {};    
        void afficher() const;
        void deplacer(double,double);
        void setX(double);
        void setY(double);
        double getX() const;
        double getY() const;

};

#endif
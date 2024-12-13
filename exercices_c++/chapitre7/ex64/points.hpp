#ifndef POINTS_HPP
#define POINTS_HPP

#include <iostream>
using namespace std;

class Point{
    private:
        float x, y;
    public:
        Point(float,float); 
        void affiche()const;
        void deplace(float dx,float dy);    
};

#endif
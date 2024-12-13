#ifndef POINTS2_HPP
#define POINTS2_HPP

#include <iostream>
using namespace std;

class Point{
    private:
        float x, y;
    public:
        Point(float,float);
        float abscisse()const;
        float ordonnee()const;
        void deplace(float,float);
};

#endif
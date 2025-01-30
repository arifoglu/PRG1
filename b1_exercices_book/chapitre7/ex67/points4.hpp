#ifndef POINTS4_HPP
#define POINTS4_HPP

#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.141592653;
float angle(float,float);

class Point{
    private:
        float x, y;
    public:
        Point(float,float);
        
        float abscisse()const;
        float ordonnee()const;

        void homothetie(int);
        void rotation(float);

        float rho();
        float theta();

        void deplace(float,float);    
};


#endif
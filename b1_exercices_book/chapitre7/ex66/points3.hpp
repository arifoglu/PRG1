#ifndef POINTS3_HPP
#define POINTS3_HPP

#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.141592653;
float angle(float,float);

float angle (float x, float y);

class Point {
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

        void deplace(float, float);  
};

#endif
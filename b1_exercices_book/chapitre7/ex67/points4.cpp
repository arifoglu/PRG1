#include "points4.hpp"

Point::Point(float abs,float ord){
    x = abs;
    y = ord;
}
float Point::abscisse()const{
    return x;
}
float Point::ordonnee()const{
    return y;
}
void Point::deplace(float dx, float dy){
    x += dx;
    y += dy;
}
void Point::homothetie(int k){
    x *= k;
    y *= k;
}
void Point::rotation(float th){
    float r = sqrt( x * x + y * y);
    float t = angle(x,y);
    t += th;
    x = r * cos(t);
    y = r * sin(t);
}
float Point::rho(){
    return sqrt(x * x + y * y);
}
float Point::theta(){
    return angle(x,y);
}

float angle (float x, float y){ 
    float a = x ? atan (y/x) : 0 ;   
    if (x<0){ 
        if (y>=0) {
            return a + pi ; 
        }else return a - pi ;    
    }
    return a ;
}
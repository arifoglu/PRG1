#include "V2f.h"


V2f::V2f(float abs,float ord): x(abs), y(ord){}

float V2f::getX()const{return this->x;};
float V2f::getY()const{return this->y;};

V2f& V2f::operator*=(double d){
    this->x *= d;
    this->y *= d;
    return *this;
}
V2f V2f::operator*(double d)const{
    V2f temp = *this;
    temp *= d;
    return temp;
}

V2f operator*(double d,const V2f & v){
    return v * d;
}


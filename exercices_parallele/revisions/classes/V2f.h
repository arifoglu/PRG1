#ifndef V2f_H
#define V2f_H

#include <iostream>
using namespace std;

class V2f{
    private:
        float x, y;
    public:
        V2f(float abs = 0,float ord = 0);
        float getX()const;
        float getY()const;
        V2f& operator*=(double );
        V2f operator*(double)const;
};
V2f operator*(double d,const V2f & );

#endif
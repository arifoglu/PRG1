#include <iostream>
#include <cstdlib>
using namespace std;

class vecteur3d{
    float x, y, z;    
    public:
        vecteur3d(float c1 = 0.0, float c2 = 0.0 , float c3 = 0.0) : x(c1), y(c2) , z(c3){}

        bool coincide(const vecteur3d *);

        friend ostream& operator<<(ostream& ,const vecteur3d&);

};
ostream& operator<<(ostream& os,const vecteur3d& v){
    os << v.x << v.y << v.z <<endl;
    return os;
}

bool vecteur3d::coincide(const vecteur3d* autre){
    return (this->x == autre->x && this->y == autre->y && this->z == autre->z);
}

int main () {
    vecteur3d v1{1,5,7};
    vecteur3d v2{1,5,7};

    cout << noboolalpha << v1.coincide(&v2) << endl;
    return EXIT_SUCCESS;
}
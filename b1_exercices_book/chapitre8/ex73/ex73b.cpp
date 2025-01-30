#include <iostream>
#include <cstdlib>
using namespace std;

class vecteur3d{
    float x, y, z;
    public:
        vecteur3d(float c1 = 0.0,float c2 = 0.0,float c3 = 0.0) : x(c1), y(c2), z(c3){}

        vecteur3d & normax(vecteur3d&);

        friend ostream& operator<<(ostream& ,const vecteur3d&);
};
ostream& operator<<(ostream& os,const vecteur3d& v){
    os << v.x << " " << v.y << " " << v.z << endl;
    return os;
}
vecteur3d & vecteur3d::normax(vecteur3d& v){
    float norm1 = x * x + y * y + z * z;
    float norm2 = v.x * v.x + v.y * v.y + v.z * v.z;
    if(norm1 > norm2){
        return *this;
    }else{
        return v;
    }
}


int main () {
    vecteur3d v1{2,3,5};
    vecteur3d v2{1,2,4};

    cout << v1.normax(v2) ;

    return EXIT_SUCCESS;
}
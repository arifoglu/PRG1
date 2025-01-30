#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class vecteur3d {
    private:
        float x, y, z;
    public:
        //sans arguments
        vecteur3d(); 

        // 3 composantes
        vecteur3d(float , float, float );

        friend ostream& operator<<(ostream&,const vecteur3d&);

};
ostream& operator<<(ostream& os,const vecteur3d & v){
    os << v.x << " " << v.y << " " << v.z ;
    return os;
}

vecteur3d::vecteur3d(){}

vecteur3d::vecteur3d(float c1 , float c2, float c3){
    x = c1;
    y = c2;
    z = c3;
}

int main () {
    vecteur3d v1;
    cout << v1 << endl;

    vecteur3d v2{1,3,5};
    cout << v2 << endl;

    return EXIT_SUCCESS;
}
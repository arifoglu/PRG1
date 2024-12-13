#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class vecteur3d{
    float x, y, z ;
    public:
        vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0){
            x = c1;
            y = c2;
            z = c3;
        }
        
        friend ostream& operator<<(ostream&,const vecteur3d&);

};
ostream& operator<<(ostream& os,const vecteur3d& v){
    os << v.x << " " << v.y << " " << v.z ;
    return os;
}


int main () {
    vecteur3d v1;
    cout << v1;
    return EXIT_SUCCESS;
}
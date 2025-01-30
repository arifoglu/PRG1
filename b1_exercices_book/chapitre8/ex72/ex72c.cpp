#include <iostream>
#include <cstdlib>
using namespace std;

class vecteur3d{
    float x, y, z;    
    public:
        vecteur3d(float c1 = 0.0, float c2 = 0.0 , float c3 = 0.0) : x(c1), y(c2) , z(c3){}

        bool coincide(const vecteur3d &);


};
bool vecteur3d::coincide(const vecteur3d & autre){
    return (x == autre.x && y == autre.y && z == autre.z);
}

int main () {
    vecteur3d v1{1,3,4};
    vecteur3d v2{2,3,4};

    cout << noboolalpha << v1.coincide(v2) <<endl;

    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
using namespace std;

class vecteur3d{
    private:
        float x, y, z;
    public:
        vecteur3d(float c1 = 0.0, float c2 = 0.0 , float c3 = 0.0); 

        void affiche()const;

        vecteur3d somme(const vecteur3d& autre)const;

        vecteur3d somme(const vecteur3d&,const vecteur3d&);

        friend vecteur3d operator*(const vecteur3d& ,const vecteur3d&);

};
vecteur3d::vecteur3d(float c1, float c2 , float c3) : x(c1), y(c2), z(c3){}   

void vecteur3d::affiche()const{
    cout << "< " << x << ", " << y << ", " << z << " >";
}

vecteur3d vecteur3d::somme(const vecteur3d& autre)const{
    return vecteur3d(x + autre.x, y + autre.y, z + autre.z);
}
vecteur3d vecteur3d::somme(const vecteur3d& v1,const vecteur3d& v2){
    return vecteur3d(v1.x + v2.x , v1.y + v2.y, v1.z + v2.z);
}

vecteur3d operator*(const vecteur3d& v1,const vecteur3d& v2){
     return vecteur3d(v1.x * v2.x , v1.y * v2.y, v1.z * v2.z);
}

int main() {
    vecteur3d v1{2,4,6};
    vecteur3d v2{6,8,10};
    
    vecteur3d v3 = v1.somme(v2);
    v3.affiche();
    //
    vecteur3d v4;
    v4 = v4.somme(v1,v2);
    v4.affiche();
    //
    vecteur3d v5;
    v5 = v1 * v2;
    v5.affiche();


    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
void permutation_circulaire(T& x,T& y,T& z);

template<typename T>
void afficher(const T& x,const T& y,const T& z);

int main() {
   double x = 1, y = 2 , z = 3;
   for(int i = 1; i <= 3;++i){
    permutation_circulaire(x,y,z);
    afficher(x,y,z);
   }
   return EXIT_SUCCESS;
}

template<typename T>
void permutation_circulaire(T& x,T& y,T& z){
    T tmp = z;
    z = y;
    y = x;
    x = tmp;
}

template<typename T>
void afficher(const T& x,const T& y,const T& z){
    cout << "x = " << x << ", "
         << "y = " << y << ", "
         << "z = " << z << endl;
}
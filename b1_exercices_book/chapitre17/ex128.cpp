#include <iostream>
using namespace std;

template<typename T, typename U> void fct(T   a, U b)    {cout << "1";}; // 1
template<typename T, typename U> void fct(T*  a, U b)    {cout << "2";}; // 2
template<typename T>             void fct(T    , T  , T) {cout << "3";}; // 3
void                                  fct(int a, float b){cout << "4";}; // 4

int main() {    
   int n, p, q;
   float x, y;
   double z;

   //fct(n,p) ;                 // 1  => fct(int a, int b)
   //fct(x,y) ;                 // 1  => fct(float a,float b)  
   //fct(n,x) ;                 // 4  => fct(int a, float b)
   //fct(n,z) ;                 // 1  => fct(int a,double b);
   //fct(&n,p) ;                // 2  => fct(&int a, int b);  
   //fct(&n,x) ;                // 2  => fct(&int a, float b);
   //fct(&n, &p, & q) ;         // 3  => fct(&int, &int, &int);

    return 0;
}


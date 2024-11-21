#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T,typename U> 
T fct(T x, U y, T z){
    return x + y + z;
} 
int main() {
    int n = 1, p = 2, q = 3;
    float x = 2.5, y = 5.0;
    cout << fct(n,x,p) << endl; // result 5.5f ,because of fonction type T int result 5 
    cout << fct(x,n,y) << endl; // result 8.5 ,here =>type T float 
    cout << fct(n,p,q) << endl; // result 6 ,here => type T int
    //cout << fct(n,p,x) << endl; // ERROR 
    cout << fct<int,float>(n,p,x) <<endl; 
    cout << fct<float>(n,p,x) <<endl; 
    return EXIT_SUCCESS;
}
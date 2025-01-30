#include <iostream>
using namespace std;

template <typename T> 
T minimum(T a, T b){
    return a < b ? a : b;
}

template <typename T>
T minimum(T a, T b , T c){
    return minimum(minimum(a,b),c);
}

int main() {
    int n = 12, p = 15, q = 2;
    float x = 3.5, y = 4.25, z = 0.25;
    cout << minimum(n,p) << endl;   // I 
    cout << minimum(n,p,q)<< endl;  // II 
    cout << minimum(x,y,z)<< endl;  // II
    return 0;
}


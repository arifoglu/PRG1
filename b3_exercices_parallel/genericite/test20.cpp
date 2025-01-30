#include <iostream>
using namespace std;
//I
template <typename T> T minimum(T a, T b){
    return a < b ? a : b;
}
//II
template <typename T> T minimum(T * a, T b){
    return *a < b ? *a : b;
}
//III
template <typename T> T minimum(T  a, T * b){
    return a < *b ? a : *b;
}

int main() {
    int n = 12, p = 15;
    float x = 3.5, y = 4.25;
    cout << minimum(n,p) << endl;        // I minimum(int ,int)
    cout << minimum(&n,p) << endl;       // I minimum(int *, int)
    cout << minimum(x,&y) << endl;       // III minimum(float , float*)
    cout << minimum(&n,&p) << endl;      // III minimum(int * , int *)
    return 0;
}


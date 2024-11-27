#include <iostream>
using namespace std;
//I
template <typename T> T minimum(T a, T b){
    return a < b ? a : b;
}
//II
template <typename T> T minimum(T * t,int n){
    int i ;
    T min = t[0];
    for(i = 1; i < n;i++){
        if(t[i] < min){
            min = t[i];
        }
    }
    return min;
}
int main() {
    long n = 2, p = 12;
    float t[6] = {2.5, 3.2, 1.5, 3.8, 1.1, 2.8};
    cout << minimum(n,p) << endl;                     // I
    cout << minimum(t,6) << endl;                     // II  
    return 0;
}


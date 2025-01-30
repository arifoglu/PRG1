#include <iostream>
using namespace std;

template<typename T>
T somme(T* t,size_t n){
    T result = 0;
    for(size_t i = 0; i < n ;++i){
        result += t[i];
    }
    return result;
}

int main() {
    double t[] = {1.5,2.5,3.5,5.5};
    cout << somme(t,4) << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

template<typename T, size_t n>
T somme(const T (&t)[n]){
    T result = 0;
    for(size_t i = 0; i < n; ++i){
        result += t[i];
    }
    return result;
}

int main() {
    double t[] = {1.5,2.5,3.5,6.5};
    cout << somme(t) << endl;
    
    return 0;
}


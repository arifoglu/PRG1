#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
T& min(T& x, T& y, T& z){
    return  x < z ? ( x < y ? x : y) : ( y < z ? y : z); 
}

int main() {

    int    a = 5;
    int    b = 2;
    int    c = 9;

    double d = 5.0;
    double e = 2.0;
    double f = 9.0;

    cout << min(a, b, c);
    min(a, b, c) = 1;
    int& min_abc = min(a, b, c);
    cout << endl;
    cout << min(d, e, f);
    min(d, e, f) = 1;
    double& min_def = min(d, e, f);

   return EXIT_SUCCESS;
}


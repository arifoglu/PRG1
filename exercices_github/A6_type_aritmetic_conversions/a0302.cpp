/*
Que valent les variables x1 à x5 ?
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i = 5, j = 11; 
    
    double x1 = (double) j / i;
    cout << x1 <<endl; // 2.2
    cout << typeid(x1).name() << endl; // d

    double x2 = double(j / i);
    cout << x2 <<endl; // 2
    cout << typeid(x2).name() << endl; // d

    double x3 = j / i + .5;
    cout << x3 <<endl; // 2.5
    cout << typeid(x3).name() << endl; // d

    double x4 = (double) j / i + .5;
    cout << x4 <<endl; // 2.7
    cout << typeid(x4).name() << endl; // d

    double x5 = (int)( j + .5) / i;
    cout << x5 <<endl; // 2
    cout << typeid(x5).name() << endl; // d

    return EXIT_SUCCESS;
}
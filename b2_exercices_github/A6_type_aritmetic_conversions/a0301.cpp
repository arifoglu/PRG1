/*
Pour chacune des variables r1 à r5, indiquez :

combien de conversions implicites sont mises en œuvre et lesquelles
ce qu'elle vaut et quel est son type
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char c = 'A';
    int n = 7;
    int a = -2;
    unsigned b = 1;
    long p = 10;
    float x = 1.25f;
    double z = 5.5;

    auto r1 = n + c + p;
    cout << r1 << endl; // 82
    cout << typeid(r1).name() << endl; // 82

    auto r2 = 2 * x + c;
    cout << r2 << endl; // 
    cout << typeid(r2).name() << endl; //

    auto r3 = (char) n + c;
    cout << r3 << endl; // 
    cout << typeid(r3).name() << endl; // char x

    auto r4 = (float) z + n / 2;
    cout << r4 << endl; // 
    cout << typeid(r4).name() << endl; // 8.5

    //auto r5 = a + b;
    //cout << r5 << endl; // 
    //cout << typeid(r5).name() << endl; // -1

    auto r6 = n + c + z;
    cout << r6 << endl; // 
    cout << typeid(r6).name() << endl; // double 77.5

    auto r7 = c * n + p;
    cout << r7 << endl; // 
    cout << typeid(r7).name() << endl; // long 720

    auto r8 = (int)c + b;
    cout << r8 << endl; // 
    cout << typeid(r8).name() << endl; // 66 unsigned

    auto r9 = (double)x + a;
    cout << r9 << endl; // 
    cout << typeid(r9).name() << endl; // -0.75 double 

    auto r10 = (long)c + n + b;
    cout << r10 << endl; // 
    cout << typeid(r10).name() << endl; // 

    return EXIT_SUCCESS;
}
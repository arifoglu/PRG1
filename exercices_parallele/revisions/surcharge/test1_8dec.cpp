#include <iostream>
using namespace std;

void f(short a, long b)             { cout << a << " ** " << b << endl; }
void f(int   a, double b)           { cout << a << " *2* " << b << endl; }
void f(float a, const int& b)       { cout << a << " *3* " << b << endl; }
void f(float a, int& b)             { cout << a << " *4* " << b << endl; }
void f(short a, int& b, float c)    { cout << a << " *5* " << b << " ** " << c << endl; }
void f(float a, short b, int c = 0) { cout << a << " *6* " << b << " ** " << c << endl; }

int main() {
    bool b = true;
    char c = '\41'; // base 8
    short s = 2;
    long p = 3;
    int n = 5;
    float x = 9;
    double y = 11;

    // f(x, n);      //   f(9,5) =>  9 *4* 5
    // f(x, s);      //   f(9,2) =>  9 *6* 2**0
    // f(b, x);      //   f(1,9) =>  1 *2* 9
    // f(p, s);      //   f(3,2) =>  ?? 3*6*2** 0
    // f(c, y);      //   f(33,11)=> 33 *2* 11    
    // f(y, s);      //   f(11,2) => 11 *6* 2
    // f(s, x, x);   //   f(2,2,9)=> 2 *6* 9 ** 9
    // f(s, n, y);   //   f(2,5,11)=>2 *5* 5 ** 11
}

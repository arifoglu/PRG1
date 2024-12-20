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

    //f(x, n);    // Çağrı 1
    //f(x, s);    // Çağrı 2
    //f(b, x);    // Çağrı 3
    //f(p, s);    // Çağrı 4
    //f(c, y);    // Çağrı 5
    //f(y, s);    // Çağrı 6
    //f(s, x, x); // Çağrı 7
    //f(s, n, y); // Çağrı 8
}

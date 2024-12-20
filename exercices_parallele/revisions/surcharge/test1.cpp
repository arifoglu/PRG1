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
    char c = '\\41'; // base 8
    short s = 2;
    long p = 3;
    int n = 5;
    float x = 9;
    double y = 11;

    // Uncomment the calls to test each scenario
    // f(x, n);    // Call 1
    // f(x, s);    // Call 2
    // f(b, x);    // Call 3
    // f(p, s);    // Call 4
    // f(c, y);    // Call 5
    // f(y, s);    // Call 6
    // f(s, x, x); // Call 7
    // f(s, n, y); // Call 8
}

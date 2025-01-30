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

    //f(x, n);    
    //f(x, s);    
    //f(b, x);   
    //f(p, s);   
    //f(c, y);   
    //f(y, s);   
    //f(s, x, x); 
    //f(s, n, y);
}

#include <iostream>
using namespace std;

void f(int a, float b)                  { cout << "1" << endl; }
void f(float a, int b)                  { cout << "2" << endl; }
void f(int &a, char b, double c = 5.0)  { cout << "3" << endl; }
void f(char &a, int b, double c = 7.0)  { cout << "4" << endl; }
void f(const float &a, float b)         { cout << "5" << endl; }

int main() {
    int i = 1;
    const char c = 65;
    float x = 2.1f;
    double y = 3.0;

    
    //f(i, c);      
    //f(c, i);      
    //f(i, i);      
    //f(x, c);      
    //f(c, x);      
    //f(x, x);      
    //f(i, x);      
    //f(x, i);      
    //f(i, y);      
    //f(y, i);      
    //f(y, y);      

    return 0;
}

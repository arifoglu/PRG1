#include <iostream>
using namespace std;

// Fonksiyon tanımlamaları
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

    
    //f(i, c);      // 3
    //f(c, i);      // 1, 2, 3, 5 -> conflict (ambiguous error)
    //f(i, i);      // 2
    //f(i, x);      // 1
    //f(c, x);      // 2
    //f(x, i);      // 2
    //f(x, x);      // 5
    //f(i, y);      // 1, 2, 3, 5 -> conflict (ambiguous error)
    //f(x, y);      // 5
    //f(y, y);      // 1, 2, 3, 5 -> conflict (ambiguous error)

    return 0;
}

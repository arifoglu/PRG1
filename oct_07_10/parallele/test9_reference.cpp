#include <iostream>
#include <cstdlib>

using namespace std;

int& plusPetit(int& a, int& b) {
return a < b ? a : b;
}

int main() {
    int a = 5;// &a   0x16dbf7358
    int b = 7;// &b   0x16dbf7354
  
    int c = plusPetit(a, b);//0x16dbf7358
    int& d = plusPetit(a, b);//0x16dbf7358
    d = 10;//
    cout << "a = " << a << ", b = " << b << ", c = " << c;
    // a = 10 b = 7 c = 10 
    return EXIT_SUCCESS;
}
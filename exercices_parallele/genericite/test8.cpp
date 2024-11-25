#include <iostream>
#include <cstdlib>
using namespace std;

void chose(int &);               // I
void chose(const int &);         // II

int main() {
    int n = 3;
    float x;

    //chose(n);          // num I
    //chose(2);          // num II
    //chose(x);          // num II
    //chose(2*n + 1);      // num II

    return EXIT_SUCCESS;
}

void chose(int & a){
    cout << "chose numero I a = " << a << endl;
}
void chose(const int & a){
    cout << "chose numero II a = " << a << endl;
}

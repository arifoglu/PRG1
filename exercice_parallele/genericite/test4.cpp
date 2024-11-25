#include <iostream>
#include <cstdlib>
using namespace std;

void sosie(int);
void sosie(double);

int main() {
    int n = 10;
    double x = 2.5;
    sosie(n);           // num I
    sosie(x);           // num II
    sosie(n / x);       // num II
    sosie(int(x));      // num I
    sosie(double(n));   // num I

    return EXIT_SUCCESS;
}

void sosie(int a){
    cout << "sosie numero I a = " << a << endl;
}
void sosie(double a){
    cout << "sosie numero II a = " << a << endl;
}

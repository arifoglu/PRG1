/*
Que va afficher le programme ci-dessous ? Expliquer les résultats obtenus.
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    signed char sc = -1;
    signed int s = -1;

    unsigned char uc = 1;
    unsigned int u = 1;
    double d = 1;

    cout << setprecision(10) << boolalpha;

    cout << s * d + u << endl; // double 0

    cout << s * u + d << endl; // 

    cout << d * u + s << endl; // 0

    cout << sc * uc + s << endl;// -2

    cout << sc * uc - u << endl;

    return EXIT_SUCCESS;
}
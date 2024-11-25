#include <iostream>
#include <cstdlib>
#include "fonction_care.hpp"
#include "fonction_cube.hpp"

using namespace std;

int main() {
    int nombre;
    cout << "Donne un nombre : ";
    cin >> nombre;

    int result = fonction_care(nombre);
    cout << nombre << "^2 = " << result << endl;

    int result2 = fonction_cube(nombre);
    cout << nombre << "^3 = " << result2 << endl;

  
    return EXIT_SUCCESS;
}
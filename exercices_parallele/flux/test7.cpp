#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    int number = 123;
    stringstream convertir;
    convertir << number ;
    string chaine = convertir.str();
    cout << chaine <<endl;
 
    string text = "456";
    stringstream convert(text);
    int nombre;
    convert >> nombre;
    cout << nombre <<endl;

    return EXIT_SUCCESS;
}

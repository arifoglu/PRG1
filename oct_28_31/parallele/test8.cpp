#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int entier = stoi("4321");
    cout << entier << endl;
    cout << typeid(entier).name() << endl;

    double reel = stod("3.14");
    cout << reel << endl;
    cout << typeid(reel).name() << endl;

    string chaine1 = to_string(entier);
    cout << chaine1 << endl;
    string chaine2 = to_string(reel);
    cout << chaine2 << endl;
    string chaine3 = chaine1 + " STRING "+ chaine2;
    cout << chaine3 << endl;

    
    return EXIT_SUCCESS;
}

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void combien_de_chiffre(int num){
    string numeros = to_string(num);
    cout << "Nombre saisi       : " << num 
         << "\nNombre de chiffres : " << numeros.length()
         << "\nPremier chiffre    : " << numeros[0]
         << "\nDernier chiffre    : " << numeros[numeros.length() - 1];
}

int main() {
    int num;
    cout << "Entrez un nombre entier >= 0 :";
    cin >> num;
    combien_de_chiffre(num); 
    return EXIT_SUCCESS;
}


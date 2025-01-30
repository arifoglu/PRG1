/*
La factorielle d'un nombre est décrite comme suit

5! = 1 * 2 * 3 * 4 * 5
6! = 1 * 2 * 3 * 4 * 5 * 6 ou 6! = 6 * 5!

Ainsi n! = n * (n-1)! avec 1! = 1 et 0! = 1 pour n >= 0

Ecrire une fonction récursive facto qui retourne la valeur de n! pour n reçu en paramètre.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int facto(int n);

int main() {
     int nombre;
     cout << "Saisissez un nombre : ";
     cin >> nombre;

     cout << nombre << "! = " << facto(nombre) <<endl;
   
   return EXIT_SUCCESS;
}

int facto(int n){
     if(n == 0)
     return 1;
     return n * facto(n-1);
}
// Écrire une fonction min qui retourne le minimum de 3 valeurs reçues en paramètre.
#include <iostream>
#include <cstdlib>

using namespace std;

int& min(int& x,int& y,int& z){
   return x < z ? (x < y ? x : y) : ( y < z ? y : z);
}

int main() {
   int a ,b,c;
   cout << "Saisissez 3 nombre different :\n";
   cin >> a >> b >> c;
   
   cout << "'" <<min(a,b,c) << "'" << " est le plus petit nombre. "<<endl;

   return EXIT_SUCCESS;
}

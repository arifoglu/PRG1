/*
Ecrire une fonction récursive fibo qui retourne la valeur de Fn pour n reçu en paramètre.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

int fibo(int n);

int main() {
     int nombre;
     cout << "Saisissez un nombre : ";
     cin >> nombre;
  
     cout << "F(" << nombre << ") = " << fibo(nombre) <<endl;
     
     for(int i = 0;i < nombre;++i){
          cout << fibo(i) <<" ";
     }
     cout << endl;
     
   return EXIT_SUCCESS;
}

int fibo(int n){
     if(n < 2)
     return n;

     return fibo(n-2) + fibo(n -1) ;
}
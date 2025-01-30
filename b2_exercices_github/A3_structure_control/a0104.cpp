//Réécrivez les extraits de code suivants en n'utilisant pas d'opérateur ternaire mais uniquement if ... else

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   int n; cin >> n;
   
   switch (n) {
      case 0:  cout << "A";
      case 1:
      case 2:  cout << "B";
               break;
      case 3:
      case 4:
      case 5:  cout << "C";
      default: cout << "D";
   }
    /* 
    n = 0 => AB
    n = 1 => B
    n = 2 => B
    n = 4 => CD
    n = 6 => D
    n = -1 => D
    */
    return EXIT_SUCCESS;
}
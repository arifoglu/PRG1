//Réécrivez les extraits de code suivants en n'utilisant pas d'opérateur ternaire mais uniquement if ... else
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   /*
   int i,b;
   if (i < 1) {
   b = true;
   } else {
   b = i > 2;
   }
   */
   //b = (i < 1) || (i > 2);
   
   ///////////////////
   int i,j,k,b;
   /*
   if (j == 0) {
      b = true;
   } else {
      if (i / j < k) {
         b = false;
      } else {
         b = true;
      }
   }
   */
  // b = (j == 0) || ((i / j) >= k ) ;
   ///////////////////////
   /*
   if (j == 0) {
   b = false;
   } else {
      if (i / j < k) {
         b = true;
      } else {
         b = false;
      }
   }
   */
   b =  (j != 0 ) && ((i / j) < k) ;   


    return EXIT_SUCCESS;
}
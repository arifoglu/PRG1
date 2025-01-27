// Réécrivez les extraits de code suivants en une seule ligne en utilisant un ou des opérateurs ternaires
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a,b;
    if(a > 0 ) {
        b += a;
    }else {
        b -= 2*a;
    }
    /* option1
    b = (a > 0) ? b += a : b -= -2*a
    */
    /* option2
    b = (a > 0) ? b + a : b - 2*a
    */
   /* option3
    b += a > 0 ? a : - 2*a
    */

   ///////////////////////
   double d,r,n;
   if( d == 0.){
    r = 1e100;
   } else{
    r = n / d;
   }
   /* option1
   r = (d == 0.) ? 1e100 : n /d ;
   */
  /* option2 => controle   en tant que bool
   r = d ? n / d : 1e100 ;
   */

    //////////////////////
    if(a > 0 ){
        b += 1;
    }else if ( a == 0){
        b = 0;
    }else {
        b *= 2;
    }
    /*
    b = (a > 0) ? b + 1  : (a == 0) ? : 0 : 2 * b
    */

    return EXIT_SUCCESS;
}


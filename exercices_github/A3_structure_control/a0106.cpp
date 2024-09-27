//Réécrivez les extraits de code suivants en n'utilisant pas d'opérateur ternaire mais uniquement if ... else
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   int a;
   /*
   if (a == 1) {
      cout << "A";
   } else if (a == 4) {
      cout << "C"; 
   } else if (a == 2) {
      cout << "E";
   } else {
      cout << "BA";
   };
   */
  /*
  cin >> a;
   switch(a){
      case 1 : cout << "A" <<endl;break;
      case 2 : cout << "E" <<endl;break;
      case 4 : cout << "C" <<endl;break;
      default : cout << "BA"<<endl;
   }
   */
  
  ////////////////////
   /*
   if (a < 0 or a >= 5) {
      cout << "D";
   } else if (a < 3) {
      cout << "A";
   } else {
      cout << "B";
   } 
   */
  cin >> a;
  switch(a){
   case 0 : case 1 : case 2 : cout << "A" ;break;
   case 3 : case 4 : cout << "B";break;
   default : cout << "D" ;break;
  } 
   
           
   
       return EXIT_SUCCESS;
}
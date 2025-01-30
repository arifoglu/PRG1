#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
   /*
   // 1
   for (int i = 1; i <= 3; ++i) {
         for (int j = 1; j <= 4; ++j) {
            cout << "*";
         }
      cout << endl;
   }
   ****
   ****
   ****
   */
   /*
   // 2
   for (int i = 0; i < 4; ++i) {
         for (int j = 0; j < 3; ++j) {
            cout << "*";
         }
      cout << endl;
   }
   ***
   ***
   ***
   ***
   */
   /*
   // 3
   for (int i = 1; i <= 4; ++i) {
         for (int j = 1; j <= i; ++j) {
            cout << "*";
         }
      cout << endl;
   }
   *
   **
   ***
   ****
   */
   /*
   // 4
   for (int i = 1; i <= 3; ++i) {
      for (int j = 1; j <= 5; ++j) {
         if (j % 2 == 0) {
            cout << "o";
         } else {
            cout << "x";
         }
      }
      cout << endl;
   }
   xoxox
   xoxox
   xoxox
   */
     /*
   // 5
   for (int i = 1; i <= 3; ++i) {
      for (int j = 1; j <= 5; ++j) {
         if ( (i + j) % 2 == 0) {
            cout << "o";
         } else {
            cout << "x";
         }
      }
      cout << endl;
   }
   oxoxo
   xoxox
   oxoxo
   */
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
   /*
   // 1
   int i = 1;
   do {
      cout << i << " ";
      ++i;
   } while (i < 10); 
   1 2 3 4 5 6 7 8 9
   */
   /*
   // 2
   int i = 0;
   do {
      cout << i << " ";
      ++i;
   } while (i < 0); 
   0
   */
   /*
   // 3
   int i = 1;
   do {
      cout << ++i << " ";
   } while (i < 10); 
   2 3 4 5 6 7 8 9 10
   */
     /*
   // 4
   int i = 20;
   do {
      cout << i << " ";
      i /= 2;
   } while (i > 0); 
   20 10 5 2 1 
   */
       /*
   // 5
   int i = 20;
   do {
      cout << i << " ";
      i /= 2;
   } while (i < 0); 
   20 
   */
    return EXIT_SUCCESS;
}
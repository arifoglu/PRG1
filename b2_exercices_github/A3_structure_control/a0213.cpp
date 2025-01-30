#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
   //1
   /*
   for (; i < 10; ++i) {
      cout << i << endl;
   }
   => version while()
   while(i < 10){
      cout << i <<endl;
      ++i;
   }
   */

   // 2
  /*
  for (; i < 10; ++i) {
      cout << i << endl;
   }
   => version do while()
   if(i < 10 ){
      do {
            cout << i <<endl;
            ++i;       
         }while(i < 10)
   }
  */

  // 3
 /*
 while (i-- > 10) {
   cout << i << endl;
  }
   => version for
   for(; i-- > 10;){
   cout << i <<endl;
  }
 */
  // 4
 /*
 while (i-- > 10) {
   cout << i << endl;
  }
   => version do while
   if(i > 10){
   do{
      i--;
      cout << i <<endl;
   }while(i > 10);
   }
 */
  // 5
 /*
   do {
     cout << i << endl;
     ++i; 
   } while (i < 10);  
 => version for
   cout << i <<endl;
   for(++i;i < 10;++i){
   cout << i <<endl;
   }
 */
  // 6
 /*
   do {
     cout << i << endl;
     ++i; 
   } while (i < 10);  
 => version while
   cout << i <<endl;
   while(i < 10){
    cout << i <<endl; 
   ++i;
   }
 */
    return EXIT_SUCCESS;
}
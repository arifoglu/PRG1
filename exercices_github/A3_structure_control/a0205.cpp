#include <iostream>
#include <cstdlib>

using  namespace std;

int main(){
   /*
   // 1
   for (int i = 1; i < 10; ++i) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   9
   */
   /*
   // 2
   for (int i = 1; i <= 10; ++i) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   10
   */
   /*
   // 3
   for (int i = 0; i < 10; ++i) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   10
   */
   /*
   // 4
   for (int i = 10; i > 0; --i) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   10
   */
   /*
   // 5
   for (int i = -10; i <= 10; ++i) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   21
   */
   /*
   // 6
   for (int i = -10; i <= 10; i += 2) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   11
   */
     /*
   // 7
   for (int i = -10; i <= 10; i += 3) {
      // le corps de la boucle ne modifie pas i et ne saute pas
   }
   7
   */
  
    return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
using namespace std;

void f() {
   throw 'A';
}
void f2() {
   throw std::out_of_range("oops");
}

int main() {
    //1)
   /*
   try {
      throw 1;
   } catch (int e) {
      cout << "Dans catch (int) : valeur recue = " << e << endl;
      throw 2.0;
   } catch (double e) {
      cout << "Dans catch (double e) : valeur recue = " << e << endl;
   } catch (...) {
      cout << "Dans catch (...)" << endl;
   }
   cout << "Fin du programme" << endl;
   */

   //2)
  /*
   try {
      try {
         throw 1;
      } catch (int e) {
         cout << "Dans catch (int) : valeur recue = " << e << endl;
         throw 2.0;
      } catch (...) {
         cout << "Dans catch (...)" << endl;
      }
   } catch (double e) {
      cout << "Dans catch (double) : valeur recue = " << e << endl;
   }
   cout << "Fin du programme" << endl;
   */

   //3)
   /*  
    try {
      try {
         f();
      } catch (int) {
         cout << "Dans catch (int) 1" << endl;
         throw;
      } catch (...) {
         cout << "Dans catch (...) 1" << endl;
         throw 65;  
      }
   } catch (int&) {
      cout << "Dans catch (int&)" << endl;
   } catch (int) {
      cout << "Dans catch (int) 2" << endl;
   } catch (const int) {
      cout << "Dans catch (const int)" << endl;
   } catch (...) {
      cout << "Dans catch (...) 2" << endl;
   }
   
   cout << "Fin du programme" << endl;
   */

    //4)
    /*
  try {
      try {
         f2();
      } catch (runtime_error& e) {
         cout << "R : " << e.what() << endl;
         throw;
      } catch (exception e) {
         cout << "E1 : " << e.what() << endl;
         throw;
      }
   } catch (logic_error& e) {
      cout << "L : " << e.what() << endl;
   } catch (exception& e) {
      cout << "E2 : " << e.what() << endl;
   }
   
   cout << "Fin du programme" << endl;
    */


   return EXIT_SUCCESS;
}
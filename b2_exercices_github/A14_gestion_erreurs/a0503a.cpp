#include <cstdlib>
#include <iostream>
using namespace std;

void f();

int main() {

   try {
      f();
   } catch (int n) {
      cout << "Exception int dans main : " << n << endl;   
   } catch (...) {
      cout << "Exception autre que int dans main" << endl;   
   }

   cout << "Fin main\n";   
   return EXIT_SUCCESS;
}

void f() {
   try {
      double x = 1.;
      throw x;
   } catch (int n) {
      cout << "Exception int dans f : " << n << endl;   
      throw;
   }
}

/*

*/
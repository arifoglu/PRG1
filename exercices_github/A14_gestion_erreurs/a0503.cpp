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
      int n = 1;
      throw n;
   } catch (int n) {
      cout << "Exception int dans f : " << n << endl;   
      throw;
   }
}

/*
*/
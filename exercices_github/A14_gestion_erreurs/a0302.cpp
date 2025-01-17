#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
#include <limits>
using namespace std;


int sommeNPremiersEntiers(int n);
void test(int n);
using ullong = unsigned long long;

int main() {

   test(-1);
   test(0);
   test(1);
   test(65535);
   test(65536);

   return EXIT_SUCCESS;
}
int sommeNPremiersEntiers(int n){
   if(n < 0)  
      throw invalid_argument("argument non valide : n < 0 ");
   const ullong somme = (ullong) n * ((ullong) n + 1) / 2;
   
   if(somme > numeric_limits<int>::max())
      throw overflow_error("un debordement est survenu ");
   return somme;
}

void test(int n) {
   cout << "sommeNPremiersEntiers(" << to_string(n) << ")";
   try {
      cout << " = " << sommeNPremiersEntiers(n) << endl;
   } catch (const exception& e) {
      cout << ": " << e.what() << endl;
   }
}
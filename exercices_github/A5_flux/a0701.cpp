#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>  // cout et cin
#include <limits>    // numeric_limits<streamsize>::max()

using namespace std;

int main() {
   int      a, b;
   double   x, y;
   //char     c;
   string t;
   cout << "entrer des valeurs : ";   
   cin  >> a;
   if(cin.fail()){
      cerr << "error";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      return 1;
   }
   cin >> b;
   

   return EXIT_SUCCESS;
}
#include <iostream>
using namespace std;

int main() {

   int n = 0;

   while (n < 5) {
      ++n;
       switch(n) {
         case 1 : cout << "1";
         case 2 : cout << "2"; break;
         case 3 : cout << "3";
         case 4 : cout << "4 "; continue;
         default : cout << "D";
      }
      cout << "N ";
   }
   // 12N 2N 34 4 DN
}
#include <iostream>
using namespace std;

int main() {
   int n = 0;

   do {
      if (n % 2 == 0) {
         cout << n << "/2 ";
         n += 3;
         continue;
      }
      if (n % 3 == 0) {
         cout << n << "/3 ";
         n += 5;
      }
      if (n % 5 == 0) {
         cout << n << "/5 ";
         break;
      }
      ++n;
   } while (true);
   // 0/2 3/3 9/3 15/3 20/5
}
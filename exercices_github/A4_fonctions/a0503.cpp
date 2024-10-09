/*
Ecrire une fonction récursive fibo qui retourne la valeur de Fn pour n reçu en paramètre.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void f1(int n) {
   cout << 'A' << n << ' ';
   if (n) {
      f1(n-1);
   }
}
void f2(int n) {
   if (n) {
      f2(n-1);
   }
   cout << 'A' << n << ' ';
}
void f3(int n) {
   cout << 'A' << n << ' ';
   if (n) {
      f3(n-1);
   }
   cout << 'B' << n << ' ';
}
void f4(int n) {
   if (n) {
      cout << n << ' ';
      f4(n-1);
      f4(n/2);
   }
}
void f5(int n) {
   if (n) {
      f5(n-1);
      if (n>1)
         f5(n-2);
      cout << n << ' ';
   }
}
int f6(int a, int b) {
   cout << '(' << a << ", " << b << ')';
   if (b == 0)
      return a;
   return f6(b, a%b);
}

int main() {
     f1(2); // A2 A1 A0
     f2(2); // A0 A1 A2
     f3(2); // A2 A1 B0 B1 B2
     f4(4); // 4 3 2 1 1 1 2 1 1
     f5(4); // 1 2 1 3 1 2 4
     f6(8, 5);// (8,5) (5,3) (3,2) (2,1) (1,0) 
   return EXIT_SUCCESS;
}


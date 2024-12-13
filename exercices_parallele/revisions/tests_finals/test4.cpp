#include <iostream> 
using namespace std; 
 
// votre code vient ici  
int& plus_petit_modulo_n(int&,int&);
int n = 10;

int main() { 
   int a = 1234, b = 5643; cout << a << " " << b << endl; 
 
   n = 100; cout << plus_petit_modulo_n(a,b) << endl; 
 
   n = 10;  cout << plus_petit_modulo_n(a,b) << endl; 
 
   plus_petit_modulo_n(a, b) = 9999; cout << a << " " << b << endl; 
}
int& plus_petit_modulo_n(int& a ,int& b ){
    return a % n < b % n ? a : b ;
}

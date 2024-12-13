#include <iostream> 
using namespace std; 
 
// votre code vient ici  
int& f(); 

int main() { 
   for(int i = 0; i < 5; ++i) 
      cout << f() << ' '; 
 
   cout << endl; 
   f() = -3; 
   for(int i = 0; i < 5; ++i) 
      cout << f() << ' '; 
}

int& f(){
   static int n = 0;
   return ++n;
}

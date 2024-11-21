#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void afficher_en_triangle(string const& str){
   for(size_t i = 0 ; i < str.length();++i){
      cout << setw(i+1);
         for(size_t j = 0; j < str.length() - i ;++j ){
            cout << str[j];
         }
         cout << endl;
   }
}

int main() { 
      afficher_en_triangle("hello");
        
   return 0;
}


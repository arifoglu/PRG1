#include <iostream>
#include <vector>
#include <string>
using namespace std;


string lettres_majuscules_de(const string & str){
   string s;
   for(size_t i = 0; i < str.size();++i){
      if(isupper(str[i])){
         s += str[i];
      }
   }
   return s;
}

int main() { 
   cout << lettres_majuscules_de("Hello, World !") << endl 
        << lettres_majuscules_de("AbCDefgHIJklmnoP") << endl;
        
   return 0;
}


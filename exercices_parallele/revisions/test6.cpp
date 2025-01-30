#include <iostream> 
//#include "lettres.h"  
#include <string>
using namespace std;

string lettres_majuscules_de(string const&);

using namespace std; 
 
int main() { 
   cout << lettres_majuscules_de("Hello, World !") << endl 
        << lettres_majuscules_de("AbCDefgHIJklmnoP") << endl; 
}

string lettres_majuscules_de(string const& str){
    string lettres_majuscules = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result ;
    for(size_t i = 0; i < str.length();++i){
        for(size_t j = 0 ; j < lettres_majuscules.length();++j){
            if(str[i] == lettres_majuscules[j]){
                result += str[i];
            }

        }
    }
    return result;
}

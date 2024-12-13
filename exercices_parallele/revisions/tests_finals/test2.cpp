#include <iostream>
#include <string>
using namespace std;

char& premier_e(string& str){
    for(size_t i = 0; i < str.length();++i){
        if(str[i] == 'e'){
            return str[i];
        }
    }
    return str[str.length() - 1];
}

int main() { 
   string s = "Hello"; 
   premier_e(s) = 'X'; 
   cout << s << endl; 
 
   string s2 = "abracadabra"; 
   premier_e(s2) = 'X'; 
   cout << s2 << endl; 
}
#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include <algorithm>
#include <cctype>

using namespace std;

size_t transformer(string& str,string first,string second){
    size_t count = 0 ;

    assert(first.size() == second.size());
    transform(first.begin(),first.end(),first.end(),::toupper);
    
    for(size_t i =0; i < str.size();++i){
        
        char ch = ::toupper(str[i]);
        size_t pos = first.find(ch);

        if(pos != string::npos){
            ++count;
            str[i] = isupper(str[i]) ? ::toupper(second[pos]) : ::tolower(second[pos]);
        }
    }

    return count;
}


int main() {
   string s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus facilisis at dolor eget congue. Duis in lacus placerat ante consectetur tempor. Aliquam lorem nunc, laoreet quis feugiat accumsan, vulputate vitae justo.";
   cout << transformer(s,"abcdefgh.!,:","fghabcde!,:.") << endl;
   cout << s << endl;
   cout << transformer(s,"fghabcde!,:.","abcdefgh.!,:") << endl;
   cout << s << endl;

   return EXIT_SUCCESS;
}
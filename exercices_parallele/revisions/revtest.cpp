#include <iostream>
#include <string>
using namespace std;

string lettres_majuscules_de(string const& str){
    string resultat = "";
    for(size_t e : str)
        if(e >= 'A' && e <= 'Z')
            resultat += e;
    return resultat;
}

int main() { 
   cout << lettres_majuscules_de("Hello, World !") << endl 
        << lettres_majuscules_de("AbCDefgHIJklmnoP") << endl; 
}

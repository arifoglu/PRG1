#include <iostream> 
using namespace std; 
 
// votre code vient ici  
void afficher_en_triangle(string const&);

int main() { 
   afficher_en_triangle("hello"); 
}

void afficher_en_triangle(string const& str){
    for(size_t i = 0; i < str.size() ; ++i){
       cout << string(i, ' ') << str.substr(0,str.size() - i) << endl;
    }
}

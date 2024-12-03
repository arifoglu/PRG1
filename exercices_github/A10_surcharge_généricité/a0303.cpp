#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <span>
using namespace std;

enum class Chiffre { ZERO,  UN,  DEUX,  TROIS,  QUATRE,  CINQ,  SIX,  SEPT,  HUIT,  NEUF };
array      CHIFFRE {"ZERO","UN","DEUX","TROIS","QUATRE","CINQ","SIX","SEPT","HUIT","NEUF" };

ostream& operator<<(ostream& os,Chiffre chiffre){
   os << CHIFFRE[size_t(chiffre)];
   return os;
}
ostream& operator<<(ostream& os,span<const Chiffre> tab){
   for(size_t i = 0; i < tab.size();++i){
      if(i){
         os << tab[i];
      }
   }
   return os;
}
vector<Chiffre> nbreToEnums(int valeur) {

   vector<Chiffre> result((size_t)log10(valeur) + 1);
   size_t i = result.size() - 1;

   do {
      result.at(i--) = ( Chiffre(valeur % 10) );
      valeur /= 10;
   } while (valeur);

   return result;
}

int main() {



   return EXIT_SUCCESS;
}
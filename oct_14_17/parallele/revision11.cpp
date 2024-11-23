#include <string>
#include <string>
#include <iostream>
using namespace std;

string & replace_all(string & str,const string & from, const string & to){
    size_t position_from = str.find(from);
    size_t longeur_from = from.length();

    if(position_from == string::npos){
        cout << "Le mot " << from << " n'a pas trouvé!!! "<<endl;
    }else{
        while(position_from != string::npos){
            str.replace(position_from,longeur_from,to);
            //new position
            position_from = str.find(from,position_from + to.length());
        }
    }
    return str;
}


// Ecrivez ici la fonction remplacer_occurences

int main() {
   string texte{"Les sanglots longs de violons de l'automne "
                "bercent mon coeur d'une langueur monotone"};
   cout << texte << endl;
   for (auto p: {pair<string, string>{"on", "ON"},
                 {"on", "o"},
                 {"on", "oin"},
                 {"o", "ooo"}}) {
      cout << replace_all(texte, p.first, p.second) << endl;
   }
}
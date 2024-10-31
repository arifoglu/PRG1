// abdulkadir arifoglu 31.10.2024 Laboratoire 14
/*
Implanter une fonction de prototype :
 string & replace_all(string & str, const string & from, const string & to);qui remplace dans str toutes les occurrences de la sous-chaîne from par la sous-chaîne to
- Par exemple remplacer "toto" par "titi" dans "tototo",on remplacera uniquement le début de l’occurrence : "titito" 
- On désire une implantation avec un nombre d’opérations élémentaires au plus proportionnel à |str |·(|from|+ |to|) ; on comptabilisera comme opération élémentaire la comparaison, le déplacement ou la copie d’un caractère
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string & replace_all(string & str, const string & from, const string & to);

int main(){
    string text, from, to;
    cout << "Ecrivez un text : ";
    getline(cin,text) ;
    cout << "Quelle mot voulez-vous changer ? : ";
    cin >> from ;
    cout << "Quelle mot voulez-vous mettre ? : ";
    cin >> to ;

    // modifier le text
    string text_modifie = replace_all(text,from,to);
    cout << "Après le changement votre text : "<< text_modifie <<endl;
    
    return EXIT_SUCCESS;
}

string & replace_all(string & str, const string & from, const string & to){
    size_t position_from = str.find(from);
    size_t longeur_from = from.length();

    if(position_from == string::npos)
    {
        cout << "Le mot '" << from << "' n'a pas trouvé." << endl;
    }
    else
    {
        while(position_from != string::npos){
              str.replace(position_from,longeur_from,to);
              position_from = str.find(from,position_from + to.length());
        }                
    }
    return str;
}



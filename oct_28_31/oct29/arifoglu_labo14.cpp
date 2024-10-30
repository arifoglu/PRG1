// abdulkadir arifoglu 29.10.2024 Laboratoire 14
/*
Implanter une fonction de prototype :
 string & replace_all(string & str, const string & from, const string & to);qui remplace dans str toutes les occurrences de la sous-chaîne from par la sous-chaîne to
- Par exemple remplacer "toto" par "titi" dans "tototo",on remplacera uniquement le début de l’occurrence : "titito" 
- On désire une implantation avec un nombre d’opérations élémentaires au plus proportionnel à |str |·(|from|+ |to|) ; on comptabilisera comme opération élémentaire la comparaison, le déplacement ou la copie d’un caractère
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//string & replace_all(string & str, const string & from, const string & to);
//string & replace_all(string & str, const string & from, const string & to){
//    size_t pos = str.find(from);
//    cout << pos << endl;
//}

int main(){
    string mot;
    cout << "Entrez un mot : ";
    cin >> mot;
    
    size_t pos = mot.find("on");
    
    if(pos != string::npos)
    {
        cout << pos << endl;
    }
    else
    {
        cout << "on" << " n'existe pas."<<endl;
    }

    //replace_all(mot,"on","nous");

    return EXIT_SUCCESS;
}




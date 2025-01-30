/*
Ecrire une fonction C++ qui prend en paramètre une chaîne de caractères str (de type string) et qui retourne une chaîne de caractères (de type string) contenant :

le caractère médian de str, si str comporte un nombre impair de caractères
les 2 caractères médians de str, si str comporte un nombre pair de caractères
Exemples
milieu("ABC") renvoie "B"; milieu("ABCD") renvoie "BC"
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string milieu(string);

int main(){
    cout << "Merci de saisir une chaîne de caractères : \n";
    string str; 
    cin >> str;

    cout << "\"" << str << "\" - Milieu = \"" << milieu(str) << "\"\n";

    return EXIT_SUCCESS;
}

string milieu(string lettre){

    if(lettre.length() < 2) return "";

    int median_lettre = lettre.length() / 2;
    string str_milieu;

    if(lettre.length() % 2 == 0)
    {
        str_milieu = lettre.substr(median_lettre - 1,2);
    }
    else
    {
        str_milieu = lettre.substr(median_lettre , 1) ;
    }
    return str_milieu;
}

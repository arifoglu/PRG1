/*
Indiquer ce que va afficher chacune des séquences d'instructions suivantes :
Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    //string s = "ABC";
    //cout << '|' << s[1] << '|' << endl; // |B|

    //string s1 = "ABC";
    //string s2 = s1[1]; // char s2 = s1[1]  
    //cout << '|' << s2 << '|' << endl;// erreur 

    //string s1 = "ABC";
    //string s2;
    //s2 = s1[1];
    //cout << '|' << s2 << '|' << endl;// |B|
    
    //string s = "ABC";
    //cout << '|' << s[3] << '|' << endl; // |\0|
    
    //string s = "ABC";
    //cout << '|' << s[4] << '|' << endl; // ||

    //string s = "ABC";
    //cout << '|' << s.at(3) << '|' << endl; // out of range

    //string s;
    //cout << s.length() << endl; // 0

    //string s = "ABC";
    //cout << s.length() << endl; // 3

    //string s = "ABC";
    //cout << s.size() << endl; // 3

    //string s = "ABC";
    //s.resize(5);
    //cout << '|' << s << '|' << endl; // |ABC\0\0|

    //string s = "ABC";
    //s.resize(2, 'x');
    //cout << '|' << s << '|' << endl; // AB

    //string s = "ABC";
    //s.resize(4,'x');
    //cout << '|' << s << '|' << endl; // ABCx
 
    //string s = "ABCDE";
    //cout << '|' << s.substr(1, 2) << '|' << endl; // |BC|

    //string s = "ABCDE";
    //cout << '|' << s.substr(0, 10) << '|' << endl;//|ABCDE|

    //string s = "ABCDE";
    //cout << '|' << s.substr(3) << '|' << endl; // |DE|

    //string s = "ABCDE";
    //cout << '|' << s.substr() << '|' << endl;// ABCDE
    return EXIT_SUCCESS;
}
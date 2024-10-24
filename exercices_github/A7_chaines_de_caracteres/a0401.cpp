/*
Indiquer ce que va afficher chacune des séquences d'instructions suivantes :
Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // #1
    //string s1 = "ABC";
    //string s2 = "123";
    //s1.insert(1, s2); 
    //cout << '|' << s1 << '|' << endl; // A123BC
    
    // #2
    //string s1 = "ABC";
    //string s2 = "123";
    //s1.insert(4, s2); 
    //cout << '|' << s1 << '|' << endl; // out of range
    
    // #3
    //string s1 = "ABC";
    //string s2 = "123";
    //s1.insert(2, s2, 1, 2); 
    //cout << '|' << s1 << '|' << endl; // AB23C

    // #4
    //§string s1 = "ABC";
    //string s2 = "123";
    //s1.insert(2, s2, 0, string::npos); // AB123C
    //cout << '|' << s1 << '|' << endl;

    // #5
    //string s = "ABC";
    //s.insert(3, "123", 2); 
    //cout << '|' << s << '|' << endl; // ABC12

    // #7
    //string s1 = "ABCDEF";
    //string s2 = "123";
    //s1.replace(1, 2, s2); 
    //cout << '|' << s1 << '|' << endl; // A123DEF

    // #8
    //string s1 = "ABCDEF";
    //string s2 = "123";
    //s1.replace(2, 4, s2); 
    //cout << '|' << s1 << '|' << endl; // AB123

    // #9
    //string s1 = "ABCDEF";
    //string s2 = "123";
    //s1.replace(1, 2, s2, 1, 2); 
    //cout << '|' << s1 << '|' << endl; // A23DEF

    // #10
    //string s = "ABCDEF";
    //s.replace(2, 3, "123", 2); 
    //cout << '|' << s << '|' << endl; // AB12F

    // #11
    //string s = "ABCDEF";
    //s.erase(); 
    //cout << '|' << s << '|' << endl; // ||
    
    // #12
    //string s = "ABCDEF";
    //s.erase(2); 
    //cout << '|' << s << '|' << endl; //  AB
    
    // #13
    //string s = "ABCDEF";
    //s.erase(2, 2); 
    //cout << '|' << s << '|' << endl; // |ABEF|

    return EXIT_SUCCESS;
}
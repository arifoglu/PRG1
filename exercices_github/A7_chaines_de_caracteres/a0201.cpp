#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    //////////////
    // 1.
    //string s1 = "ABCDEF";
    //string s2(s1,1);
    //cout << '|' << s2 << '|' << endl;// |BC|  
    /////////////
    // 2.
    //string s1 = "ABC";
    //string s2(s1, 2, 3);
    //cout << '|' << s2 << '|' << endl;// |C|
    /////////////
    // 3.
    //string s1 = "ABC";
    //string s2(s1, 3, 2);
    //cout << '|' << s2 << '|' << endl; // ||
    
    // 4.
    //string s1 = "ABC";
    //string s2(s1, 4);
    //cout << '|' << s2 << '|' << endl; // erreur ä l'exécution
    
    // 5.
    //string s("ABC", 3);
    //cout << '|' << s << '|' << endl; // |ABC|

    // 6.
    //string s("ABC", 4);
    //cout << '|' << s << '|' << endl; // |ABC\0|

    // 7.
    //string s("ABC", 5);
    //cout << '|' << s << '|' << endl; // comportement indefini

    // 8.
    //string s(3, 'A');
    //cout << '|' << s << '|' << endl; // |AAA|
    return EXIT_SUCCESS;
}
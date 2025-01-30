#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void palindrome(string str){
    size_t len = str.length();
    bool isPalindrome = true;
    
    for(size_t i = 0; i < len ;++i)
    {
        if(str[i] != str[len - 1 - i ]){
            isPalindrome = false;
            break;
        }
    }
     cout << (isPalindrome ? "Le mot " + str + " est un palindrome " : "Le mot " + str + " n'est pas un palindrome ") <<endl;
}

int main() {
    
    while(true)
    {
    string mot;
    cout << "Entrez un mot (ou 'quit' pour sortir) : ";
    cin >> mot;
    if(mot == "quit"){
        cout << "Bye!!!"<<endl;
        break;
    }
    palindrome(mot);
    }

    return EXIT_SUCCESS;
}


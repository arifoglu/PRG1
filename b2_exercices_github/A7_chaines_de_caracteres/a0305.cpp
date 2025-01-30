/*
Écrivez un programme C++ qui lit un mot depuis le clavier, le stocke dans une chaîne de caractères, et vérifie si le mot est un palindrome. 
- Un palindrome se lit de la même manière de gauche à droite et de droite à gauche. Voici des exemples de palindromes : 'radar', 'kayak', et 'sos'. Modifiez le programme pour qu'il lise et vérifie continuellement des mots.

PS. Nous ne considérons pas ici les caractères accentués.

Pensez à organiser votre code avec les fonctions.

Entrez un mot (ou 'quitter' pour sortir) : sos
Le mot 'sos' est un palindrome.
Entrez un mot (ou 'quitter' pour sortir) : kayak
Le mot 'kayak' est un palindrome.
Entrez un mot (ou 'quitter' pour sortir) : heig-vd
Le mot 'heig-vd' n'est pas un palindrome.
Entrez un mot (ou 'quitter' pour sortir) : quitter
Fermeture du programme. Au revoir !
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void palindrome(string word);

int main(){
    while(true){
        string mots;
        cout << "Entrez un mot (ou 'quit' pour sortir) : " ;
        cin >> mots;
        if(mots == "quit"){
            cout << "Au revoir ! "<<endl;
            break;
        }
        palindrome(mots);
    }
    

    return EXIT_SUCCESS;
}

void palindrome(string word){
    size_t len = word.length();
    bool isPalindrome = true;

    for(size_t i = 0; i < len / 2 ;++i){
        if(word[i] != word[len - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    cout << (isPalindrome ? "Le mot " + word + " est un palindrome " : "Le mot " + word + " n'est pas un palindrome ") <<endl;

}

// LectureChaine
#include <iostream> 
using namespace std;

int main() {
    cout << "Quel est votre nom : ";
    string nom ; 
    cin >> nom;
    
    cout << nom <<endl;

    // Manger le retour de ligne
    getchar(); 
    //2.option => cin.ignore()
    cout << "Quels sont vos prenoms : ";
    string prenom ; 
    getline(cin, prenom,'.');
    
    cout << "bonjour " << prenom << " " << nom << endl ;
    
    return 0;
}
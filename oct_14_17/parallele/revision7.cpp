#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string full_name;
    cout << "Entrez votre prenom et et nom : ";
    getline(cin,full_name);

    size_t position_espace_blanc = full_name.find(' ');

    string prenom = full_name.substr(0,position_espace_blanc);
    string nom = full_name.substr(position_espace_blanc + 1);

    string acronyme = full_name.substr(0,1) 
                    + full_name.substr(position_espace_blanc + 1,1) 
                    + string(1, toupper(full_name[full_name.size() - 1]));

    cout << "Votre prenom est : "   << prenom << "\n";
    cout << "Votre nom est : "      << nom << "\n";
    cout << "Votre acronyme est : " << acronyme << "\n";


    return EXIT_SUCCESS;
}


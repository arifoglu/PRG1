#include "test_lire.hpp"
#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

void testLireFichier(const string& filePath) {
    try {
        ifstream fichier(filePath);
        fichier.exceptions(ifstream::failbit | ifstream::badbit);

        string ligne;
        cout << "Contenu du fichier " << filePath << " :" << endl;

        while (true) {
            try {
                getline(fichier, ligne);
                if (fichier.eof()) break;
                cout << ligne << endl;
            } catch (const ifstream::failure& e) {
                if (fichier.eof()) break;
                throw;
            }
        }

        fichier.close();

    } catch (const ifstream::failure& e) {
        cerr << "Erreur : Exception attrapée pendant la lecture du fichier !" << endl;
        cerr << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Erreur générale : " << e.what() << endl;
    }
}

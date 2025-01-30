#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    try {
        // Ouvrir le fichier
        ifstream fichier("equation5_5.txt");
        fichier.exceptions(ifstream::failbit | ifstream::badbit);

        string ligne;
        while (true) {
            try {
                // Lire une ligne du fichier
                getline(fichier, ligne);

                // Vérifier la fin du fichier
                if (fichier.eof()) break;

                // Afficher la ligne lue
                cout << ligne << endl;
            } catch (const ifstream::failure& e) {
                // Ignorer les exceptions EOF
                if (fichier.eof()) break;

                // Relancer d'autres exceptions
                throw;
            }
        }

        // Fermer le fichier après lecture
        fichier.close();
    } catch (const ifstream::failure& e) {
        cerr << "Erreur : Exception attrapée pendant la lecture du fichier !" << endl;
        cerr << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Erreur générale : " << e.what() << endl;
    }

    return 0;
}

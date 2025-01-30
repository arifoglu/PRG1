#include <iostream>
#include <fstream>
#include "matrice.hpp"

using namespace std;

int main() {
    try {
        // Dosyadan matrisi okuma
        ifstream fichier("equation5_5.txt");
        if (!fichier) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5; // Matrisin boyutu
        Matrice<int> A(n, n + 1);
        A.lireMatrice(fichier);
        fichier.close();

        // Matrisin başlangıç durumu
        cout << "Matrice initiale :" << endl;
        A.afficherMatrice();

        // Sistemi çözme
        int* solution = A.resoudre();
        cout << "Solution calculée :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        // Çözümün doğruluğunu kontrol etme
        if (verifierSolution(A, solution, n, n + 1)) {
            cout << "La solution est correcte." << endl;
        } else {
            cout << "La solution est incorrecte." << endl;
        }

        delete[] solution;
    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}

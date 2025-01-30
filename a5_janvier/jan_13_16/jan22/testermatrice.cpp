#include "testermatrice.hpp"

template <typename T>
void testerMatrice(const string& filePath) {
    try {
        ifstream fichier(filePath);
        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5; 
        Matrice<T> A(n, n + 1);

        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice initiale (" << typeid(T).name() << ") :" << endl;
        A.afficherMatrice();

        for (int i = 0; i < n; i++) {
            cout << "\nPivotage pour la colonne " << i + 1 << " :" << endl;
            A.pivoter(i);
            A.afficherMatrice();
        }

        T* solution = A.resoudre();
        cout << "\nSolution du système :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;
    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
}

// 
template void testerMatrice<uint64_t>(const string& filePath);
template void testerMatrice<double>(const string& filePath);
template void testerMatrice<Rationnel<int>>(const string& filePath);

#include <iostream>
#include <vector>
using namespace std;

int main() {

using Ligne = vector<int>; // Ligne est maintenant synomyme de vector<int>
using Vecteur2D = vector<Ligne>; // using permet de clarifier le code
    
    Vecteur2D v2d; // v2d est pour l'instant un vecteur vide de vecteurs vides
    v2d.push_back({1,2}); // On ajoute une première ligne à v2d
    v2d.push_back({3,4,5,6}); // On ajoute une première ligne à v2d
    v2d.push_back({7,8,9});
     cout << v2d[1][3] << " " << v2d.at(2).at(1) << endl;
    
     for (auto ligne : v2d)

     { 
        for (auto e : ligne)
                cout << e << ' ';
                cout << endl;
    
     }
    
    return 0;
 }
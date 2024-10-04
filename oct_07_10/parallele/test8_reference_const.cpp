#include <iostream>
#include <cstdlib>

using namespace std;

void afficher(const int& p1, const char& p2) {
    cout << "p1 = " << p1 << " , p2 = " << p2 << endl;
}

int main() {
    const int CI = 65;
    const char CC = 'B';
    int vi = 67;
    char vc = 'D';
    afficher(vi, vc);
    afficher(vc, vi);
    afficher(CI, vc); 
    afficher(vi, CC);
    afficher(67, vc);
    afficher(vi, 'E');
    
    return EXIT_SUCCESS;
}
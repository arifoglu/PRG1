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
    afficher(vi, vc);//p1 = 67  p2 = D 
    afficher(vc, vi);//p1 = 68 p2 = C
    afficher(CI, vc);//p1 =65  p2 = D 
    afficher(vi, CC);//p1 =67  p2 = B
    afficher(67, vc);//p1 =67  p2 = D
    afficher(vi, 'E');//p1=67  p2 = E 
    
    return EXIT_SUCCESS;
}
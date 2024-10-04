#include <iostream>
#include <cstdlib>

using namespace std;

void f(int& p1, char& p2) {
    cout << p1 << p2 << endl;
}

int main() {
    const int ci = 65;
    const char cc = 'B';
    int vi = 67;
    char vc = 'D';
    f(vi, vc); // Appel valide => 67 D
    
    //f(vc, vi); //non valide => D 67
    //f(ci, vc); //non valide => ci problem
    //f(vi, cc); //non valide => cc problem
    //f(67, vc); //non valide => vi problem
    //f(vi, 'E');//non valide => E pproblem
    
    return EXIT_SUCCESS;
}
/*
Que va afficher le programme ci-dessous ? Expliquer les résultats obtenus.
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(0);
   cout << "1) " << 3 * 1000 * 1000 * 1000 << endl; //  
   
   cout << "2) " << 3.0 * 1000 * 1000 * 1000 << endl;// 3000000000000

   cout << "3) " << 100000 * 100000 * 100000.0 << endl;//
   
   cout << "4) " << 100000.0 * 100000 * 100000 << endl;//
   cout << "5) " << 1E7 + 1.0 << endl;
   cout << "6) " << 1E7f + 1.f << endl;
   cout << "7) " << 1E8 + 1.0 << endl;
   cout << "8) " << 1E8f + 1.f << endl;
    cout << "9) " << 1E9 + 1.0 << endl;

//
    return EXIT_SUCCESS;
}
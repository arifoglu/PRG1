/*
Quelles modifications faut-il apporter au programme ci-dessous pour le rendre correct ?
NB Aucune ligne de code ne doit être ajoutée !
*/
#include <cstdlib>
#include <iostream>

using namespace std;

void f() {
   cout << "Appel de f\n";
}

//------------------------------------------------------------
void g(int i,double j) {
   cout << "Appel de g avec i = " << i << " et j = " << j << "\n";
}

//------------------------------------------------------------
void h(int i, int c) {
   cout << "Appel de h avec i = " << i << " et c = '" << c << "'\n";
}
int main() {
   f();
   g(1, 2.0);
   h(64, 65);

   return EXIT_SUCCESS;
}


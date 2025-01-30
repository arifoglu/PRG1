#include <iostream>

using namespace std;

void f(int & v) {cout << "f1\n";}        // Transmission par référence seul int autorisé
void f(const int & v) {cout << "f2\n";}  // Transmission par référence constante
void f(int && v) {cout << "f3\n";}       // Transmission par déplacement

int main(){
    int i; const int c = 4; double x;
    //f(i);         // f1
    //f(c);         // f2
    //f(x);         // conversion de x vers un int temporaire, appel de f3
    //f(2);         // création d'un int temporaire contenant 2, appel de f3
    //f(4*i);       // création d'un int temporaire contenant la valeur de 4*i, appel de f3
    //f(move(i));   // Modification du type de i en une rvalue, appel de f3
}

/*
- Note:
    f(x), f(2) , f(4*i) => bunlar rvalue degeri oldugu icin;
    1)Normalde gecici bir const int e donusuyordu. f(const int &) uygun du bunlar
    icin.
    2)Ama burda f(int && ) daha uygun cunku (int &&) isareti sabit bir rvalue
    demek.
    
    yani 2 fonksiyon varliginda rvalue icin (int &&) > (const int &) 
*/
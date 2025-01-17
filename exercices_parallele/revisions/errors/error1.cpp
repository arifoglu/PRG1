#include <iostream>
#include <cstdlib>

using namespace std;

void f(){
    throw 34;
}

int main() {
    try{
        f();
    }
    catch(int e){
        cout << "error!! int attrapé!! " << e <<endl;
    }

    return EXIT_SUCCESS;
}
/*
Bir fonksiyon yaz, bu fonksiyon throw ile bir int istisnası fırlatsın.
main() içinde bu fonksiyonu çağır ve try-catch bloğunda istisnayı yakala.
İstisna yakalandığında ekrana "Hata: int istisnasi yakalandi" yazdır.
*/
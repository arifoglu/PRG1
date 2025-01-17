#include <iostream>
#include <cstdlib>

using namespace std;

void f(int type){
    if(type == 0)
    throw 12;
    if(type == 1)
    throw 'A';
    if(type == 2)
    throw 3.;
}

int main() {
    for(int i = 0; i < 3;++i){
        try{
            f(i);
        }
        catch(int e){
            cout << "Error attrapé : " << e <<endl; 
        }
        catch(char e){
            cout << "Error attrapé : " << e <<endl; 
        }
        catch(double e){
            cout << "Error attrapé : " << e <<endl; 
        }
    }
    

    return EXIT_SUCCESS;
}
/*
Bu sefer, fonksiyonun 3 farklı türde istisna fırlatabilmeli (int, char, double).
main() içinde, try-catch bloğunda bu üç türü ayrı catch bloklarında yakala.
Her tür için farklı bir hata mesajı yazdır.
*/
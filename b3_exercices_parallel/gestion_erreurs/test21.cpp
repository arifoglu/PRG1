#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    try{
        try{
            throw 12;
        }
        catch(int e){
            cout << "Dans catch (int) valeur recu : " << e <<endl;
            throw 3.5;
        }
    }
    catch(double e){
        cout << "Dans catch (double) valeur recu :" << e <<endl;
    }
    cout << "fin du programme!!" <<endl;

    return EXIT_SUCCESS;
}
/*
Kodun içinde önce bir int istisnası fırlat, sonra bunu yakalayıp double türünde yeni bir istisna fırlat.
Yeni istisna, catch(double) bloğunda yakalansın.
Her catch bloğunda ekrana hangi türde istisna yakalandığını yazdır.
Programın sonunda "Fin du programme" yazdır.
*/

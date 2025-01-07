#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    ////////////////////////
    /*
    __func__ ve __LINE__ onceden tanimli c++ makro

    __func__ => fonksiyon icinde calisir,fonksiyon ismini verir.

    __LINE__ => kodun hangi satirda calistigini gosterir, int degeridir.

    */
    {
    try{
        throw out_of_range("Erreur dans "s + __func__ + ", ligne "s + to_string(__LINE__));
    }
    catch(exception& e){
        cout << e.what() <<endl;
    }
    }

    /////////////////////////
    /*
    __FILE__      => dosya ismini verir.
    */
    cout << __FILE__ << endl;

    /*
    __cplusplus__ => c++ standart bilgisi verir. 
    */
    cout << __cplusplus <<endl;

    /////////////////////////

}

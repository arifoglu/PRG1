#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int number;
    cout << "Saisissez un nombre : ";
    cin >> number;

    if(number > 100){
        cerr << "Erreur number est plus grand 100 \n";
    }else{
        cout << number <<endl;
    }
    clog << "Programme est fonctionné.\n";

    return EXIT_SUCCESS;
}

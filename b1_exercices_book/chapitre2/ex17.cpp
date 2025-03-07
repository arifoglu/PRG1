#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    do{
        cout << "donne un nombre positif : ";
        cin >> n;
        if(n < 0){
            cout << "svp positif\n";
            continue;
        }
        if(n > 0)
        cout << "sa racine carrée est    : " << sqrt(n) << endl;

    }while(n);
    

    return 0;
}
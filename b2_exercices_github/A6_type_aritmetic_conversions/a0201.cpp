#include <iostream>

using namespace std;

void calculer_representation(double r ,double base, double& mantisse, int& exposant){
    mantisse = r;
    exposant = 0;
    while(mantisse < 1){
        mantisse *= base;
        --exposant;
    }
    while(mantisse >= base){
        mantisse /= base;
        ++exposant;
    }
}

int main() {

   cout << "Entrez un nombre réel : ";
   double r; cin >> r;

   double mantisse;
   int exposant;
   
   calculer_representation(r, 10., mantisse, exposant);
   cout << r << " = " << mantisse << " * 10^" << exposant << endl;
   
   calculer_representation(r, 2., mantisse, exposant);
   cout << r << " = " << mantisse << " * 2^" << exposant << endl;
}
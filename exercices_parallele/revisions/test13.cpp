#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;    

int main() {
   string adresse;
   cout << "Entrez le nom et le numero de la rue : ";
   getline(cin,adresse);

   size_t pos_number = adresse.find_first_of("0123456789"); 
   
   if(pos_number == string::npos)// pas de numeros
    pos_number = adresse.size();

   cout << "Le nom de la rue est : " << adresse.substr(0,pos_number) 
        << "\nLe no de la rue est  : " << adresse.substr(pos_number)
        << endl;
  

//
//Le no de la rue est  : 24a

    return EXIT_SUCCESS;
}


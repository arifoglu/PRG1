/*
Compléter le programme C++ ci-dessous pour qu'il affiche combien le mois choisi (1 pour janvier, 2 pour février, etc) compte de jours. Si l'utilisateur entre la valeur 2, le programme doit répondre : "Ce mois comporte 28 ou 29 jours"
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
   const int jours30 = 30;
   const int jours31 = 31;
   const int jours28 = 28;
   const int jours29 = 29;

   cout << "Entrez un no de mois (1-12) : ";
   int no_mois; cin >> no_mois;

   if(no_mois <= 12 && no_mois > 0)
   {
   cout << "Ce mois comporte ";   
   switch(no_mois){
      case 1 : case 3 : case 5 : case 7: case 8: case 10: case 12 : cout << jours31 << endl; break ;   
      case 4 : case 6 : case 9 : case 11: cout << jours30 << endl;break;
      case 2 : cout << jours28 << " ou " << jours29<<endl;break; 
      default : cout << "Entre la valeur entre 1 et 12 svp! ";break;    
   }
   cout << " jours." << endl;
   }else{
       cout << "Entre la valeur entre 1 et 12 svp! "<<endl;
   }
   /*
   //fallthrough
   switch(no_mois){
      case 2 : cout << jours28 << " ou " << jours29<<endl;break; 
      case 4 : [[fallthrough]];
      case 6 : [[fallthrough]];
      case 9 : [[fallthrough]];
      case 11: cout << jour30 <<endl;
      default : cout << jours31 <<endl;
   }
   */
   return EXIT_SUCCESS;
}

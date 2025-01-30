/*
Une société suisse tarife ses frais de livraison comme suit :

5.00 CHF si livraison en Suisse, à l'exception des cantons des Grisons et du Tessin où les frais de livraison se monte à 7.00 CHF
7.00 CHF si livraison au Liechtenstein.
10.00 CHF partout ailleurs dans le monde
Complétez le programme qui suit pour qu'il détermine et affiche le tarif de livraison. Il ne peut poser que des questions auxquelles l'utilisateur répond que par "O" (oui) ou "N" (non)
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
   const double tarif_suisse = 5.00;
   const double tarif_suisse_grison_tessin = 7.00;
   const double tarif_liechtenstein = 7.00;
   const double tarif_monde = 10.00;
   cout << "Livraison en Suisse ? (O/N) ";
   char reponse1;
   cin >> reponse1;
   if(reponse1 == 'N')
   {
      cout << "livraison au Liechtenstein ? (O/N)  ";
      char reponse2;
      cin >> reponse2;
      if(reponse2 != 'N')
      {
         cout << "Votre tarif est : " << tarif_liechtenstein << " CHF "<<endl;
      }
      else 
      {
         cout << "Votre tarif est : " << tarif_monde << " CHF " <<endl;
      }
   }
   else
   {
      cout << "Votre cantons  est des Grisons et du Tessin ? (O/N) ";
      char reponse3 ;
      cin >> reponse3;
      if(reponse3 == 'O')
      {
         cout << "Votre tarif est : "<< tarif_suisse_grison_tessin << " CHF " <<endl;
      }
      else
      {
         cout << "Votre tarif est : " << tarif_suisse << " CHF "<<endl;
      }

   }

   return EXIT_SUCCESS;
}

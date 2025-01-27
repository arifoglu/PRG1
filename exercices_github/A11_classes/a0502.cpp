#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Voiture{ 
   private:
      static double prixEssence;
      unsigned capaciteReservoir;
      double consommationMoyenne;
      double nbLitresDansReservoir;
   public:
      Voiture(unsigned capaciteReservoir, double consommationMoyenne);

      unsigned getCapaciteReservoir()const {return capaciteReservoir;};
      double getConsommationMoyenne()const {return consommationMoyenne;};
      double getNbLitresDansReservoir()const {return nbLitresDansReservoir;};
      static double  getPrixEssence()      {return prixEssence;}

      static void setPrixEssence(double prix);

      double effectuerTrajet(double nbKm);

};
double Voiture::prixEssence = 1.7;

Voiture::Voiture(unsigned capaciteReservoir, double consommationMoyenne)
: capaciteReservoir(capaciteReservoir), consommationMoyenne(consommationMoyenne),
 nbLitresDansReservoir(capaciteReservoir){}

double Voiture::effectuerTrajet(double nbKm) {
   const double consommation = nbKm * consommationMoyenne / 100;
   nbLitresDansReservoir -= consommation;
   while (nbLitresDansReservoir <= 0)
      nbLitresDansReservoir += capaciteReservoir;
   return consommation * prixEssence;
}
void Voiture::setPrixEssence(double prix){
   prixEssence = prix;
}
void afficherPrixEssence(double prix){
   cout << fixed << setprecision(2)
        << "Prix de l'essence : " << prix << "Frs"
        << endl;
}
void afficherVoiture(const Voiture& v){
   cout << "Capacite du reservoir [l]      : " << v.getCapaciteReservoir()<<endl
        << "Consommation moyenne[l/100km]  : " << v.getConsommationMoyenne()<<endl
        << "Nb litres restants             : " << v.getNbLitresDansReservoir()
        << endl;
}
void afficherCoutTrajet(double montant){
   cout << "Cout du trajet : " << montant << " Frs" << endl;
}

int main() {

    afficherPrixEssence(Voiture::getPrixEssence());
        
    Voiture::setPrixEssence(1.95);
    afficherPrixEssence(Voiture::getPrixEssence());   

    Voiture v(52, 6.7);

    afficherVoiture(v);   
    afficherCoutTrajet(v.effectuerTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(200));
    afficherVoiture(v);

    return EXIT_SUCCESS;
}
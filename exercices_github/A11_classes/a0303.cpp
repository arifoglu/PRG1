#include <iostream>
#include <vector>
using namespace std;

class Pays{
    private:
        string nom;
        double population;
        int superficie;
    public:
        Pays(const string& name, long double numeros, int km);

        string getNom()          const;
        double getPopulation()   const;
        int    getSuperficie()   const;

        void setPopulation(double population);
        void setSuperficie(int superficie);

        double calcul()const;

};
Pays::Pays(const string& name, long double numeros, int km): nom(name), population(numeros), superficie(km) {}
string Pays::getNom()const{return this->nom;};
double Pays::getPopulation()const{return this->population;};
int Pays::getSuperficie()const{return this->superficie;};
void Pays::setPopulation(double population){
    this->population = population;
}
void Pays::setSuperficie(int superficie){
    this->superficie = superficie;
}
double Pays::calcul() const {
   return population * 1E6 / superficie;
}
int main() {
vector<Pays> v_pays{
           Pays("Suisse", 8.121830, 41290),
           Pays("France", 66.663766, 547030),
           Pays("Italie", 61.855120, 301230),
           Pays("Allemagne", 80.854408, 357021)
   };
size_t idx_max_superficie = 0; 
   size_t idx_max_population = 0;
   size_t idx_max_densite = 0;

   for (size_t i = 0; i < v_pays.size(); ++i){
      if (v_pays[i].getSuperficie() > v_pays[idx_max_superficie].getSuperficie()) {
         idx_max_superficie = i;
      }
      if (v_pays[i].getPopulation() > v_pays[idx_max_population].getPopulation()) {
         idx_max_population = i;
      }
      if (v_pays[i].calcul() > v_pays[idx_max_densite].calcul()) {
         idx_max_densite = i;
      }
   }
   cout << "Pays ayant la plus grande superficie               : "
        << v_pays[idx_max_superficie].getNom()
        << endl
        << "Pays ayant le plus d'habitants                     : "
        << v_pays[idx_max_population].getNom()
        << endl
        << "Pays ayant la densite de population la plus grande : "
        << v_pays[idx_max_densite].getNom()
        << endl;


}
    

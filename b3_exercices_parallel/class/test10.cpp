#include <iostream>
#include <cstdlib>
using namespace std;

class Date{
    private:
        int jour,mois,annee;
    public :
        int get_jour() const { return jour;}
        void set_jour(int jour){ this->jour = jour ;}

        int get_mois() const {return mois;}
        void set_mois(int mois) { this->mois = mois;}

        int get_annee() const { return annee;}
        void set_annee(int annee) { this->annee = annee;}

    void afficher() const {
        cout << jour << " " << mois << " "<< annee << endl;
    }        
};

int main() {
    Date date;
    date.set_jour(21);
    date.set_mois(11);
    date.set_annee(2123);
    date.afficher();
    return EXIT_SUCCESS;
}

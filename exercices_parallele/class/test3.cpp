#include <iostream>
#include <cstdlib>
using namespace std;

struct Date {
    int jour;
    int mois;
    int annee;
    void afficher() const;
    void modifier_jour(int jour);
};

int main() {
    Date date{24, 1, 1789};
    date.afficher();
    
    cout << endl;
    
    //modifier le jour
    date.modifier_jour(25);
    date.afficher();

    return EXIT_SUCCESS;
}

void Date::afficher() const {
    cout << jour << "/" << (*this).mois << "/" << this->annee ;
}
void Date::modifier_jour(int jour){
    this->jour = jour;
}
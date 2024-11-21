#include <iostream>
#include <vector>
using namespace std;

struct Date {
    uint8_t jour;
    uint8_t mois;
    uint16_t annee;
};
struct Personne {
    string prenom;
    string nom;
    Date   date;
};

int main() {
    array carnet {Personne{"Jean"s,   "Veuxplus"s, Date{ 7,  4, 1975}},
                  Personne{"Alain"s,  "Verse"s,    Date{21, 12, 2018}},
                  Personne{"Justin"s, "Ptipeu"s,   Date{ 1,  8, 2023}},
                  Personne{"Rémi"s,   "Fasol"s,    Date{17,  5, 1957}}};
    Personne * ptr;
    Personne& ref = carnet.at(0);

    // cout << ref.date << endl;

    //ptr = &carnet.at(0);
    //ptr = &carnet[0];
    //ptr = carnet.data();
    //cout << ptr->date;

    //ref.date.annee = 1976;

    // ptr->date.annee = 1976;

    
   return 0;
}
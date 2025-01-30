#include <iostream>
#include <cstdlib>
using namespace std;

struct Date {
    int jour;
    int mois;
    int annee;
};

void afficher(Date const& d);

int main() {
    Date date{24, 1, 1789};
    afficher(date);

    return EXIT_SUCCESS;
}

void afficher(Date const& d){
    cout << d.jour << "/" << d.mois << "/" << d.annee <<endl;
}

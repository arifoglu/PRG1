#include <iostream>
#include <cstdlib>
using namespace std;

struct Date {
    int jour;
    int mois;
    int annee;
    void afficher() const;
};

int main() {
    Date date{24, 1, 1789};
    date.afficher();

    return EXIT_SUCCESS;
}

void Date::afficher() const {
    cout << jour << "/" << mois << "/" << annee ;
}

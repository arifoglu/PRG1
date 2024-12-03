#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
    public:
        int jour, mois, annee;
};

int main() {
    Date date;
    date.jour = 24;
    date.mois = 1;
    date.annee = 1789;
    cout << date.jour << "/" << date.mois << "/" << date.annee <<endl;

    
    return EXIT_SUCCESS;
}

#include <iostream>
#include <cstdlib>
using namespace std;



int main() {
    struct Date
    {
        int jour, mois, annee;
    };

    Date date{1,2}; // verilmeyen deger 0 
    cout << date.jour << "/" << date.mois << "/" << date.annee << endl; // 1/2/0

    Date date2 = {.jour = 4, .annee = 2123 };
    cout << date2.jour << "/" << date2.mois << "/" << date2.annee << endl; // 1/0/2123
    
    Date date3 = {};
    cout << date3.jour << "/" << date3.mois << "/" << date3.annee << endl; // 0/0/0


    return EXIT_SUCCESS;
}

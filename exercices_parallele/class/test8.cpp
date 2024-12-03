#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
    int jour, mois,annee;
        public :
            friend bool operator<(Date const& lhs , Date const&rhs);
};

bool operator< (Date const& lhs, Date const& rhs) {
    return  lhs.annee < rhs.annee ? true :
            lhs.mois < rhs.mois ? true :
            lhs.jour < rhs.jour;
}

int main() {
    
    return EXIT_SUCCESS;
}

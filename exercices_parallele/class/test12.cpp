#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
    private:
        int jour,mois,annee;
    public :
        Date(){}
      
};

int main() {
    Date d1;
    Date d2{};
    Date d3 = Date();

    return EXIT_SUCCESS;
}

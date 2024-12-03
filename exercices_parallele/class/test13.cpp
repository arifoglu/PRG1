#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
    private:
        int jour,mois,annee;
    public :
        Date();
        Date(int j,int m, int a);
        
    void affiche(){
        cout << jour <<" " << mois << " " << annee << endl;
    }    
      
};
Date::Date() : jour(1), mois(1), annee(1234) {}

int main() {
    Date date;
    date.affiche();

    return EXIT_SUCCESS;
}

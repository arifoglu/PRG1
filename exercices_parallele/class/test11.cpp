#include <iostream>
#include <cstdlib>
using namespace std;

class Date {
    private:
        int jour,mois,annee;
    public :
        Date(int j, int m,int a){
            this->jour = j;
            this->mois = m;
            this->annee = a;
        }

    void affiche(){
        cout << jour << mois << annee <<endl; 
    }       
};

int main() {
    Date date(24,1,1789);
    date.affiche();

    return EXIT_SUCCESS;
}

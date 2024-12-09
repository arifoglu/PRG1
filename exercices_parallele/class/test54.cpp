#include <iostream>
using namespace std;

template<typename T, size_t n>
class Tableau{
    private:
        T tab[n];
    public:
        Tableau(){
            cout << "constructor fonctionne. " << n << " éléments." << endl;
        }    
        T& operator[](int i){
            return tab[i];
        }
};

int main() {
    Tableau<int,4> t;
    // tableau ya element ekliyoruz.
    for(int i = 0; i < 4;++i){
        t[i] = i + 1;
    }
    // tableau dan elemenlari yazdiriyoruz.
    for(int i = 0; i < 4;i++){
        cout << t[i] << " " << endl;
    }


    return EXIT_SUCCESS;
}



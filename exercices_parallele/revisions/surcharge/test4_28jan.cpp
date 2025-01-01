#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

template<typename T,size_t N>
void afficher(const string& label,const array<T,N>& arr){
    cout << label;
    for(const auto& e : arr){
        cout << e << " ";
    }
    cout << endl;
}


int main() {
    cout << fixed << setprecision(1);  

    // Array 
    array<int, 5> a{{1, 2, 3, 4, 5}};
    afficher("a = ",a);

    array<double, 5> b{{0, 10.3, 20.6}};
    afficher("b = ",b);

    // Type
    auto c = appondre<short>(a, b);
    afficher("c = ",c);
    
    auto d = appondre<double>(a, c);
    afficher("d = ",d);

    auto d = appondre<bool>(a, b);
    afficher("e = ",e);

    array<bool, 0> f{};
    afficher("f = ",f);

    return 0;
}

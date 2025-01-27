#include <iostream>
#include <cstdlib>

using namespace std;

struct Est_multiple_de{
    int n;
    bool operator()(int a) const{
    return a % n == 0;
    }
};

int main() {
    auto est_pair = Est_multiple_de{2};
    auto est_rond = Est_multiple_de{10};
    
    int n; cin >> n;
    if (est_pair(n) and not est_rond(n)) {
        cout << n << " est pair mais pas multiple de 10";
    }
   return EXIT_SUCCESS;
}
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;

void print(int i) { 
    cout << i << ' '; 
}

int main() {
    // foreach_n
    vector<int> v{1, 2, 3, 4, 5};
    
    for_each_n(v.begin(), 5, print); cout << '\n';
    for_each_n(v.begin(), 3, [](int& n) { n *= n; });
    for_each(v.begin(), v.end(), print); cout << '\n';
    
    struct Sum {
        int sum;
        void operator()(int n) { sum += n; }
    };
    
    Sum s = for_each(v.cbegin(), v.cend(), Sum{0});
    std::cout << "Somme: " << s.sum << '\n';


    return EXIT_SUCCESS;
}
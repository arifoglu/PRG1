#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;

bool est_pair(int e) { 
    return e % 2 == 0; 
}

template<typename T, T n = 2>
bool est_multiple_generique(T e) { 
    return e % n == 0; 
}

struct est_multiple_foncteur{
    int n;
    bool operator() (int e) const { return e % n == 0; }
};

int main () {
    //count if
    vector<int> v{1,2,3,4,5,6,7};
    int n = 2;
    cout << count_if(v.begin(),v.end(),est_pair) << endl;
    cout << count_if(v.begin(),v.end(),est_multiple_generique<int,2>)<<endl;
    cout << count_if(v.begin(),v.end(),est_multiple_foncteur{n})<<endl;


    return EXIT_SUCCESS;
}
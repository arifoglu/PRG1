#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>

using namespace std;


int main () {
    vector<int> v{10,20,30};

    // iterator normal
    vector<int>::iterator it = v.begin();
    *it = 15;
    for(int e : v){cout << e ;}
    
    cout << endl;

    // const iterator
    vector<int>::const_iterator cit = v.begin();
    cout << *cit << endl;
    //*cit = 25 ;  // error

    const vector<int> cv{40,50,60};
    vector<int>::const_iterator cv_it = cv.begin();
    cout << *cv_it << endl;    

    return EXIT_SUCCESS;
}
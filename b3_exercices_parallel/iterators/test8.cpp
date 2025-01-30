#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;

int main () {
    //count
    vector<int> v{1,2,3,2,1,2,3,3,2};
    cout << count(v.begin(),v.end(),2) << endl;         // 4
    cout << count(v.cbegin() + 3,v.cend(),3)<<endl;     // 2
    cout << count(v.crbegin() + 1,v.crend(),2)<<endl;   //3

    return EXIT_SUCCESS;
}
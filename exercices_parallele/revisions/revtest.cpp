#include <iostream>
#include <iomanip>
using namespace std;

void afficher(string const& str){
    for(size_t i = 0; i < str.size();++i){
        cout << string(i, ' ') << str.substr(0,str.size() - i )<<endl;
    }
}

int main() {
    afficher("hello");

    return 0;
}




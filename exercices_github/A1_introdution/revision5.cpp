#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string milieu(string str);

int main() {

    string input ;
    cout << "Entrez un mot : ";
    cin >> input ;
    cout << milieu(input) << endl;

    return EXIT_SUCCESS;
}
string milieu(string str){
    if(str.length() < 2){
        return str;
    }
    int position_median = str.length() / 2;
    string milieu; 

    if(str.length() % 2 == 0)
    {
        milieu = str.substr(position_median - 1 , 2);
    }
    else
    {
        milieu = str.substr(position_median,1);
    }
    return milieu;
}

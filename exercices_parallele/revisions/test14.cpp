#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

size_t compter(const string & str,const string & sub){
    size_t count = 0;
    size_t pos = 0;
    while((pos = str.find(sub,pos)) != string::npos ){
        ++count;
        ++pos;
    } 

    return count;
}

int main() {
    string text;
    cout << "Entrez une text :";
    getline(cin,text);
    string mot;
    cout << "Entrez un mot : ";
    cin >> mot;

    int nbr_occurence = compter(text,mot);

    return EXIT_SUCCESS;
}


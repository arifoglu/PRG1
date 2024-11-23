#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void afficher_en_triangle(string str){
    for(size_t i = 0; i < str.size();++i){
        cout << string(i ,' ') << str.substr(0, str.size() - i) << endl;
    }
}

int main() { 
   afficher_en_triangle("hello");
}
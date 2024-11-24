#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fichier("log.txt",ios::out);
    auto backup = cout.rdbuf();

    cout.rdbuf(fichier.rdbuf());
    cout << "hallo";

    cout.rdbuf(backup);
    cout << "hello";

    fichier.close();

}
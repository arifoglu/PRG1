#include <iostream>
#include <string.h>
using namespace std;

//I
template <typename T> T minimum(T a, T b){
    return a < b ? a : b;
}
//II
char* minimum(char* a, char* b) { //Version spécialisée pour char*
if (strcmp(a, b) < 0) return a; // Non équivalente à const char*
 return b;
 }

int main() {
    int n = 40, p = 12;
    char* texte1 = "monsieur", *texte2 = "bonjour";// !! Non ISO
    const char* t1 = "monsieur", *t2 = "bonjour";
    cout << "min(n,p) : " << minimum(n,p) << endl; // I 
    //cout << "min(texte1,texte2) = " << minimum(texte1,texte2)<<endl;
    cout << "min(t1, t2) = " << minimum(t1, t2) << endl;// Instancie const char* minimum
    cout << "min<>(texte1, texte2) = " << minimum<>(texte1, texte2) << endl;
    return 0;
}


#include <iostream>
using namespace std;

class Mot{
    private:
        string str;
        int num;
    public:
        Mot(const string s,int n = 0) : str(s), num(n) {}


        friend ostream& operator<<(ostream& os, const Mot& m){
            os << m.str << " " << m.num ;
            return os;
        }

        Mot operator++(int){
            Mot temp = *this;
            ++num;
            return temp;
        }
};


int main() {
    Mot mots[] = {{"mot",2},{"mots",5},{"Mot"}};
    mots[1]++;
    for(Mot mot : mots) 
    cout << mot << endl;

    return 0;
}
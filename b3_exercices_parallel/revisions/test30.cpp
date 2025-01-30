#include <iostream>
using namespace std;


class Mot{
    private:
        string s;
        int num;
    public:
        Mot(const string str ,int n = 0) : s(str) , num(n){}
        friend ostream& operator<<(ostream& os,const Mot & m){
            os << m.s << " " << m.num << endl;
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
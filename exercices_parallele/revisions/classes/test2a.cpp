#include <iostream>
using namespace std;

class C {
    public:
        C()                         {cout << "D";}
        C(int)                      {cout << "I";}
        C(C const & c)              {cout << "C";}    
        C& operator=(C const & c)   {cout << "A"; return *this;}
        ~C()                        {cout << "X";}    
                        
};

int main() {

    //  std::array<C,3> a;
    //  a[0] = a[1];
    //  cout << " / " ;

    //  C c(1);
    //  std::vector<C> v;
    //  v.reserve(2);
    //  v.push_back(c);
    //  cout << " / " ;
    
    //C c(1);
    //{
    //    C d(c);
    //    c = d;
    //}
    //cout << " / " ;
    
    //C c;
    //c = C(5);
    //cout << " / " ;

    //for(int i = 0; i < 3; ++i){
    //    C c(i);
    //}
    //cout << " / ";
    
    return 0;
}

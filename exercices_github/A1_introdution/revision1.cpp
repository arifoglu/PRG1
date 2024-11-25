#include <iostream>
#include <bitset>  
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    ///1)
    //int n = 13;
    //cout << oct << n <<endl;
    //cout << hex << n <<endl;
    //cout << bitset<4>(n)<<endl;
    
    ///2)
    //cout << sizeof(char)<<endl;
    //cout << sizeof(short) <<endl;
    //cout << sizeof(int)<<endl;
    //cout << sizeof(long)<<endl;
    //cout << sizeof(long long)<<endl;

    ///3)
    //cout << numeric_limits<int>::lowest() <<endl;  // -2147483648
    //cout << numeric_limits<int>::max()    <<endl;  // 2147483648
    //cout << numeric_limits<int>::digits <<endl;   // 31

    ///4)
    //int a = 2000000000;
    //int b = 1000000000;
    //int c = a + b;
    //cout << a << " + " << b << " = " << c << endl;

    //5)
    //int x = numeric_limits<int>::max();
    //int y = numeric_limits<int>::lowest();
    //cout << boolalpha << ( x < x + 1) << endl; false
    //cout << boolalpha << ( y == x + 1) << endl; true

    //6)
    //bool overflow(int lhs, int rhs){
    //    retur (lhs >= 0) ? numeric_limits<int>::max() - lhs < rhs :
    //                    rhs < numeric_limits<int>lowest() - lhs;
    //}

    //7)
    //unsigned zero = 0;
    //cout << zero - 1 << endl;
    //cout << numeric_limits<unsigned>::max()<< endl;
    //cout << numeric_limits<unsigned>::max() + 1<< endl;
    
    //8)
    //cout << 42 << " " << -42 <<endl;
    //cout << showpos;
    //cout << 42 << " " << -42 <<endl;
    //cout << noshowpos;
    //cout << 42 << " " << -42 << endl;
    //cout << hex << showbase << 42 << " " << endl;

    //9)
    //double pi = 3.1415926535897932384626433832795;;
    //double one_billion = 1e18;
    ////cout << fixed << pi << endl; 
    ////cout << one_billion << endl; 
    //cout << setprecision(15)<<pi<<" " << one_billion<<endl;

    //10
    //float pi10 = 31.415926;
    //cout << cout.precision()   << endl           // 6
    //     << scientific << pi10 <<endl           // 3.141593e01
    //     << fixed << pi10 << endl              // 3.1415926
    //     << defaultfloat  << pi10 << endl      // 
    //   << setprecision(4) << pi10 <<endl;   

    //11
    //int a = -12345;
    //int wcol = 10; 
    //cout << "0123456789" << endl;
    //cout << a << endl;
    //cout << setw(wcol) << a << endl;
    //cout << left << setw(wcol) << a <<endl;
    //cout << right << setw(wcol) << a <<endl;
    //cout << internal << setw(wcol) << a <<endl;
    //cout << setw(wcol) << a <<endl;
    //cout << a <<endl;
    //cout << setfill('*') << setw(wcol) << a << endl;
    //cout << setw(wcol) << a << endl;

    //12
    //int num = -15;
    //std::cout << std::setfill(':') << std::setw(5) << std::left << num << "*\n";
    //std::cout << std::setfill(':') << std::setw(5) << std::right << num << "*\n";
    //std::cout << std::setfill(':') << std::setw(5) << std::internal << num << "*\n";
    //std::cout << std::setfill(':') << std::setw(5) << std::boolalpha << std::left << (num < 0) << "*\n";
    //std::cout << std::setfill(':') << std::setw(5) << std::boolalpha << std::left << (num > 0) << "*\n";
    //std::cout << std::setfill(':') << std::setw(5) << std::noboolalpha << std::left << (num < 0) << "*\n";
    
    //13
    //int num = -3;
    //std::cout << std::setw(5) << std::setfill('*') << num << "\n";
    //int num = 12345;
    //std::cout << std::setw(10) << std::setfill('0') << num << "\n";

    //int num = 5;
    //std::cout << std::setw(5) << std::setfill('#') << std::right << num << "\n";

    //double num = 3.14159;
    //std::cout << std::setw(10) << std::setfill(' ') << std::fixed << std::setprecision(3) << num << "\n";

    //int num = -5;
    //std::cout << std::setw(6) << std::setfill('=') << std::left << num << "\n";

    //bool flag = true;
    //std::cout << std::setw(10) << std::setfill(' ') << std::boolalpha << flag << "\n";

    //int num = -999;
    //std::cout << std::setw(8) << std::setfill(' ') << std::internal << num << "\n";

    //double pi = 3.14159265358979323846;
    //std::cout << std::setw(10) << std::setfill('0') << std::fixed << std::setprecision(2) << pi << "\n";

    //unsigned int num = 5;
    //std::cout << std::setw(6) << std::setfill('-') << std::right << num << "\n";

    //int num = 12345;
    //std::cout << std::setw(8) << std::setfill('*') << std::left << num << "\n";

    //int num = -42;
    //std::cout << std::setw(8) << std::setfill('=') << std::right << num << "\n";

    return 0;
}

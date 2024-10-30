#include <iomanip>
#include <iostream>
#include <cstdlib>


int main(){
    int num = -15;

    // 1 =>-15::* 
    //std::cout << std::setfill(':') << std::setw(5) << std::left << num << "*\n";
     
    
    // 2 =>::-15*
    //std::cout << std::setfill(':') << std::setw(5) << std::right << num << "*\n";
    
    //// 3 =>-::15*
    //std::cout << std::setfill(':') << std::setw(5) << std::internal << num << "*\n";

    ///////////////////// ???
    //// 4 =>true:*
    //std::cout << std::setfill(':') << std::setw(6) << std::boolalpha << std::left << (num < 0) << "*";
    
    //// 5 =>false*
    //std::cout << std::setfill(':') << std::setw(5) << std::boolalpha << std::left << (num > 0) << "*\n";
    //////////////////////

    //// 6 =>1::::*
    //std::cout << std::setfill(':') << std::setw(5) << std::noboolalpha << std::left << (num < 0) << "*\n";
    
    //// 7 =>0::::*
    //std::cout << std::setfill(':') << std::setw(5) << std::noboolalpha << std::left << (num > 0) << "*\n";
}
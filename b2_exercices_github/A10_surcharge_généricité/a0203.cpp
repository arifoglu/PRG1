#include <iostream>
#include <cstdlib>
using namespace std;

//1)
//ERROR incomplet
//template
//T somme(T a, T b) {
//    return (a + b);
//}
//2)
//template<typename T>
//T somme(T a, T b){
//    return (a + b);
//}
//3)
//template <typename T>
//T somme(T a, T b){
//    return (a + b) ;
//}
//4)
//template <typename T>
//T somme(T a, T b) {
//   return (a + b);
//}
//5)
//template<typename T1, typename T2>
//T1 somme(T1 a, T2 b){
//    return (a + (T1)b);
//}
//6)
//template <typename T1, typename T2>
//T1 somme(T1 a, T2 b){
//    return a + b;
//}
//template<typename T>
//T somme(T a, T b){
//    return (a + b + 1);
//}

int main() {
    //2)ERROR ne compile pas
   //int   a = 1;
   //float b = 2.5f;
   //cout << somme(a, b) << " / " << somme(a, b);
   //3)
   //int   a = 1;
   //float b = 2.5f;
   //cout << somme<int>(a, b) << " / " << somme<float>(a, b);
   //4) 
   //int  a = 1;
   //char d = 'd'; // d vaut 100
   //cout << somme<char>(d, a) << " / " << somme<int>(d, a);
   //5)
   //int   a = 1;
   //float b = 2.5f;
   //cout << somme(a, b) << " / " << somme(b, a); 
   //6)
   //int   a = 1;
   //float b = 2.5f;
   //cout << somme(a, a) << " / "
   //     << somme(b, a) << " / "
   //     << somme(a, b) << " / "
   //     << somme(b, b); 
   return EXIT_SUCCESS;
}
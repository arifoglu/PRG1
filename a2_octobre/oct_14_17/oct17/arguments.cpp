#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char* argv[]){
    // Eğer yeterli argüman verilmemişse, hata mesajı göster
    if (argc < 3) {
        cout << "Lütfen iki sayı girin." << endl;
        return EXIT_FAILURE; // Hata kodu ile çık
    }

    // argv[1] ve argv[2]'yi int'e çevirerek topla
    int num1 = atoi(argv[1]); // ilk sayıyı al
    int num2 = atoi(argv[2]); // ikinci sayıyı al
    int num3 = atoi(argv[3]); // ikinci sayıyı al
    int sum = num1 + num2 + num3; // toplama işlemi

    cout << "Toplam: " << sum << endl; // sonucu yazdır
    cout << "Toplam: " << argc << endl; // sonucu yazdır
    return EXIT_SUCCESS;
}

#include <iostream>
#include <string>
using namespace std;

class Adres{
    private:
        string sokak;
        int numara;
    public:
        Adres(string sokak,int numara) : sokak(sokak), numara(numara){}

        string getSokak() const{ return sokak;}
        int getNumara() const { return numara;}

        void setAdres(string yeniSokak,int yeniNumara){
            sokak = yeniSokak;
            numara = yeniNumara;
        }    
        void yazdir()const{
            cout << sokak << " " << numara;
        }
};

class Kisi{
    private:
        string isim;
        Adres adres;
    public:
        Kisi(string isim, Adres adres) : isim(isim), adres(adres){}

        string getIsim()const {return isim;}
        Adres getAdres()const {return adres;}  

        void setIsim(string yeniIsim){
            isim = yeniIsim;
        }  
        void setAdres(Adres yeniAdres){
            adres = yeniAdres;
        }
        void yazdir() const {
        cout << "İsim: " << isim << ", Adres: ";
        adres.yazdir();
    }
};

int main(){
    Adres adres("cicek",12);
    Kisi kisi("Ahmet",adres);

    kisi.yazdir();
    cout << endl;

    adres.setAdres("gul",34);
    kisi.setAdres(adres);

    return EXIT_SUCCESS;
}

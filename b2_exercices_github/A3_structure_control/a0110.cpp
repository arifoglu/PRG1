//L'université de Genève utilise le barème suivant pour convertir ses notes au quart de point entre 0 et 6 en notes ECTS entre F et A.
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    double note;
    cout << "Saisisez votre notre : ";
    cin  >> note;
    if(5.25 <= note && note <= 6.00 ){
        cout << note << "A\n";
    }else if(4.75 <= note && note <= 5.25){
        cout << note << "B\n";
    }else if(note == 4.50 && note <= 4.75){
        cout << note << "C\n";
    }else if(note == 4.25 && note <=4.50){
        cout << note << "D\n";
    }else if(note == 4.00 && note <= 4.25 ){
        cout << note << "E\n";
    }else if(0.00 <=note && note <=4.00){
        cout << note << "F";
    }else if(note > 6.00 || note < 0){
        cout << "des notes doit être entre 0-6\n ";
    }        

    return EXIT_SUCCESS;
}
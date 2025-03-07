/*
Écrire un programme qui trouve la plus grande et la plus petite valeur d’une succession denotes (nombres entiers entre 0 et 20) fournies en données, ainsi que le nombre de fois où cemaximum et ce minimum ont été attribués. On supposera que les notes, en nombre nonconnu à l’avance, seront terminées par une valeur négative. On s’astreindra à ne pas utiliserde « tableau ». L’exécution du programme pourra se présenter ainsi :
*/
#include <iostream>
using namespace std;

int main() {
    int n, min = 21, max = -1, count_max = 0,count_min = 0;

    while(cout << "donne une note : ", cin >> n, n >= 0){
        //maximale
        if(n == max){
            ++count_max;
        }
        if(n > max){
            max = n;
            count_max = 1;
        }

        //minimale
        if(n == min){
            ++count_min;
        }
        if(n < min){
            min = n;
            count_min = 1;
        }

    }
    if(max >= 0){
        cout << "note maximale : "<< max << " attribuée "<< count_max << " fois."<<endl;
        cout << "note minimale : "<< min << " attribuée "<< count_min << " fois."<<endl;
    }

    return 0;
}
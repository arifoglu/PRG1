/* abdulkadir arifoglu 14.10.2024 Laboratoire 11

- Le but est écrire une fonction prenant en paramètres les coordonnées nationales (exprimées en mètres) et retournant les coordonnées WGS84.
- Le système des coordonnées nationales MN03 place l’Institut des sciences exactes de l’Université de Berne aux coordonnées (600, 200) [km], la première coordonnée allant d’Ouest en Est, la seconde du Sud au Nord 
- Pour transformer les coordonnées nationales MN03 (x,y ) (mesurées en milliers de kilomètres à l’Est et au - Nord de l’Institut vers des coordonnées WGS84 (λ,ϕ) donnant la longitude Ouest et la latitude Nord, exprimées en degrés on peut utiliser les approximations suivantes
- λ = 7.4386372 + 13.13606x + 2.19856xy + 0.3628xy^2 − 0.121x^3
- ϕ = 46.9510811 + 8.9952y − 0.75272x^2 − 0.00702y^2 − 0.1242x^2y −0.0389y^3
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void transforme_coordonnesMN03_au_WGS84(double&,double&);
bool verifier_dans_laSuisse(double,double);

int main(){
    //Selon l’Institut des sciences exactes de l’Université de Berne(600, 200)[km] == (60000 ,20000)[m]
    // en EST  et Sud
    const double point_departX = 60000;
    const double point_departY = 20000;

    //Prendre des coordonnes d'utilisateurs
    double a, b;
    cout << "Saisissez deux paramatres en km (ex : 600 200)\n";
    cin  >> a >> b;

    // Vérifier si les parametres sont valid
    if( cin.fail() || a < 0 || b < 0){
        cout << "Donnez les valeurs valid!!! "<<endl;
        return 0;
    }

    // convertir les coordonnes
    double convert_a = point_departX - a;
    double convert_b = point_departY - b;

     // Vérifier si les coordonnées sont dans les limites de la Suisse
    if(!(verifier_dans_laSuisse(convert_a, convert_b))) 
    {
        cout << "Les coordonnées sont hors de la Suisse!" << endl;
        return 0;
    }

    // Pour transformer les coordonnées nationales MN03  
    transforme_coordonnesMN03_au_WGS84(convert_a,convert_b);

    cout << "Longitude : " << a << "° \n" << "Latitude : " << b << "° "<< endl;
    return 0;
}

void transforme_coordonnesMN03_au_WGS84(double &x,double &y){
    // 1 km = 1000 metre 
    const double metre_par_km = 1000.0;

    // convertir en metre
    double x_en_metre = x * metre_par_km; 
    double y_en_metre = y * metre_par_km;

    // selon la formul λ 
    double lambda = 7.4386372 + (13.13606 * x_en_metre) + (2.19856 * x_en_metre * y_en_metre) + (0.3628 * x_en_metre * (y_en_metre * y_en_metre)) - (0.121 * ( x_en_metre * x_en_metre * x_en_metre));

    // selon la formul ϕ
    double phi = 46.9510811 + (8.9952 * y_en_metre ) - (0.75272 * ( x_en_metre * x_en_metre)) - (0.00702 * ( y_en_metre * y_en_metre)) - (0.1242 * (x_en_metre * x_en_metre) * y_en_metre) - (0.0389 * (y_en_metre * y_en_metre * y_en_metre));
    
    // longtitude en degree
    x= lambda;
    // lattitude en degree
    y = phi;
    
}
bool verifier_dans_laSuisse(double x,double y){
    // Vérifier si les coordonnées se trouvent dans la Suisse
    // Ces valeurs doivent être entre 480.000m – 840.000 m et 60.000 – 310.000 m selon le système de coordonnées MN03 en Suisse. 
    // return (x >= 480000 && x <= 840000 && y >= 60000 && y <= 310000);
}

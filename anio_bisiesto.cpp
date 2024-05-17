#include <iostream>

using namespace std;

/*
    Algoritmo
    [*] Perdir al usuario que ingrese un año y guardaro en una variable.
    [*] Preguntar si el año es bisiesto o no.
    [*] Informarle al usuario si lo es o no lo es.
*/

int main(){

    int anio = 0;

    cout << "Ingresar anio: ";
    cin >> anio;

    if ( (anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0 ){
        cout << "El anio es bisiesto.";
    } else {
        cout << "El anio no es bisiesto";
    }


    return 0;
}

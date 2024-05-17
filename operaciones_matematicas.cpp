#include <iostream>

using namespace std;

/*
    Algoritmo

    [*] Variables para guardar los números que le pediremos al usuario.
    [*] Variables para cada una de las operaciones, que guarden la operación
        en el caso de la división, corroborar que ninguno de los numeros sea cero.
    [*] Devolver al usuario cada una de las operaciones.
    [*] En caso de que alguno de los numeros sea 0, le informamos al usuario. Si no, le mostramos el resultado de la division.
*/

int main(){

    float n1, n2;

    cout << "Ingresar numero 1: ";
    cin >> n1;

    cout << "Ingresar numero 2: ";
    cin >> n2;

    float multiplicacion = n1 * n2;
    float suma = n1 + n2;
    float resta = n1 - n2;

    float division = ( n1 == 0 || n1 == 0 ) ? 0 : (n1 / n2);

    cout << "La multiplicacion da: " << multiplicacion << endl;
    cout << "La suma da: " << suma << endl;
    cout << "La resta da: " << resta << endl;

    if(division == 0){
        cout << "Alguno de los numeros es igual a cero, entonces no se puede dividir.";
    } else {
        cout << "La division da: " << division;
    }

    cout << endl;

    return 0;
}

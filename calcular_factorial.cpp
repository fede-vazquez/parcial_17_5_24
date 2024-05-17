#include <iostream>

using namespace std;

/*
    Algoritmo
    [*] Pedirle al usuario un número y guardarlo en una variable.

    if anidados:
    [*] Preguntar si el número es igual a 0.
        si - Mostrar 1.
    [*] Preguntar si el número es negativo.
        si - Mostrar un mensaje de error.
    [*] En otro caso:
        [*] Creamos una variable para guardar el total del factorial que comience en 1.
        [*] Iteramos desde el 1 hasta el numero dado,
            multiplicando cada iteración por la variable acumuladora.
        [*] Mostramos al usuario el resultado factorial.
*/

int main(){

    int numero;

    cout << "Ingresar el numero: ";
    cin >> numero;

    if(numero == 0){
        cout << "El factorial es: 1";
    }else if(numero < 0){
        cout << "El numero ingresado es un numero negativo.";
    } else {
        unsigned long long factorial = 1;

        for (int i = 1; i <= numero; i++){
            factorial *= i;
        }

        cout << "El factorial de " << numero << " es: " << factorial;
    }

    return 0;
}

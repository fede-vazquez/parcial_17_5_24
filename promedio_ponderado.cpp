#include <iostream>
#include <iomanip>

using namespace std;

/*
    Algoritmo
    [*] Variables para guardar el porcentaje total de ponderaciones (debe ser 100 el total)
    [*] Variable para guardar el total de notas ponderadas (nota * ponderacion).
    [*] Pedir y guardar en una variable la cantidad de materias.

    En un for del 1 hasta el numero dado por el usuario:
        [*] Crear variables para el nombre, nota, y ponderación. Y pedirle al usuario que las inicie.
        [*] Calcular la nota ponderada (nota * ponderacion). Y sumarla a la variable fuera del for.
        [*] Sumar el porcentaje a la variable que esta fuera del for.

    Preguntar si el porcentaje total de ponderaciones es 100
        si -
        [*] Variable que guarde el calculo del promedio ponderado (total de notas ponderadas / cantidad total de ponderaciones)
        [*] Mostrar al usuario final el promedio ponderado. (utilizando iomanip para que solo se vean 2 decimales)

        no -
        [*] Informarle al usuario que el total de ponderaciones no es igual al 100%.
*/

int main(){

    float porcentajePonderacion = 0;
    float totalNotasPonderadas = 0;

    int materias = 0;

    cout << "Ingresa la cantidad de materias: ";
    cin >> materias;

    for(int i = 1; i <= materias; i++){
        float nota, ponderacion;
        string nombreMateria;

        cout << "Ingresar nombre de la materia nro " << i << ": ";
        cin >> nombreMateria;

        cout << "Ingresar la nota de la materia nro " << i << ": ";
        cin >> nota;

        cout << "Ingresar el porcentaje de ponderacion de la materia nro " << i << ": ";
        cin >> ponderacion;

        totalNotasPonderadas += (nota*ponderacion);
        porcentajePonderacion += ponderacion;
    }

    if(porcentajePonderacion == 100){
        float promedioPonderado = (totalNotasPonderadas / porcentajePonderacion);
        cout << "Su promedio ponderado es: " << fixed << setprecision(2) << promedioPonderado;
    } else {
        cout << "El porcentaje de ponderaciones no es igual a 100.";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main () {

    /*5. Implemente un programa que calcule el sueldo que recibirá un empleado 
    como bonificación por navidad, de acuerdo a: menos de 3 años de trabajo el 8%; 
    entre 4 y 9 años el 10%, entre 10 y 15 años el 12% y mayores a 16 años el 14 %.*/

    /*
    x = años de trabajo
    Las condiciones serán: si x < 4 => 8% (se puso x < 4 en vez de  x < 3 para no excluir al 3)
    si x >= 4 && x <= 9 => 10%
    si x >= 10 && x <= 15 => 12%
    si x >= 16 => 14%
    */

    float adeTrabajo = 0;
    float sueldoNormal = 0;
    float bonificacion = 0;
    float sueldoFinal = 0;

    cout << "Cual es el sueldo del empleado?: ";
    cin >> sueldoNormal;

    cout << "Cuantos anios lleva trabajando el empleado?: ";
    cin >> adeTrabajo;

    if (adeTrabajo >= 0 && sueldoNormal >= 0) {
    /* Con la condicional de la linea superior nos aseguramos de que el programa solo funcione si el usuario
    coloca numeros >= 0. De este modo evitamos el funcionamiento del programa con datos incoherentes */
    
        if (adeTrabajo < 4) {
            bonificacion = (8/100.f) * sueldoNormal;
            sueldoFinal = sueldoNormal + bonificacion;
            cout << "El empleado recibira una bonificacion de: " << bonificacion << endl;
            cout << "El sueldo total del empleado (sueldo normal + bonificacion por navidad) sera de: " << sueldoFinal << endl;
        } else if (adeTrabajo < 10) {
            bonificacion = (10/100.f) * sueldoNormal;
            sueldoFinal = sueldoNormal + bonificacion;
            cout << "El empleado recibira una bonificacion de: " << bonificacion << endl;
            cout << "El sueldo total del empleado (sueldo normal + bonificacion por navidad) sera de: " << sueldoFinal << endl;
        } else if (adeTrabajo < 16) {
            bonificacion = (12/100.f) * sueldoNormal;
            sueldoFinal = sueldoNormal + bonificacion;
            cout << "El empleado recibira una bonificacion de: " << bonificacion << endl;
            cout << "El sueldo total del empleado (sueldo normal + bonificacion por navidad) sera de: " << sueldoFinal << endl;
        } else if (adeTrabajo >= 16) {
            bonificacion = (14/100.f) * sueldoNormal;
            sueldoFinal = sueldoNormal + bonificacion;
            cout << "El empleado recibira una bonificacion de: " << bonificacion << endl;
            cout << "El sueldo total del empleado (sueldo normal + bonificacion por navidad) sera de: " << sueldoFinal << endl;
        }
    }

    return 0;
}

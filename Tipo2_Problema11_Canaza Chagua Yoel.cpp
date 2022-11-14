#include <iostream>

using namespace std;

int main () {

    /*11. Implementar un programa que realice la operación matemática solicitada. 
    (+,-,*,/). Utilizando if y switch.*/

    double suma = 0, resta = 0, multiplicacion = 0, division = 0;
    int opcion;
    int numeros[100];
    int cantOperandos;

    cout << "SELECCIONE LA OPERACION QUE DESEA REALIZAR:" << endl;
    cout << "1)SUMA \n2)RESTA \n3)MULTIPLICACION \n4)DIVISION" << endl;
    cout << "Para elegir una opcion escriba un numero del 1 al 4: ";
    cin >> opcion;

    if (opcion > 0 && opcion < 5 ) {
        cout << "Cuantos numeros quire utilizar?(hasta un maximo de 100): ";
        cin >>cantOperandos;
        cout << "Ingrese los operandos:" << endl;
        for (int i = 0; i < cantOperandos; i++) {
            cin >> numeros[i];
        }

        switch (opcion) {
            case 1:
                cout << "SUMA" << endl;
                suma = 0;
                for (int j = 0; j < cantOperandos; j++) {
                    suma += numeros[j];
                }
                cout << "La suma es: " << suma << endl;
                break;
            case 2:
                cout << "RESTA"<< endl;
                resta = numeros[0];
                for (int k = 1; k < cantOperandos; k++) {
                    resta -= numeros[k];
                }
                cout << "La resta es: " << resta << endl;
                break;
            case 3:
                cout << "MULTIPLICACION" << endl;
                multiplicacion = numeros[0];
                for (int m = 1; m < cantOperandos; m++) {
                    multiplicacion *= numeros[m];
                }
                cout << "El producto es: " << multiplicacion << endl;
                break;
            case 4:
                cout << "DIVISION" << endl;
                division = numeros[0];
                for (int n = 1; n < cantOperandos; n++) {
                    division /= numeros[n];
                }
                cout << "La division es: " << division << endl;
                break;
        }
    } else {
        cout << "Opcion no valida" << endl;
    }

    return 0;
}

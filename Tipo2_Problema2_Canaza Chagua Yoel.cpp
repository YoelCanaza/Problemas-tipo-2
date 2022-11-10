#include <iostream>

using namespace std;

int main () {

    /*2. Implemente un programa que determine 
    si un número cualesquiera es par o impar.*/

    int numero = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par" << endl;
    } else {
        cout << "El numero " << numero << " es impar" << endl;
    }
    return 0;
}
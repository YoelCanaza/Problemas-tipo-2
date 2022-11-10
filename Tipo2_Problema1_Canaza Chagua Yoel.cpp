#include <iostream>

using namespace std;

int main () {

    /*1. Implemente un programa que convierta centímetros en pulgadas o viceversa*/
    // 1 cm = 0.393701 pulgadas

    double centimetros = 0;
    double pulgadas = 0;
    char opcion;

    cout << "CONVERSOR CENTIMETROS-PULGADAS" << endl;
    cout << "a) De centimetros a pulgadas" << endl;
    cout << "b) De pulgadas a centimetros" << endl;
    cout << "Escriba \"a\" o \"b\" para elegir una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 'a':
            cout << "Centimetros: ";
            cin >> centimetros;
            pulgadas = centimetros * 0.393701;
            cout << "Pulgadas: " << pulgadas;
            break;
        case 'b':
            cout << "Pulgadas: ";
            cin >> pulgadas;
            centimetros = pulgadas / 0.393701;
            cout << "Centimetros: " << centimetros << endl;
            break;
        default:
            cout << "Opción no valida" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main () {

    /*13. Implementar un programa que calcule el monto a pagar en una playa de estacionamiento si cobran 
    S/. 2.00 por hora o fracción los días lunes, martes y miércoles, 
    S/. 3.00 los días jueves y viernes, 
    S/. 4.00 los días sábados y domingos. Se considera fracción de hora cuando haya pasado más de 5 minutos.*/

    int horas;
    int minutos;
    int montoTotal;
    int montoHora;
    int dia;

    cout << "MONTO A PAGAR EN UNA PLAYA DE ESTACIONAMIENTO" << endl;
    cout << "Que dia es?: " << endl;
    cout << "1) Lunes, Martes, Miercoles" << endl;
    cout << "2) Jueves, Viernes" << endl;
    cout << "3) Sabado, Domingo" << endl;
    cout << "escriba el numero 1, 2, o 3 para elegir una de las opciones mostradas: ";
    cin >> dia;

    if ( dia >= 1 && dia <= 3) {
        cout << "INGRESE LAS HORAS Y MINUTOS QUE ESTUVO EL COCHE EN LA PLAYA DE ESTACIONAMIENTO:" << endl;
        cout << "Horas: ";
        cin >> horas;
        cout << "Minutos: ";
        cin >> minutos;

        if  (horas >= 0 && minutos >= 0 && minutos < 60) {
            if (dia == 1) {
                if (minutos > 5) {
                    horas += 1;
                }
                montoHora = 2;
                montoTotal = montoHora * horas;
                cout << "Debe pagar S/. " << montoTotal << endl;
            } else if (dia == 2) {
                if (minutos > 5) {
                    horas += 1;
                }
                montoHora = 3;
                montoTotal = montoHora * horas;
                cout << "Debe pagar S/. " << montoTotal << endl;
            } else if (dia == 3) {
                if (minutos > 5) {
                    horas += 1;
                }
                montoHora = 4;
                montoTotal = montoHora * horas;
                cout << "Debe pagar S/. " << montoTotal << endl;
            }
        } else {
            cout << "ERROR: Datos incorrectos" << endl;
        }
    } else {
        cout << "ERROR: Opcion no valida" << endl;
    }
    
    return 0;
}
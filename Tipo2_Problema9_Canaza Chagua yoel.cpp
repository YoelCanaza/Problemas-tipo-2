#include <iostream>

using namespace std;

int main () {

    /*9. Implementar un programa que muestre un minuto después de la hora indicada 
    (horas, minutos y segundos).*/

    int horas, minutos, segundos;

    cout << "Introduzca la hora(formato de 24 horas)" << endl;
    cout << "Horas: ";
    cin >> horas;
    cout << "Minutos: ";
    cin >> minutos;
    cout << "Segundos: ";
    cin >> segundos;

    if (horas >=0 && horas < 24 && minutos >=0 && minutos < 60 && segundos >=0 && segundos < 60) {
        minutos += 1;
        if (minutos > 59) {
            minutos = 0;
            horas += 1;
            if (horas > 23) {
                horas = 0;
            }
        }
        cout << "La hora un minuto despues es: " << horas << ":" << minutos << ":" << segundos << endl;
    } else {
        cout << "ERROR: La hora ingresada es incorrecta" << endl;
    }
    return 0;
}
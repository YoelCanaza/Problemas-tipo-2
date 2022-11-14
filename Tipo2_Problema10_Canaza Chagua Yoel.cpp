#include <iostream>

using namespace std;

int main () {

    /*10. Implementar un programa que calcule el puntaje que obtendrá un alumno 
    en un examen de “n” preguntas, si cada respuesta correcta vale 10 puntos, 
    respuesta incorrecta -1 punto y en blanco 2 puntos.*/

    int numPreguntas;
    int correcto = 10;
    int incorrecto = -1;
    int enblanco = 2;

    int contCorrecto, contIncorrecto, contEnblanco;

    int puntaje = 0;

    cout << "Cuantas preguntas tiene el examen?: ";
    cin >> numPreguntas;

    cout << "Cuantas preguntas respondio bien?: ";
    cin >> contCorrecto;

    cout << "Cuantas preguntas respondio mal?: ";
    cin >> contIncorrecto;

    cout << "Cuantas preguntas dejo sin responder?: ";
    cin >> contEnblanco;

    if ((contCorrecto + contEnblanco + contIncorrecto == numPreguntas) && numPreguntas >= 0 && contCorrecto >= 0 && contEnblanco >= 0 && contIncorrecto >= 0) {
        puntaje = (contCorrecto * correcto) + (contIncorrecto * incorrecto) + (contEnblanco * enblanco);
        cout << "El puntaje del alumno es: " << puntaje << endl;
    } else {
        cout << "Los datos ingresados son erroneos, vuelva a introducirlos" << endl;
    }

    

    return 0;
}
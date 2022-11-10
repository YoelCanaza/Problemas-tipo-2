#include <iostream>

using namespace std;

int main () {

    /*7. Implementar un programa que halle al estudiante de mayor edad 
    y el de menor edad que hay en un salón de clases.*/

    int numAlumnos = 0;
    int mayor = 0;
    int menor = 0;
    int indice1 = 0, indice2 = 0, contMenores = 0, contMayores =0;

    int edades[100], menores[100], mayores[100];

    cout << "Cuantos alumnos hay en el salon de clases? (ingrese hasta un maximo de 100): ";
    cin >> numAlumnos;

    for (int i = 0; i < numAlumnos; i++) {
        cout << "Ingrese la edad del alumno " << i  + 1 << " : ";
        cin >> edades[i];     
    }

    menor = edades[0];
    mayor = edades[0];

    for (int j = 0; j < numAlumnos; j++) {
        if (edades[j] < menor) {
            menor = edades[j];
        }
    }

    for (int k = 0; k < numAlumnos; k++) {
        if (edades[k] > mayor) {
            mayor = edades[k];
        }
    }

    // Ahora que ya conocemos cuál es la mayor y menor edad, debemos averiguar a quienes corresponden estas edades
    for (int m = 0; m < numAlumnos; m++) {
        if ( menor == edades[m]) {
            menores[indice1] = m + 1;
            indice1++;
            contMenores++;
        }
    }

    for (int n = 0; n < numAlumnos; n++) {
        if (mayor == edades[n]) {
            mayores[indice2] = n + 1;
            indice2++;
            contMayores++;
        }
    }

    cout << "La mayor edad es: " << mayor << " anios" << endl;
    cout << "El(los) estudiantes que tienen esa edad son los que ocupan el numero de orden:" << endl;
    for (int p = 0; p < contMayores; p++) {
        cout << mayores[p] << "." << endl;
    }

    cout << "La menor edad es: " << menor << " anios" << endl;
    cout << "El(los) estudiantes que tienen esa edad son los que ocupan el numero de orden:" << endl;
    for (int q = 0; q < contMenores; q++) {
        cout << menores[q] << "." << endl;
    }
    
    return 0;
}
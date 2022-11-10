#include <iostream>

using namespace std;

int main () {

    /*3. Implementar un programa que halle el mayor, el menor 
    y la diferencia de edades de dos hermanos*/

    int hermano1;
    int hermano2;
    int difEdades;

    cout << "Ingrese la edad del hermano 1: ";
    cin >> hermano1;

    cout << "Ingrese la edad del hermano 2: ";
    cin >> hermano2;

    if (hermano1 > hermano2) {
        difEdades = hermano1 - hermano2;
        cout << "El hermano mayor es el hermano 1 con " << hermano1 << endl;
        cout << "Ademas, es mayor por " << difEdades << endl;
    } else if (hermano1 < hermano2) {
        difEdades = hermano2 - hermano1;
        cout << "El hermano mayor es el hermano 2 con " << hermano2 << endl;
        cout << "Ademas, es mayor por " << difEdades << endl;
    } else {
        cout << "Ambos hermanos tienen la misma edad" << endl;
    }

    
    return 0;
}
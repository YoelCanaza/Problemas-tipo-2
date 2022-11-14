#include <iostream>

using namespace std;

int main () {

    /*4. Implementar un programa que halle 
    el mayor, medio y menor de tres números.*/

    int numA = 0;
    int numB = 0;
    int numC = 0;

    cout << "Ingrese el primer numero: ";
    cin >> numA;

    cout << "Ingrese el segundo numero: ";
    cin >> numB;

    cout << "Ingrese el tercer numero: ";
    cin >> numC;
    /*Para este ejercicio evitaremos usar los operadores lógicos || e &&*/
    /*Para saber de cuántas maneras se pueden ordenar de menor a mayor
    los numeros A, B, y C podemos usar la fórmula de las permutaciones
    que es n!, entonces 3!= 6. Entonces sabemos que se puede ordenar de 6 maneras diferentes
    las cuales son:
    1) a > b > c
    2) a > c > b
    3) b > a > c
    4) b > c > a
    5) c > a > b
    6) c > b > a
    Para resolver el problema debemos hacer que el programa sea capaz de detectar todas
    esas posibilidades.
    */

    //La primera condición if detectará las posibilidades 1, 2, 5. En las que a > b
    if (numA >= numB) {
        if (numA >= numC) {
            //si a > b, y a > c:
            cout << "El numero mayor es: " << numA << endl;
            // Si a es el número mayor, nos falta comprobar si c es menor o mayor que b
            if (numB >= numC) {
                // si c < b
                // SE CUMPLE LA POSIBILIDAD 1
                cout << "El numero medio es: " << numB << endl;
                cout << "El numero menor es: " << numC << endl; 
            } else {
                // si c > b
                // SE CUMPLE LA POSIBILIDAD 2
                cout << "El numero medio es: " << numC << endl;
                cout << "El numero menor es: " << numB << endl;
            }
        } else {
            // si a > b, y c > a:
            //SE CUMPLE LA POSIBILIDAD 5
            cout << "El numero mayor es: " << numC << endl;
            cout << "El numero medio es: " << numA << endl;
            cout << "El numero menor es: " << numB << endl;
           
        }
    //La siguiente condición detectará las posibilidades 3, 4, 6. En las que b > a
    } else if (numB >= numA) {
        if (numB >= numC) {
            //si a < b, y c < b:
            cout << "El numero mayor es: " << numB << endl;
            // Si b es el número mayor, nos falta comprobar si c es mayor o menor que a
            if (numA >= numC) {
                // si c < a
                // SE CUMPLE LA POSIBIILIDAD 3
                cout << "El numero medio es: " << numA << endl;
                cout << "El numero menor es: " << numC << endl; 
            } else {
                // si c > a
                // SE CUMPLE LA POSIBILIDAD 4
                cout << "El numero medio es: " << numC << endl;
                cout << "El numero menor es: " << numA << endl; 
            }
        } else {
            //si a < b, y c > b:
            // SE CUMPLE LA POSIBILIDAD 6
            cout << "El numero mayor es: " << numC << endl;
            cout << "El numero medio es: " << numB << endl;
            cout << "El numero menor es: " << numA << endl;
        }
    }

    return 0;
}

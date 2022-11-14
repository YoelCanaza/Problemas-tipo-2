#include <iostream>
#include <cmath>

using namespace std;

int main () {
     /* 6. Implemente un programa que calcule el área y el perímetro o la circunferencia de un 
     cuadrado, rectángulo, triángulo o círculo.*/
    
    float ladoA = 0;
    float ladoB = 0;
    float ladoC = 0;
    float radio = 0;
    const float pi = 3.14159265359;

    float area = 0;
    float perimetro = 0;
    float s = 0; // s = semiperimetro

    char opcion = ' ';

    cout << "EL AREA Y EL PERIMETRO O CIRCUNFERENCIA DE UN: " << endl;
    cout << "a) CUADRADO" << endl;
    cout << "b) RECTANGULO" << endl;
    cout << "c) TRIANGULO" << endl;
    cout << "d) CIRCULO" << endl;
    cout << "Escriba \"a\", \"b\", \"c\", o \"d\" para elegir una opcion: ";

    cin >> opcion;
    
    switch (opcion) {
        case 'a':
            cout << "EL AREA Y PERIMETRO DE UN CUADRADO:" << endl;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> ladoA;

            perimetro = ladoA * 4;
            area = ladoA * ladoA;

            cout << "El perimetro del cuadrado es: " << perimetro << " u" << endl;
            cout << "El area del cuadrado es: " << area << " u2" << endl;
            break;
        case 'b':
            cout << "EL AREA Y PERIMETRO DE UN RECTANGULO:" << endl;
            cout << "Ingrese la base del rectangulo: ";
            cin >> ladoA;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> ladoB;

            perimetro = (ladoA * 2) + (ladoB * 2);
            area = ladoA * ladoB;

            cout << "El perimetro del rectangulo es: " << perimetro << " u" << endl;
            cout << "El area del rectangulo es: " << area << " u2" << endl;
            break;
        case 'c':
            cout << "EL AREA Y PERIMETRO DE UN TRIANGULO:" << endl;
            cout << "Ingrese el primer lado del triangulo: ";
            cin >> ladoA;
            cout << "Ingrese el segundo lado del triangulo: ";
            cin >> ladoB;
            cout << "Ingrese el tercer lado del triangulo: ";
            cin >> ladoC;

            perimetro = ladoA + ladoB + ladoC;
            s = perimetro / 2;
            area = sqrt(s * (s-ladoA) * (s-ladoB) * (s-ladoC));

            cout << "El perimetro del triangulo es: " << perimetro << " u" << endl;
            cout << "El area del triangulo es: " << area << " u2" << endl;
            break;
        case 'd':
            cout << "EL AREA Y LA CIRCUNFERENCIA DE UN CIRCULO:" << endl;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;

            perimetro = 2 * pi * radio;
            
            area = pi * (radio * radio);

            cout << "La circunferencia del circulo es: " << perimetro << " u" << endl;
            cout << "El area del circulo es: " << area << " u2" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}

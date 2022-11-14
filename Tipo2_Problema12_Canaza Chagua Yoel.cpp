#include <iostream>

using namespace std;

int main() {

    /*12. Implementar un programa que calcule el monto mensual que recibirá una familia, 
    como subsidio de un programa social que ha implementado el gobierno, bajo las siguientes condiciones:
    a) Las familias que tienen hasta 2 hijos, reciben S/. 200.00, las que tienen de 3 a 5 reciben S/. 400.00 y las que tienen 6 o más reciben S/: 600 mensual.
    b) Por cada hijo en edad escolar reciben S/. 60.00 adicionales. Se considera la edad escolar entre 3 y 18 años.
    c) Si la madre de familia fuera viuda, la familia recibe S/. 60.00 adicionales.*/

    int hijos;
    int montoxHijos;
    int escolares;
    int montoxEscolares;
    int viuda;
    int montoxViuda;
    
    int mensualidad;
    
    cout << "Cuantos hijos tiene la familia?: ";
    cin >> hijos;
    cout << "Cuantos hijos estan en edad escolar(de 3 a 18 anios)?: ";
    cin >> escolares;
    cout << "La madres es viuda?, escriba el numero \"1\" para indicar que si y \"0\" para indicar que no: ";
    cin >> viuda;

    if (hijos >= 0 && escolares >= 0 && escolares <= hijos && (viuda == 1 || viuda == 0)) {
        if (hijos <=2) {
            montoxHijos = 200;
        } else if (hijos >= 3 && hijos <= 5) {
            montoxHijos = 400;
        } else if (hijos >= 6) {
            montoxHijos = 600;
        }

        montoxEscolares = escolares * 60;

        if ( viuda == 1) {
            montoxViuda = 60;
        } else {
            montoxViuda = 0;
        }

        mensualidad = montoxHijos + montoxEscolares + montoxViuda;

        cout << "El monto mensual que recibira familia es de S/. " << mensualidad << endl;
    } else {
        cout << "ERROR: Los datos ingresados son erroneos" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main () {

    /*8. Implementar un programa que cuente el número de vocales que hay en una palabra.*/

    string palabra = "";

    int letras = 0;
    int contVocales = 0;

    cout << "PROGRAMA PARA CONTAR LAS VOCALES DE UNA PALABRA O FRASE" << endl;
    cout << "Escriba una palabra o frase: ";
    getline (cin, palabra);

    letras = palabra.length();
    
    for (int i = 0; i < letras; i++) {
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i'|| palabra[i] == 'o' || palabra[i] == 'u') {
            contVocales += 1;
        }
    }

    cout << palabra << " tiene: " << contVocales << " vocales" << endl;

    return 0;
}

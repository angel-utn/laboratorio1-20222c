/**
Hacer un programa que permita ingresar 10 números y calcule el máximo valor
y su posición en la lista.

Aclaración: Suponer que solamente hay un máximo en la lista.
*/
#include <iostream>
using namespace std;

int main(){
    const int CANT=5;
    int i, posicion;
    float nro, maximo;

    for(i=1; i<=CANT; i++){
        cout << "Número :";
        cin >> nro;

        /// Calcular máximo y su posición
        if (nro > maximo || i == 1){
            maximo = nro;
            posicion = i;
        }
    }

    cout << endl << "El valor máximo fue: " << maximo << endl;
    cout << "Su posición fue    : " << posicion << endl;

    return 0;
}

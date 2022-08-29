/**
Hacer un programa que permita ingresar 10 números enteros y
luego de ingresarlos informe si los números fueron ingresados
en orden creciente o no.
*/
#include <iostream>
using namespace std;

int main(){
    const int CANT = 5;
    int i, nro, nroAnterior;
    int c=1;

    for (i=1; i<= CANT; i++){
        cout << "Número: ";
        cin >> nro;

        if (i > 1 && nro > nroAnterior){
            c++;
        }
        nroAnterior = nro;
    }

    cout << endl;
    if (c == CANT){
        cout << "Ordenados" << endl;
    }
    else{
        cout << "Desordenados" << endl;
    }



    return 0;
}

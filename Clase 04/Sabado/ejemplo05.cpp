/**
Hacer un programa que permita ingresar 10 números enteros y
calcular e informar el promedio de los números impares.
*/
#include <iostream>
using namespace std;

int main(){
    const int CANT=10;
    int i, nro;
    int sumaImpares=0, cImpares=0;
    float promedio;

    for(i=1; i<=CANT; i++){
        cout << "Número: ";
        cin >> nro;

        if (nro % 2 != 0){
            sumaImpares += nro;
            cImpares++;
        }

    }

    if (cImpares > 0){
        promedio = (float) sumaImpares / cImpares;
        cout << endl << "Promedio de impares: " << promedio;
    }
    else{
        cout << endl << "No hubo impares.";
    }

    return 0;
}

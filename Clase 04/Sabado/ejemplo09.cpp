/**
Hacer un programa que solicite al usuario un número N y luego
muestre los números primos que hay entre el 1 y N.
*/
#include <iostream>
using namespace std;

int main(){

    int fin, nro, cdiv, i;
    cout << "Ingresar el número hasta el cual desea buscar primos: ";
    cin >> fin;

    for(nro=1; nro<=fin; nro++){
        cdiv = 0;

        for(i=1; i<=nro; i++){

            if (nro % i == 0){
                cdiv++;
            }

        }

        if (cdiv == 2){
            cout << nro << " es primo" << endl;
        }

    }
    return 0;
}

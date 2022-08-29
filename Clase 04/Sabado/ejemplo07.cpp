/**
Hacer un programa que permita ingresar un número entero positivo y calcule e informe
si el número ingresado es primo o no.

5   1   D
    2
    3
    4
    5   D

El 5 es primo porque tiene dos D

*/

#include <iostream>
using namespace std;

int main(){

    int i, nro, cdiv = 0;

    cout << "Ingresar un número para determinar si es primo: ";
    cin >> nro;

    for(i=1; i<=nro; i++){
        if (nro % i == 0){
            cdiv++;
        }
    }

    cout << endl;
    if (cdiv == 2){
        cout << "Es primo";
    }
    else{
        cout << "No es primo";
    }

    return 0;
}

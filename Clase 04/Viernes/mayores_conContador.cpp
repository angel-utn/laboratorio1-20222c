/*
    Se ingresan 3 edades por teclado, se desea saber cuantos son mayores de edad.
*/

#include <iostream>
using namespace std;

int main(){
    int edad1, edad2, edad3;
    int cantidad=0;

    cout << "Ingrese edad 1: ";
    cin >> edad1;

    cout << "Ingrese edad 2: ";
    cin >> edad2;

    cout << "Ingrese edad 3: ";
    cin >> edad3;

    if(edad1 >= 18){
        cantidad ++; /// cantidad = cantidad + 1; /// cantidad += 1;
    }

    if(edad2 >= 18){
        cantidad ++;
    }

    if(edad3 >= 18){
        cantidad ++;
    }

    cout << "Cantidad mayores de edad: " << cantidad << endl;
}

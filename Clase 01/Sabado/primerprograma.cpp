/*
Hacer un programa que solicite por teclado dos números enteros al usuario
y luego calcule y muestre el resultado de la suma de ambos.
*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, resultado;

    cout << "Bienvenido/a a nuestro primer programa de Laboratorio I";
    cout << endl << endl;
    cout << "Ingresar el primer número: ";
    cin >> num1;
    cout << "Ingresar el segundo número: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << endl << "El resultado de la suma es: " << resultado;

    /*
    cout << endl;
    cout << "El resultado de la suma es: ";
    cout << resultado;
    */
    return 0;
}

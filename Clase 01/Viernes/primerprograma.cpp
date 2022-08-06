/*
Dados dos números enteros que se ingresan por teclado,
calcular e informar la suma de ambos.
*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, resultado;

    cout << "Bienvenido/a a el primer programa de Laboratorio I";
    cout << endl << endl;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << endl << "El resultado es: " << resultado;

    /*
    cout << endl;
    cout << "El resultado es: ";
    cout << resultado;
    */

    return 0;
}

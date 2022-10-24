/**
Hacer un programa que permita cargar números enteros y finalice cuando se ingresa un cero.
Luego, calcular e informar:
- El máximo de los números ingresados.
- El máximo de los números impares.
- La cantidad de pares.
- La cantidad de números negativos ingresados.

Nota: No tener en cuenta al 0 en los cálculos de los ejercicios.

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    /// A
    int maximo;

    /// B
    int maximoImpar = 0;

    /// C
    int cantidadPares = 0;

    /// D
    int cantidadNegativos = 0;

    cout << "Ingresar número: ";
    cin >> n;

    maximo = n;

    while(n != 0){

        if (n > maximo){
            maximo = n;
        }

        if (n % 2 != 0){
            if (maximoImpar == 0 || n > maximoImpar){
                maximoImpar = n;
            }
        }
        else{
            cantidadPares++;
        }

        if (n < 0){
            cantidadNegativos++;
        }

        cout << "Ingresar número: ";
        cin >> n; //0
    }

    cout << endl;
    cout << "Máximo valor: " << maximo << endl;

    if (maximoImpar != 0){
        cout << "Máximo impar: " << maximoImpar << endl;
    }

    cout << "Cantidad de pares: " << cantidadPares << endl;
    cout << "Cantidad de negativos: " << cantidadNegativos << endl;

    return 0;
}

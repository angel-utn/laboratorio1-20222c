/**
    Ingresar una lista de nros enteros que finaliza con un número negativo.
    Calcular e informar el promedio.

    Nota: No tener en cuenta el número que finaliza la lista para los cálculos.

    10, 20, 30, -5

    Promedio: 20

*/
#include <iostream>
using namespace std;

int main(){
    int suma = 0, cantidad = 0, n;
    float promedio;

    cin >> n;

    while(n >= 0){
        suma = suma + n;
        cantidad++;
        cin >> n;
    }

    if (cantidad > 0){
        promedio = (float) suma / cantidad;
        cout << "Promedio: " << promedio;
    }


    return 0;
}

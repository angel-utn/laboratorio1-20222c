/**
    Ingresar una lista de nros enteros que finaliza con un número negativo.
    Calcular e informar el promedio.

    10, 20, 30, -5

    Nota: Tener en cuenta el número que finaliza la lista para los cálculos.

    Promedio: 13.75

*/
#include <iostream>
using namespace std;

int main(){
    int suma = 0, cantidad = 0, n;
    float promedio;

    do{
        cin >> n;
        suma = suma + n;
        cantidad++;
    }while(n >= 0);

    promedio = (float) suma / cantidad;
    cout << "Promedio: " << promedio;


    return 0;
}

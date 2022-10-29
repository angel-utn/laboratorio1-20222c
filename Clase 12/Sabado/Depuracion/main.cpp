#include <iostream>
#include <ctime>
#include "funciones.h"
using namespace std;
/**
   hacer un programa que dado una lista de 10 numeros, mostrarla
   y luego muestre cuantos de ellos son primos 
*/
    
int main(){
    srand(time(0));
    int vNumeros[10], cantidad;
    /// pedir los 10 numeros
    cargarVector(vNumeros, 10);
    
    /// mostrar los 10 numeros
    // mostrarVector(vNumeros, 10);
    
    /// contar cuales son primos
    cantidad = contarPrimos(vNumeros, 10);
    
    /// mostrar la cantidad de primos
    cout << endl << "Cantidad: " << cantidad << endl;
    
    return 0;
}




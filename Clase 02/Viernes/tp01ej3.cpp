#include <iostream>
using namespace std;

int main()
{
    // Usamos constantes para evitar usar "numeros magicos" en las formulas
    const int SUELDO_FIJO = 15000;
    const int PREMIO = 2000;
    // declaramos las variables que vamos a usar
    int cantidad;
    int sueldoTotal;
    
    cout << "ingrese cantidad de autos vendidos: ";
    cin >> cantidad; // se utiliza para pedir un valor al usuario y guardarlo en la variable cantidad
    
    // realizamos el calculo del sueldo total y lo guardamos en la variable sueldoTotal
    sueldoTotal = SUELDO_FIJO + PREMIO * cantidad;
    
    // mostramos el resultado
    cout << "Sueldo total es: $" << sueldoTotal;
    
    return 0;
}
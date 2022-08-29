/*
    Se ingresan 3 edades por teclado, se desea saber cuantos son mayores de edad.
*/

#include <iostream>
using namespace std;

int main(){
    int edad1, edad2, edad3;

    cout << "Ingrese edad 1: ";
    cin >> edad1;

    cout << "Ingrese edad 2: ";
    cin >> edad2;

    cout << "Ingrese edad 3: ";
    cin >> edad3;

    
    // esto se puede hacer ya que el resultado de una comparacion es false (0) o true (1)
    // por lo tanto, si e1 es mayor o igual a 18, entonces (e1 >= 18) es true (1)
    // si sumo los true (1) me da la cantidad de mayores de edad

    cout << "Cantidad mayores de edad: " << (e1 >= 18) + (e2 >= 18) + (e3 >= 18) << endl;
}

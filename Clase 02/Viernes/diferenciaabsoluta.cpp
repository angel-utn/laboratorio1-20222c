/*
    hacer un programa donde se ingresen 2 numeros enteros 
    y muestre la diferencia absoluta entre ellos
*/
#include <iostream>
using namespace std;
int main(){
    // Declaramos las variables
    int num1, num2;
    int diferencia;
    
    // Pedimos los valores al usuario
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;

    // calculamos la diferencia y la guardamos en la variable diferencia
    diferencia = num1 - num2;

    // Haciendo uso del if verificamos si la diferencia es negativa, 
    // si es asi, la multiplicamos por -1 para cambiar el signo
    if(diferencia < 0){
        diferencia = diferencia * -1;
    }
    
    // Mostramos el resultado
    cout << "La diferencia absoluta es: " << diferencia;
    
    return 0;
}
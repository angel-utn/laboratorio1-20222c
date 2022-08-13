/*
    hacer un programa donde se ingresen 3 numeros enteros y muestre un cartel aclaratorio:
    "TODOS POSITICOS" si todos los numeros son positivos
    "ALGUNOS POSITICO" si alguno de los numeros es positivo
    "NINGUNO POSITIVO" si ninguno de los numeros es positivo
*/
#include <iostream>
using namespace std;
int main(){
    // Declaramos las variables
    int num1, num2, num3;

    // Pedimos los valores al usuario
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;
    cout << "ingrese el tercer numero: ";
    cin >> num3;

    // Haciendo uso del && verificamos si todos los numeros son positivos
    if(num1 > 0 && num2 > 0 && num3 > 0){
        cout << "TODOS POSITIVOS";
    }else {
        // Haciendo uso del || verificamos si alguno de los numeros es positivo
        if(num1 > 0 || num2 > 0 || num3 > 0){
            cout << "ALGUNOS POSITIVOS";
        }else{
            cout << "NINGUNO POSITIVO";
        }
    }
    return 0;
}
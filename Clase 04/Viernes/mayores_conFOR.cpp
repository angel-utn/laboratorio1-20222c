/*
    Se ingresan 3 edades por teclado, se desea saber cuantos son mayores de edad.
*/
#include <iostream>
using namespace std;

int main(){
    int edad;
    int cantidad = 0;
    int i;

    for(i=1; i<=5; i++){
        cout << "Ingrese edad: ";
        cin >> edad;
        if(edad >= 18){
            cantidad ++;
        }
    }

    cout << "Cantidad: " << cantidad << endl;
}

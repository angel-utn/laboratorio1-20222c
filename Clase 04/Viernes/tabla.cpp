/*
    Una profesora de primaria nos piden que desarrollemos
    un programa que le permita visualizar la tabla de multiplicacion
    de cualquier numero que se ingrese por teclado.
*/
#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Ingrese numero: ";
    cin >> n;
    cout << "-----------------------" << endl;
    for(int i=1; i<=10; i++){
        cout << n << " x " << i << " = " << (n*i) << endl;
    }
    return 0;
}

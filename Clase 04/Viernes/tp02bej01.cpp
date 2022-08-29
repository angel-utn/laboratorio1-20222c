#include <iostream>
using namespace std;

int main(){
    int cantidad;
    char tipo; /// C P G #
    bool urgente; /// true false

    float valorFinal, valorHora;

    cout << "Ingrese cantidad de horas: ";
    cin >> cantidad;

    cout << "Ingrese tipo: ";
    cin >> tipo;

    cout << "Ingrese urgente (1- SI, 0- NO): ";
    cin >> urgente;

    switch(tipo){
    case 'C':
    case 'c':
        valorHora = 2500;
        break;
    case '#':
        valorHora = 2100;
        break;
    case 'P':
    case 'p':
        valorHora = 1400;
        break;
    case 'G':
    case 'g': 
        valorHora = 2000;
        break;
    default:
        valorHora = 10000;
    }

    valorFinal = cantidad * valorHora;

    if(urgente){
        valorFinal = valorFinal * 2.2;
    }

    cout << "El valor final: " << valorFinal;
    return 0;
}

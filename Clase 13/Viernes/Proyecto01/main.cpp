#include <iostream>
#include "primos.h"
using namespace std;


int main()
{
    int n;

    cout << "Ingrese numero: ";
    cin >> n;

    if(esPrimo(n)){
        cout << "Es primo!" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }

    return 0;
}


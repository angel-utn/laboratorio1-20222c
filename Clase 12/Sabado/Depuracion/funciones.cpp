#include <iostream>
#include "funciones.h"
using namespace std;

void cargarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i] = rand() % 10 + 1;
    }
}

void mostrarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout<<endl<<vec[i];
    }
}

int contarPrimos(int vec[], int tam){
    
    int cant=0;
    /// recorrer vector
    for(int i=0; i<tam; i++){
        /// si es primo
        if(esPrimo(vec[i])){
            ///contamos
            cant++;
        }
    }
    /// devolvemos la cantidad
    return cant;
}

bool esPrimo(int numero){
    bool primo = false;
    int cd=0;

    for(int x=1; x<=numero; x++){
        if(numero%x == 0){
            cd++;
        }
    }
    
    if(cd==2){
        primo = true;
    }


    return primo;
}

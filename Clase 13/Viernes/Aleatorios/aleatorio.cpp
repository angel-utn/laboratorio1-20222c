#include <iostream>
#include "aleatorio.h"
using namespace std;

bool existe(int vec[], int tam, int valor){
    for(int i=0; i<tam; i++){
        if(vec[i] == valor){
            return true;
        }
    }
    return false;
}

int pedirSinRepetir(int vec[], int tam){
    int num;

    do{
        num = rand()%20 + 1;
    }while(existe(vec, tam, num));

    return num;
}

void cargarAleatorio(int vec[], int tam){
    for(int i=0; i<tam; i++){
        vec[i]=pedirSinRepetir(vec, i);
    }

}


void mostrarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout << vec[i] << endl;
    }

}

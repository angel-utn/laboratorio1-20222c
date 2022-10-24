#include <iostream>
using namespace std;

/// parametros por direccion no por referencia
void cargarVector(int vec[], int tam);

void mostrarVector(int vNumeros[], int tam);

int main(){
    int vNumeros[10]; // dimension estatica
    int vCargar[5];
    
    cargarVector(vNumeros, 10);
    cargarVector(vCargar, 5);
    
    mostrarVector(vNumeros, 10);
}

void cargarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cin >> vec[i];
    }
}

void mostrarVector(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout<<endl<<vec[i];
    }
}

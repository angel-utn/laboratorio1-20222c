#include <iostream>
#include <ctime>
using namespace std;
/**
   hacer un programa que dado una lista de 10 numeros, mostrarla
   y luego muestre cuantos de ellos son primos 
*/
void cargarVector(int vec[], int tam);
void mostrarVector(int vec[], int tam);
int contarPrimos(int vec[], int tam);
bool esPrimo(int numero);
    
int main(){
    srand(time(0));
    int vNumeros[10], cantidad;
    /// pedir los 10 numeros
    cargarVector(vNumeros, 10);
    
    /// mostrar los 10 numeros
    // mostrarVector(vNumeros, 10);
    
    /// contar cuales son primos
    cantidad = contarPrimos(vNumeros, 10);
    
    /// mostrar la cantidad de primos
    cout << endl << "Cantidad: " << cantidad << endl;
    
    return 0;
}


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


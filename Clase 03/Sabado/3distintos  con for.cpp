#include <iostream>
using namespace std;

int main(){
    const int CANTIDAD = 3;
    int cantPares = 0;
    int numero, i;
    
    for(i=1; i<=CANTIDAD; i++){
        cout << "Ingrese el #"<< i << " numero: ";
        cin >> numero;
        if(numero%2==0){
            cantPares++; // contar cuando es par
        }
    }
    
    if(cantPares == CANTIDAD){
        cout << "TODOS SON PARES"<<endl;
    }
    else{
        if(cantPares==0){
            cout << "NINGUNO ES PAR"<<endl;
        }
        else{
            cout << "HAY "<< cantPares << " PARES"<<endl;
        }
    }
    
    return 0;
}

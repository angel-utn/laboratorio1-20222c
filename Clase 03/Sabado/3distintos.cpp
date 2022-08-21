#include <iostream>
using namespace std;

int main(){
    int cantPares = 0;
    int numero;
    
	cout << "Ingrese el primer numero: ";
	cin >> numero;
	if(numero%2==0){
		cantPares++; // contar cuando es par
	}
	
	cout << "Ingrese el segundo numero: ";
	cin >> numero;
	if(numero%2==0){
		cantPares++; // contar cuando es par
	}

	cout << "Ingrese el tercer numero: ";
	cin >> numero;
	if(numero%2==0){
		cantPares++; // contar cuando es par
	}

    
    if(cantPares == 3){
        cout << "TODOS SON PARES"<<endl;
    }
    else{
        if(cantPares==0){
            cout << "NINGUNO ES PAR"<<endl;
        }
        else{
            cout << "HAY ALGUN PAR"<<endl;
        }
    }
    
    return 0;
}

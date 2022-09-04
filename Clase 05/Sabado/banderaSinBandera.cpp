/**
    Nos solicitan hacer un programa donde se ingrese una lista de una lista de 5 números 
    y nos piden mostrar el primer impar y el último par ingresado. 
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int impar = 0, par = 1;
    
    for(i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        
        if(n % 2 != 0){
            if(impar == 0){
                impar = n;
           }
        }
        else{
            par = n;
        }      
    }
    
    if(impar != 0){
        cout << "Primer impar es: " << impar << endl;
    }
    else{            
        cout << "No hay impares" << endl;
    }
    
    if(par != 1){
        cout << "El ultimo par es: "<< par << endl;
    }
    else{            
        cout << "No hay pares" << endl;
    }
    
    
    
    return 0;
}

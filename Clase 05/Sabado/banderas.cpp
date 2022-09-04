/**
    Nos solicitan hacer un programa donde se ingrese una lista de una lista de 5 números 
    y nos piden mostrar el primer impar y el último par ingresado. 
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int impar, par;
    bool hayImpar = false; /* true si hay un impar, false si no hay un impar */
    bool hayPar = false;
    
    for(i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        
        if(n % 2 != 0){
            if(hayImpar == false){
                impar = n;
                hayImpar = true;
           }
        }
        else{
            par = n;
            hayPar = true;
        }      
    }
    
    if(hayImpar){
        cout << "Primer impar es: " << impar << endl;
    }
    else{            
        cout << "No hay impares" << endl;
    }
    
    if(hayPar){
        cout << "El ultimo par es: "<< par << endl;
    }
    else{            
        cout << "No hay pares" << endl;
    }
    
    
    
    return 0;
}
/**
    Nos solicitan hacer un programa donde se ingrese una lista de una lista de 5 números 
    y nos piden mostrar el primer impar y el último par ingresado. 
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int impar, par;
    bool hayImpar = false; /* true si hay un impar, false si no hay un impar */
    bool hayPar = false;
    
    for(i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        
        if(n % 2 != 0){
            if(hayImpar == false){
                impar = n;
                hayImpar = true;
           }
        }
        else{
            par = n;
            hayPar = true;
        }      
    }
    
    if(hayImpar){
        cout << "Primer impar es: " << impar << endl;
    }
    else{            
        cout << "No hay impares" << endl;
    }
    
    if(hayPar){
        cout << "El ultimo par es: "<< par << endl;
    }
    else{            
        cout << "No hay pares" << endl;
    }
    
    
    
    return 0;
}

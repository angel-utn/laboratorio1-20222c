#include <iostream>
using namespace std;

// parametro por valor
void cambiar(int n);
 
// parametro por referencia
void cambiarRef(int &x);

// parametros por direccion
void cambiarDir(int *j);

void pasarVector(int vec[]); // parametros por direccion
void pasarMatriz(int vec[][10]);

int main(){
    int n;
    
    n = 20;
    
    cambiarDir(&n);
    
    cout << n << endl;   
    
    return 0;
}

void cambiar(int n){
    n = 15;
}

void cambiarRef(int &x){
    x = 15;
}

void cambiarDir(int *j){
    cout << j << endl;
}



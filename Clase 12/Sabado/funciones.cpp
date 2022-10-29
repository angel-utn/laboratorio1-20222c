#include <iostream>
using namespace std;

/// declarar la funcion
/// Pasando los parametros por valor
int sumar(int n1, int n2);
int sumar2(int n1, int n2);



/// 2 + 5 + 9
int main(){
    
    int r;
    
    r = sumar(4,2);
    
    cout << r << endl;
    
    cout << sumar(10, 5) + 10 << endl;
    cout << sumar(2, sumar(5,9)) << endl; // sumar(2, 14) => 16
    
    return 0;
}

/// implementacion de la funcion
int sumar(int n1, int n2){
    int resultado;
    
    resultado = n1 + n2;
    
    return resultado;
}

int sumar2(int n1, int n2){
    return n1 + n2;
}


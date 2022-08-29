#include <iostream>
using namespace std;

int main(){
    float valor = 1.1f; // 1.1f es un literal de tipo float

    // es importante el f al final ya que si no lo pongo, el compilador lo toma como double
    // y al asignarlo a un float, lo trunca y pierdo precision
    // por lo tanto si lo comparo con un literal de tipo double, no va a coincidir
    // ya que el literal de tipo double es mas preciso
    // 1.1 es distinto a 1.1f
    
    if(valor == 1.1f){
        cout << "Es igual" << endl;
    }
    else{
        cout << "No es igual" << endl;
    }
    return 0;
}

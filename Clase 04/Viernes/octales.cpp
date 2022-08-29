#include <iostream>
using namespace std;

int main(){
    // nunca comenzar un numero con 0 ya que es considerado un numero octal (base 8)
    int valor = 012; // le carga 012 en octal que en decimal es 10

    cout << valor << endl; // muestra el 10 y no el 12

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int numero = 7;
    
    {
        int numero;
        numero = 17;
        cout << "Numero: "<< numero << endl;
    }
    
    cout << "Numero: "<< numero << endl;
    
    return 0;
}

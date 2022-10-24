#include <iostream>
using namespace std;

int absoluto(int n1);

int main(){
    int numero;
    
    cout << "Ingrese numero: ";
    cin >> numero;
    
    cout << "El valor absoluto de "<< numero << " es: "<< absoluto(numero)<< endl;
    
       
    return 0;
}

int absoluto(int n1)
{
    int resultado;
    if(n1>0)
    {
        resultado=n1;
    }
    else
    {
        if(n1<0)
        {
            resultado=n1*-1;
        }
        else
        {
            resultado=0;
        }
    }
    return resultado;

}

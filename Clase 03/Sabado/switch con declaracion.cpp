#include <iostream>
using namespace std;

/*
    Se ingresa el monto y la fomra de pago de una venta 
    calcular e informar el valor a pagar dependiendo de:
    
    Si es EFECTIVO se hace un 10% de descuento
    Si es Credito se hace un 6% de aumento
    Si es Debito no se hace ningun descuento ni aumento
*/

int main(){
    int formaPago; // 1 - Efectivo, 2 - Credito, 3 - Debito
    float monto;
    
    cout << "Ingrese monto: ";
    cin >> monto;
    
    cout << "Ingrese Forma de Pago (1 - Efectivo, 2 - Credito, 3 - Debito)";
    cin >> formaPago;
    
    switch(formaPago){
    case 1:{
        float valorPagar;    
        valorPagar = monto * 0.9; // (100-10)/100
        cout << "Valor a pagar es "<< valorPagar << endl;
        break;
    }
    case 2: {
        float valorPagar;
        valorPagar = monto * 1.06; // (100+6)/100
        cout << "Valor a pagar es "<< valorPagar << endl;
        break;
    }
    case 3:
        cout << "Valor a pagar es "<< monto<< endl;
        break;
    }
    
    cout << valorPagar;
    
    
    
    return 0;
}

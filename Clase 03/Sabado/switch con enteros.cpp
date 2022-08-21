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
    float monto, valorPagar;
    
    cout << "Ingrese monto: ";
    cin >> monto;
    
    cout << "Ingrese Forma de Pago (1 - Efectivo, 2 - Credito, 3 - Debito)";
    cin >> formaPago;
    
    
    switch(formaPago){
    case 1: // case 1 != case '1'
        
        valorPagar = monto * 0.9; // (100-10)/100
        break;
    case 2:
        valorPagar = monto * 1.06; // (100+6)/100
        break;
    case 3:
        valorPagar = monto;
        break;
    }
    
    cout << "Valor a pagar es "<< valorPagar << endl;
    
    
    
    return 0;
}

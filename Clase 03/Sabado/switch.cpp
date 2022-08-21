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
    char formaPago; // 'E' - Efectivo, 'C' - Credito, 'D' - Debito
    float monto, valorPagar;
    
    cout << "Ingrese monto: ";
    cin >> monto;
    
    cout << "Ingrese Forma de Pago ('E' - Efectivo, 'C' - Credito, 'D' - Debito)";
    cin >> formaPago;
    
    switch(formaPago){
    case 'E':
        valorPagar = monto * 0.9; // (100-10)/100
        break;
    case 'C':
        valorPagar = monto * 1.06; // (100+6)/100
        break;
    case 'D':
        valorPagar = monto;
        break;
    }
    
    cout << "Valor a pagar es "<< valorPagar << endl;
    
    
    
    return 0;
}

/*
  Una pizzería posee la información de los pedidos recibidos el día de ayer en sus 5 sucursales. Por cada pedido se registró:
- Número de sucursal (entero)
- Número de pedido (entero)
- Número de tipo de pizza (1 a 35)
- Cantidad (entero)
- Envío ('S' - Sí, 'N' - No)
- Importe del pedido (real)

La información se encuentra agrupada por sucursal. Puede haber una cantidad diferente de pedidos por sucursal. Para indicar el fin de la carga de datos de una sucursal se ingresa un número de pedido igual a cero.

Aclaraciones:
- Todas las sucursales registraron al menos un pedido.
- Las pizzas cuyo número se encuentran entre el 1 y el 10 son vegetarianas.
- Todas las pizzas de un pedido son del mismo tipo.

Se pide calcular e informar:
A) Por cada sucursal, el total recaudado en el día.
B) La cantidad de sucursales que no hicieron ningún envío a domicilio.
C) El número de pedido en el que se hayan enviado más cantidad de pizzas a domicilio. Indicar también la sucursal.
D) El porcentaje pedidos de pizzas vegetarianas en relación a la cantidad total de pedidos.
*/
#include <iostream>
using namespace std;

int main(){
  int i;
  int sucursal, pedido, cantidad, tipo;
  char envio;
  float importe;

  // A
  float recaudacionSucursal;

  // B
  int cantidadSucursalesSinEnvio=0;
  bool huboEnvio;

  // C
  int maximoCantidad, maximoPedido, maximoSucursal;

  // D
  float porcentaje;
  int cantidadPedidosVegetarianos=0, cantidadPedidosTotales=0;

  maximoCantidad = maximoPedido = maximoSucursal = 0;

  for(i=1; i<=5; i++){
    cout << "Número de sucursal: ";
    cin >> sucursal;
    cout << "Número de pedido: ";
    cin >> pedido;

    recaudacionSucursal = 0;
    huboEnvio = false;

    while(pedido != 0){
        cout << "Tipo de pizza: ";
        cin >> tipo;
        cout << "Cantidad: ";
        cin >> cantidad;
        cout << "Envío (S/N): ";
        cin >> envio;
        cout << "Importe: $";
        cin >> importe;

        // A
        recaudacionSucursal += importe;
        // B
        // C
        if (envio == 'S'){
          huboEnvio=true;

           if (cantidad > maximoCantidad){
              maximoCantidad = cantidad;
              maximoPedido = pedido;
              maximoSucursal = sucursal;
           }
        }
        // D
        if (tipo >= 1 && tipo <= 10){
          cantidadPedidosVegetarianos++;
        }
        cantidadPedidosTotales++;

        cout << endl << "---------------------" << endl;
        cout << "Número de sucursal: ";
        cin >> sucursal;
        cout << "Número de pedido: ";
        cin >> pedido;
    }

    cout << endl << "PUNTO A" << endl;
    cout << "Recaudación $ " << recaudacionSucursal << endl;

    if (huboEnvio == false){
      cantidadSucursalesSinEnvio++;
    }

  }

  cout << endl << "PUNTO B" << endl;
    cout << "Cantidad sucursales sin envíos: " << cantidadSucursalesSinEnvio << endl;

    cout << endl << "PUNTO C" << endl;
    if (maximoCantidad > 0){
      cout << "Sucursal max " << maximoSucursal<< endl;
      cout << "Pedido max " << maximoPedido<< endl;
      cout << "Cantidad max " << maximoCantidad<< endl;
    }
    else{
      cout << "No hubo pedidos enviados" << endl;
    }

    cout << endl << "PUNTO D" << endl;
    porcentaje = cantidadPedidosVegetarianos*100/(float)cantidadPedidosTotales;
    cout << "Porcentaje vegetarianas: " << porcentaje << " %" << endl;

  cout << endl << "Fin del programa" << endl;


  return 0;
}

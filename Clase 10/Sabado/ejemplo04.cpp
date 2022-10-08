/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada
venta se registr� el n�mero de venta, la forma de pago (1 a 3: 1 Efectivo, 2 QR, 3 Tarjeta), el n�mero de
d�a y el importe de la venta. El fin de la carga de datos se indica con
n�mero de venta igual a 0.
Se pide calcular e informar:
A- Por cada d�a del mes, el total facturado.
B- Los d�as del mes que no tuvieron ventas.
C- Por cada forma de pago y d�a, la cantidad de ventas realizadas.

Variante:
A - Por cada d�a del mes, el total facturado. Mostrarlo como Jueves 1 $ xxxx, Viernes 2 $ xxxx
*/

#include <iostream>
using namespace std;

int main(){
   int nventa, fp, dia, i, j;
   float importe;

   /// Nombres de FP (C)
   string nombresFP[3] = {"Efectivo", "QR", "Tarjeta"};

   // A y B
   float vFacturacionDiaria[30] = {};

   /// C
   int mVentasRealizadas[3][30] = {};

   cout << "Nro de venta: ";
   cin >> nventa;

   while (nventa != 0){
      cout << "Dia: ";
      cin >> dia;
      cout << "Forma de pago: ";
      cin >> fp;
      cout << "Importe: $";
      cin >> importe;
      /// A y B
      vFacturacionDiaria[dia-1] += importe;
      /// C
      mVentasRealizadas[fp-1][dia-1]++;

      cout << "Nro de venta: ";
      cin >> nventa;
   }
   cout << endl << endl;
   cout << "A) Facturaci�n diaria: " << endl;
   for(i=0; i<30; i++){
      cout << "Dia " << i+1 << " $" << vFacturacionDiaria[i] << endl;
   }

   cout << endl << endl;
   cout << "B) D�as sin ventas: " << endl;
   for(i=0; i<30; i++){
      if(vFacturacionDiaria[i] == 0){
         cout << i+1 << " ";
      }
   }

   cout << endl << endl;
   cout << "C) Cantidad de ventas por forma de pago y dia " << endl;

   for(i=0; i<3; i++){ // Formas de pago
      cout << "Forma de pago: " << nombresFP[i] << endl;
      for(j=0; j<30; j++){ // D�as del mes
         cout << "Dia " << j+1 << " - Cantidad: " << mVentasRealizadas[i][j] << endl;
      }
      cout << endl;
   }


   return 0;
}

/**
Teniendo en cuenta la cotizaci�n del d�a de las siguientes monedas y criptomonedas.
Hacer un programa que permita ingresar un valor monetario y un car�cter que indique la moneda;
y luego determine cu�ntos pesos equivale dicho valor.

C�digo	Moneda		Cotizaci�n en pesos
B			Bitcoin     3292779.72
D			D�lar       134.54
E			Euro        138.08
R        Real        26.5
*/

#include <iostream>
using namespace std;

int main(){
   const float BITCOIN = 3292779.72;
   const float DOLAR = 134.54;
   const float EURO = 138.08;
   const float REAL = 26.5;

   char codigo_moneda;
   string nombre_moneda;
   float valor, valor_pesos;

   cout << "Ingresar codigo de moneda: ";
   cin >> codigo_moneda;
   cout << "Ingresar cantidad de " << codigo_moneda << ": ";
   cin >> valor;

   switch(codigo_moneda){
      case 'B':
      case 'b':
         valor_pesos = valor * BITCOIN;
         nombre_moneda = "BTC";
      break;
      case 'D':
      case 'd':
         valor_pesos = valor * DOLAR;
         nombre_moneda = "USD";
      break;
      case 'E':
      case 'e':
         valor_pesos = valor * EURO;
         nombre_moneda = "EUR";
      break;
      case 'R':
      case 'r':
         valor_pesos = valor * REAL;
         nombre_moneda = "BRL";
      break;
      default:
         cout << endl << "No existe ese codigo de moneda";
         return 0;
      break;
   }

   cout << valor << " " << nombre_moneda << " --> " << valor_pesos << " ARS" << endl;
   return 0;
}

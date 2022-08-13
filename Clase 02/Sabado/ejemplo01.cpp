#include <iostream>
using namespace std;

int main(){
   int n1 = 5, n2 = 2, parte_entera, resto;
   float parte_decimal, resultado;

   /*
      int   % int --> int (siempre es entre enteros)
      int   / int --> int
      float / int --> float
      int   / float --> float
      float / float --> float
   */

   resultado = (float) n1 / n2;
   resto = n1 % n2;
   parte_entera = resultado;
   parte_decimal = resultado - parte_entera;

   cout << endl << "Division: " << resultado << endl;
   cout << endl << "Parte entera:" << parte_entera << endl;
   cout << endl << "Parte decimal: " << parte_decimal << endl;
   cout << endl << "Resto: " << resto;

  /*
   5 / 2 --> 2.5

   2
   0.5
 */


   return 0;
}

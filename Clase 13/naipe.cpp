#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

void naipe(int codigo, int &numero, string &figura){
   /*
   - Los naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21
   al 30 y oro del 31 al 40.
   - Los naipes con número 8 y 9 no existen
   */

   if (codigo >= 1 && codigo <= 10){
      figura = "Espada";
      numero = codigo;
   }
   else if (codigo >= 11 && codigo <= 20){
      figura = "Basto";
      numero = codigo - 10;
   }
   else if (codigo >= 21 && codigo <= 30){
      figura = "Copa";
      numero = codigo - 20;
   }
   else if (codigo >= 31 && codigo <= 40){
      figura = "Oro";
      numero = codigo - 30;
   }

   if (numero >= 8){
      numero += 2;
   }

}


int main(){
   srand(time(NULL));
   int codigo, numero, i;
   string figura;

   for(i=1; i<=3; i++){
      codigo = rand()%40+1;
      naipe(codigo, numero, figura);
      cout << "Naipe: " << numero << " de " << figura << " -- (" << codigo << ")" << endl;
   }

   return 0;
}

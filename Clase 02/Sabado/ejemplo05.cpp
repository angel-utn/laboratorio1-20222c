/**
La temperatura normal del ser humano oscila entre 35� C y 37.5� C; en caso de no estar en ese rango
se pueda dar alguna de las siguientes situaciones:

Hipotermia	   : Menos de 35� C
Febr�cula 	   : Entre 37.5� C y 38� C
Fiebre	  	   : Hasta 39.5� C
Fiebre muy alta: M�s de 39.5� C

Hacer un programa que solicite la temperatura corporal de una persona y determina su estado.

*/
#include <iostream>
using namespace std;

int main(){
   float temperatura;
   cout << "Ingresar temperatura en grados C: ";
   cin >> temperatura;

   if (temperatura < 35){
      cout << "Hipotermia";
   }
   else{
      if (temperatura >= 37.5 && temperatura <= 38){
         cout << "Febricula";
      }
      else{
         if (temperatura > 38 && temperatura <= 39.5){
            cout << "Fiebre";
         }
         else{
            if (temperatura > 39.5){
               cout << "Fiebre muy alta";
            }
            else{
               cout << "Temperatura normal";
            }
         }
      }
   }


   return 0;
}

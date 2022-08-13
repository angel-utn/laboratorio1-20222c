/**
La temperatura normal del ser humano oscila entre 35� C y 37.5� C; en caso de no estar en ese rango
se pueda dar alguna de las siguientes situaciones:

A - Hipotermia	    : Menos de 35� C
B - Febr�cula 	    : Entre 37.5� C y 38� C
C - Fiebre	  	    : Hasta 39.5� C
D - Fiebre muy alta: M�s de 39.5� C
E - Temperatura normal

Hacer un programa que solicite la temperatura corporal de una persona y determina su estado.

*/
#include <iostream>
using namespace std;

int main(){
   float temperatura;
   char sintoma;


   cout << "Ingresar temperatura en grados C: ";
   cin >> temperatura;

   if (temperatura < 35){
      sintoma = 'A';
   }
   else{
      if (temperatura >= 37.5 && temperatura <= 38){
         sintoma = 'B';
      }
      else{
         if (temperatura > 38 && temperatura <= 39.5){
            sintoma = 'C';
         }
         else{
            if (temperatura > 39.5){
               sintoma = 'D';
            }
            else{
               sintoma = 'E';
            }
         }
      }
   }

   switch(sintoma){
      case 'A':
         cout << "Hipotermia";
      break;
      case 'B':
         cout << "Febricula";
      break;
      case 'C':
         cout << "Fiebre";
      break;
      case 'D':
         cout << "Fiebre muy alta";
      break;
      case 'E':
         cout << "Temperatura normal";
      break;


   }


   return 0;
}

/**
Hacer un programa que permita ingrear un número entero y determinar
con un mensaje si es positivo, negativo o cero.
*/
#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Ingresar un numero entero: ";
   cin >> n;

   if (n > 0){
      cout << "Es positivo";
   }
   else{
      if (n == 0){
         cout << "Es cero";
      }
      else{
         cout << "Es negativo";
      }
   }

   return 0;
}

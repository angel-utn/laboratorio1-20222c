/**
   Hacer un programa que permita ingresar un número entero y determinar con un mensaje si es positivo.
*/
#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Ingresar un numero entero: ";
   cin >> n;

   if (n > 0){
      cout << endl << "El numero es positivo";
   }

   return 0;
}

#include <iostream>
using namespace std;

int main(){
   int num, resto;

   cout << "Ingresar un nro entero para determinar si es par: ";
   cin >> num;

   resto = num % 2;

   if (resto == 0){
      cout << "Es par";
   }
   else{
      cout << "Es impar";
   }

   cout << endl << "Hasta luego";

   return 0;
}

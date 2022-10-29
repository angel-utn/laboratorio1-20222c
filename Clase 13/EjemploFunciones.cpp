#include <iostream>
using namespace std;

float producto(float n1, float n2);

float producto(float n1, float n2){
   float n3;
   n3 = n1 * n2;
   return n3;
}

void poner_cero_vector(int vec[], int tam){
   int i;
   for(i=0; i<tam; i++){
      vec[i] = 0;
   }

}

int sumar_vector(int vec[], int tam){
   int suma = 0, i;
   for(i=0; i<tam; i++){
      suma += vec[i];
   }
   return suma;
}

/// Ejemplo de pasaje de parámetro por valor
void funcion1(int var){
   cout << var << endl;
   var = 5;
   cout << var << endl;
}
/// Ejemplo de pasaje de parámetro por referencia
void funcion2(int &var){
   cout << var << endl;
   var = 5;
   cout << var << endl;
}

int main(){

   int n = 1000;
   int v[3] = {1, 2, 3};

   cout << sumar_vector(v, 3) << endl;
   poner_cero_vector(v, 3);
   cout << sumar_vector(v, 3);

   return 0;
}

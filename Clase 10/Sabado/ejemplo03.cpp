/*
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego
de cargar todas las notas:
- Listas cu�ntos estudiantes obtuvieron una nota mayor al promedio.
- Pedir un n�mero y mostrar por pantalla la nota registrada. Por ejemplo,
se ingresa 10 para mostrar el d�cimo examen.
- Obtener la mejor calificaci�n y cu�ntos estudiantes lograron dicha
calificaci�n
*/
#include <iostream>
using namespace std;

/// 10 7 4 2 3 6

int main(){
   const int T = 6;
   float notas[T], suma = 0, promedio;
   int i;
   int cantMayoresPromedio = 0;

   /// Cargar las T notas
   cout << "Cargar las notas: " << endl;
   for(i=0; i<T; i++){
      cin >> notas[i];
   }
   /// Calcular el promedio de las T notas
   for(i=0; i<T; i++){
      suma += notas[i];
   }
   promedio = suma / T;

   /// Comparar cada nota con el promedio y contar si corresponde
   cout << "Notas mayores al promedio:" << endl;
   for(i=0; i<T; i++){
      if (notas[i] > promedio){
         cout << notas[i] << " ";
         cantMayoresPromedio++;
      }
   }
   cout << endl << "Cantidad de notas mayores al promedio: " << cantMayoresPromedio << endl;
   return 0;
}

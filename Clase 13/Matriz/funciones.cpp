#include <iostream>
using namespace std;

#include "funciones.h"

// Definiciones

/// Carga una matriz de enteros de tres dimensiones
void cargar_matriz(int mat[][2][2], int tamFilas){

   int i, j, k;
   for(i=0; i<tamFilas; i++){
      for (j=0; j<2 ; j++ ){
         for(k=0; k<2; k++){
            cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "] :";
            cin >> mat[i][j][k];
         }
      }
   }

}
void mostrar_matriz(int mat[][2][2], int tamFilas){

   int i, j, k;
   for(i=0; i<tamFilas; i++){
      for (j=0; j<2 ; j++ ){
         for(k=0; k<2; k++){
            cout << "[" << i << "]" << "[" << j << "]" << "[" << k << "] :";
            cout << mat[i][j][k] << endl;
         }
      }
   }

}

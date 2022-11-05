#include <iostream>
using namespace std;

bool EsMatrizSimoniana(int matriz[][5]);
int sumarFila(int fila[]);
bool buscarValor(int matriz[][5], int valor);

int main() {
  int mat[5][5] = {
    { 1, 2, 3, 4, 5},
    { 5, 4,44,10,11},
    { 1, 1, 1, 1, 2},
    { 9, 8, 4, 2,-5},
    {10,10,10,10,10}
  };

  if (EsMatrizSimoniana(mat)) {
    cout << "Es una Matriz Simoniana" << endl;
  }
  else {
    cout << "No es una Matriz Simoniana" << endl;
  }

  return 0;
}

bool EsMatrizSimoniana(int matriz[][5]) {
  for (int f = 0; f < 5; f++) {
    int suma = sumarFila(matriz[f]);
    // cout << "Fila #" << f << ": " << suma << endl;
    if(buscarValor(matriz, suma)){
      return true;
    }
  }

  return false;
}

int sumarFila(int fila[]) {
  int suma = 0;

  for (int i = 0; i < 5; i++) {
    suma += fila[i];
  }

  return suma;
}

bool buscarValor(int matriz[][5], int valor) {

  for (int f = 0; f < 5; f++) {
    for (int c = 0; c < 5; c++) {
      if (matriz[f][c] == valor) {
        return true;
      }
    }
  }


  return false;
}
#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   const int A = 3;
   const int B = 2;
   const int C = 2;

   int m[A][B][C];

   cargar_matriz(m, A);
   cout << endl << endl;
   mostrar_matriz(m, A);

   return 0;
}

#include <iostream>
using namespace std;

int main()
{
   int continentesxpais[10] , i;
   int pais, continente;

   int industria;
   float toneladas, importeTn;

   // A
   float tnxindustria[6] = {};

   // B
   string nombresContinentes[4] = {"America", "Europa", "Asia", "Oceania"};
   float recxcontinente[4] = {};

   for(i=1; i<=10; i++){
      cout << "Pais: ";
      cin >> pais;
      cout << "Continente: ";
      cin >> continente;
      continentesxpais[pais-1] = continente;
   }

   cout << "Pais: ";
   cin >> pais;
   while(pais != 0){

      cout << "Industria: ";
      cin >> industria;
      cout << "Toneladas: ";
      cin >> toneladas;
      cout << "Importe por tonelada: ";
      cin >> importeTn;

      // A
      int posIndustria = (industria / 11) - 1;
      tnxindustria[posIndustria] += toneladas;

      // B
      int continente = continentesxpais[pais-1];
      recxcontinente[continente-1] += toneladas * importeTn;

      cout << "Pais: ";
      cin >> pais;
   }

   // A
   cout << "Punto A" << endl;
   for(i=0; i<6; i++){
      cout << "Industria: " << (i+1) * 11;
      cout << "Toneladas: " << tnxindustria[i] << endl << endl;
   }

   cout << endl << "Punto B" << endl;
   for(i=0; i<4; i++){
      cout << "Continente : " << nombresContinentes[i] << endl;
      cout << "Recaudación: $" << recxcontinente[i] << endl;
   }


   return 0;
}

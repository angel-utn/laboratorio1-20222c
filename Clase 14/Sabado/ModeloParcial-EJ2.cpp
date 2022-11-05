#include <iostream>
using namespace std;

int main() {
  int dia, artista, genero, minutos, canciones;

  // PUNTO A
  int paGenero, paMayor=-1; // valor absurdo

  //PUNTO B
  int pbCantidad[31]={};

  //PUNTO C
  int pcTemas[31] = {};

  cout << "Ingrese dia: ";
  cin >> dia;
  while (dia!=0) {

    cout << "Ingrese artista: ";
    cin >> artista;

    cout << "Ingrese genero: ";
    cin >> genero;

    cout << "Ingrese minutos del show: ";
    cin >> minutos;

    cout << "Ingrese cantidad de canciones: ";
    cin >> canciones;

    // PUNTO A
    if (dia == 3) {
      if (minutos > paMayor) {
        paMayor = minutos;
        paGenero = genero;
      }
    }

    // PUNTO B
    pbCantidad[artista - 100]++;

    //PUNTO C
    pcTemas[artista - 100] += canciones;
  

    cout << "Ingrese dia: ";
    cin >> dia;
  }

  // PUNTO A
  if (paMayor != -1) {
    cout << "Punto A: " << paGenero << endl;
  }
  else {
    cout << "Punto A: No se registraron artistas." << endl;
  }

  // PUNTO B
  int pbCantidadTotal = 0;
  for (int i = 0; i < 31; i++) {
    if (pbCantidad[i] == 3) {
      pbCantidadTotal++;
    }
  }

  cout << endl  << "Punto B: "<< pbCantidadTotal << endl;

  // PUNTO C
  cout << endl << "Punto C: " << endl;
  for (int i = 0; i < 31; i++) {
    if (pcTemas[i] > 15) {
      cout << i + 100 << endl;
    }
  }

  return 0;
}
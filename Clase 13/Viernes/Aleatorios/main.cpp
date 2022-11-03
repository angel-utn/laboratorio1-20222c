#include <iostream>
#include <ctime>
#include "aleatorio.h"
using namespace std;

int main()
{
    srand(time(0));
    int vNumeros[20];
    cargarAleatorio(vNumeros, 20);
    mostrarVector(vNumeros, 20);




    return 0;
}

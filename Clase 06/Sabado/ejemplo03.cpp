/**
Hacer un programa que solicite el nombre del equipo y los partidos jugados por un equipo de futbol.
Por cada partido disputado se debe ingresar:
- Cantidad de goles del equipo
- Cantidad de goles del rival

Para indicar el fin de la carga de datos se ingresa una cantidad de goles del equipo negativa.
Se pide calcular e informar:

- La cantidad de partidos ganados, perdidos y empatados el equipo.
- Los puntos obtenidos. Teniendo en cuenta que se obtienen 3 por ganar y 1 por empatar.
- La cantidad de goles marcados en total.
- La mayor racha de cantidad de partidos sin ganar.
*/
#include <iostream>
using namespace std;

int main(){
    string nombreEquipo;
    int golesEquipo, golesRival;

    int pg, pe, pp, puntos, golesAFavor=0, golesEnContra=0, diferencia, rachaSinGanar=0;
    int maximaRachaSinGanar=0;

    pg=pe=pp=puntos=0;

    cout << "Ingresar nombre del equipo: ";
    cin >> nombreEquipo;

    cout << "Goles de " << nombreEquipo << ": ";
    cin >> golesEquipo;

    while (golesEquipo >= 0){
        cout << "Goles del rival: ";
        cin >> golesRival;
        cout << endl;

        golesAFavor += golesEquipo;
        golesEnContra += golesRival;

        if (golesEquipo > golesRival){
            pg++;
            rachaSinGanar=0;
        }
        else{
            rachaSinGanar++;

            if (rachaSinGanar > maximaRachaSinGanar){
                maximaRachaSinGanar = rachaSinGanar;
            }

            if (golesEquipo < golesRival){
                pp++;
            }
            else{
                pe++;
            }

        }

        cout << "Goles de " << nombreEquipo << ": ";
        cin >> golesEquipo;
    }

    puntos = pg*3+pe;
    diferencia = golesAFavor - golesEnContra;

    cout << endl << endl << "Estadísticas de " << nombreEquipo << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "PG: " << pg << endl;
    cout << "PE: " << pe << endl;
    cout << "PP: " << pp << endl;
    cout << "GOLES A FAVOR   : " << golesAFavor << endl;
    cout << "GOLES EN CONTRA : " << golesEnContra << endl;
    cout << "DIFERENCIA GOLES: " << diferencia << endl;
    cout << "MAXIMA RACHA SG : " << maximaRachaSinGanar << endl;
    cout << "PUNTOS          : " << puntos << endl;

    return 0;
}

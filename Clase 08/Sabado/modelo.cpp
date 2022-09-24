#include <iostream>
using namespace std;

int main(){
    const int TURNOS = 3;
    int i, turno, legajo, tipo;
    float litros, importe;

    ///A
    float litrosTipo1 = 0, litrosTipo2 = 0, litrosTipo3 = 0;
    float totalLitros;

    ///B
    bool vendioTipo1, vendioTipo2, vendioTipo3;
    vendioTipo1=vendioTipo2=vendioTipo3=false;
    char tipo1 = '1', tipo2 = '2', tipo3 = '3';

    ///C
    float litrosPorTurno;
    int cantVentasTurno;

    ///D
    float recaudacionPorTurno, maxRecaudacion=0;
    int maxTurno;

    ///E
    int cantVentas15 = 0;

    for(i=1; i<=TURNOS; i++){
        cout << "Código de turno: ";
        cin >> turno;
        cout << "Legajo: ";
        cin >> legajo;

        ///C
        cantVentasTurno=0;
        litrosPorTurno=0;

        ///D
        recaudacionPorTurno=0;

        while(legajo != 0){
            cout << "Tipo de combustible: ";
            cin >> tipo;
            cout << "Litros: ";
            cin >> litros;
            cout << "Importe: $";
            cin >> importe;

            /// A y B
            switch(tipo){
                case 1:
                    /// B
                    if (turno == 3){
                        vendioTipo1 = true;
                        tipo1 = ' ';
                    }
                    /// A
                    litrosTipo1 += litros;

                break;
                case 2:
                    /// B
                    if (turno == 3){
                        vendioTipo2 = true;
                        tipo2 = ' ';
                    }
                    /// A
                    litrosTipo2 += litros;

                break;
                case 3:
                    ///B
                    if (turno == 3){
                        vendioTipo3 = true;
                        tipo3 = ' ';
                    }
                    /// A
                    litrosTipo3 += litros;

                break;
            }
            /// C
            cantVentasTurno++;
            litrosPorTurno+=litros;

            /// E
            if (litros <= 15){
                cantVentas15++;
            }

            /// D
            recaudacionPorTurno+=importe;

            cout << "---------------------" << endl;
            cout << "Legajo: ";
            cin >> legajo;
        }
        /// C
        if (cantVentasTurno > 0){
            float promedioTurno = litrosPorTurno/cantVentasTurno;
            cout << endl << "Punto C) Turno: " << turno << " Promedio: " << promedioTurno << endl;
        }

        /// D
        if (recaudacionPorTurno > maxRecaudacion){
            maxRecaudacion = recaudacionPorTurno;
            maxTurno = turno;
        }

    }
    cout << endl << endl << endl;
    totalLitros = litrosTipo1 + litrosTipo2 + litrosTipo3;

    cout << "Punto A) Porcentajes por tipo de combustible: " << endl;
    cout << "Tipo 1: " << litrosTipo1 / totalLitros * 100 << endl;
    cout << "Tipo 2: " << litrosTipo2 / totalLitros * 100 << endl;
    cout << "Tipo 3: " << litrosTipo3 / totalLitros * 100 << endl;
    cout << endl;

    cout << "Punto B) Tipo de combustibles no vendidos: ";
    if (vendioTipo1 == false){
        cout << "1 ";
    }
    if (vendioTipo2 == false){
        cout << "2 ";
    }
    if (vendioTipo3 == false){
        cout << "3 ";
    }
    cout << endl;
    cout << "Alt B) Tipo de combustibles no vendidos: " << tipo1 << " " << tipo2 << " " << tipo3;
    cout << endl;

    cout << "Punto E) La cantidad de ventas no mayores a 15 lts: " << cantVentas15 << endl;

    cout << "Punto D) Turno: " << maxTurno << " Recaudación máxima: $ " << maxRecaudacion << endl;

    return 0;
}

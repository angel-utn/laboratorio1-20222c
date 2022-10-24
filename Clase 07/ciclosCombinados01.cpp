#include<iostream>
using namespace std;

int main()
{
    int destino, mes, cantidad;
    float total;
    
    /// PUNTO A
    int cantidadPasajesTotales = 0;
    
    // PUNTO B
    float totalDestino;
    
    cout << "INICIO LOTE"<<endl;
    for(int g=1; g<=3; g++){
        cout << "INICIO GRUPO"<<endl;
        totalDestino = 0;
        for(int r=1; r<=5; r++){
            cout << "Ingrese Destino: ";
            cin >> destino;
            cout << "Ingrese Mes: ";
            cin >> mes;
            cout << "Ingrese Cantidad: ";
            cin >> cantidad;
            cout << "Ingrese total: ";
            cin >> total;
            
            cantidadPasajesTotales += cantidad;
            
            totalDestino += total;
            
        }
        cout << "FINALIZA GRUPO"<<endl;
        cout << "Total recaudado del destino es: " << totalDestino << endl;
    }
    cout << "FIN DEL LOTE" << endl;
    
    cout << "Cantidad de pasajes vendidos: " << cantidadPasajesTotales << endl;
    
    return 0;
}

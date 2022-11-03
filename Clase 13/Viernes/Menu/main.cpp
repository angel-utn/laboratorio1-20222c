#include <iostream>
#include "rlutil.h"
using namespace std;

int main()
{
    rlutil::setConsoleTitle("Mi sistemita");
    int opcion, n;
    do{
        rlutil::cls();
        cout << "1- Cargar "<<endl;
        cout << "2- Mostrar"<<endl;
        cout << "---------------------" << endl;
        cout << "0- Salir" << endl << endl;

        cout << "Opcion: ";


        cin >> opcion;
        switch(opcion){
        case 1:
            rlutil::setBackgroundColor(4);
            break;
        case 2:
            rlutil::setBackgroundColor(1);
            break;
        case 3:
            rlutil::setColor(11);
            break;
        case 4:
            rlutil::cls();
            rlutil::locate(10, 10);
            cout << "Ingrese Nombre:";
            cin >> n;

            break;
        case 0:
            rlutil::cls();

            for(int i=0; i<10; i++){
                rlutil::locate(20,10);
                if(i%2==0){
                    rlutil::setColor(15);
                }
                else{
                    rlutil::setColor(4);
                }


                cout << "Gracias por usar mi programa!";
                //rlutil::msleep(500);
                rlutil::anykey();
            }

        }



    }while(opcion != 0);

    return 0;
}

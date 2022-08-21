#include <iostream>
using namespace std;

int main(){
    // aca declaro las variables que voy a utilizar
    float monto;
    bool esUrgente; // true o false
    
    // pido los datos al usuario
    cout << "Es urgente? (1- Si, 0- No): ";
    cin >> esUrgente;
    
    cout <<"Ingrese monto: ";
    cin >> monto;
    
    // !  => NO 
    // && => Y
    // 
    
    // compruebo si no es urgente para hacer el descuento
    if(!esUrgente){
        monto = monto * 0.9; // si no es urgente, hacemos un 10% de descuento
    }
    /*
    if(esUrgente == false){
        monto = monto * 0.9;
    }
    
    if(esUrgente == 0){
        monto = monto * 0.9;
    }
    */
    
    cout << "El monto a cobrar es: "<< monto << endl;
    /*
    if(esUrgente){
        cout << "Es Urgente!"<<endl;
    }
    else{
        cout << "No es urgente..."<<endl;
    }
    */
    
    return 0;
}

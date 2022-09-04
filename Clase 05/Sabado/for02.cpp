#include <iostream>
using namespace std;

int main(){
    int n1, n2, i;
    int desde, hasta;
    
    cout << "Ingrese numero: ";
    cin >> n1;
    
    cout << "Ingrese numero: ";
    cin >> n2;
    
    if(n1>n2){
        desde = n2;
        hasta = n1;
    }
    else{
        desde = n1;
        hasta = n2;
    }
    
    for(i=desde;i<=hasta;i++){
        cout << i << " ";
    }
    
    
    return 0;
}

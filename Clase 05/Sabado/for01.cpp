#include <iostream>
using namespace std;

int main(){
    int n1, n2, i;
    
    cout << "Ingrese numero: ";
    cin >> n1;
    
    cout << "Ingrese numero: ";
    cin >> n2;
    
    if(n2 > n1){
        for(i=n1+1;i<n2;i=i+1){
            cout << i << " ";
        }
    }
    else{
        for(i=n1-1;i>n2;i=i-1){
            cout << i << " ";
        }
    }
    
    
    
    
    return 0;
}

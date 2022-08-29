#include <iostream>
using namespace std;

int main(){
    int i;

    cout << endl << "Antes del for" << endl;
    for(i=1; i<=10; i+=3){
        cout << "Valor de i: " << i << endl;
    }

    cout << "Después del for" << endl;
    cout << "Valor de i: " << i << endl;
    return 0;
}

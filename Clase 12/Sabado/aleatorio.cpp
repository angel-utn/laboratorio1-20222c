#include <iostream>
#include <ctime>
using namespace std;

int elegirCarta();

int main(){

    srand(time(0));

    cout << elegirCarta() << endl;
    cout << elegirCarta() << endl;
    cout << elegirCarta() << endl;
    cout << elegirCarta() << endl;
    
    return 0;
}


int elegirCarta(){
    return rand() % 12 + 1;
}

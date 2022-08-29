#include <iostream>
using namespace std;

int main() {
    int i, n, pos;
    pos = 0;
    for(i=1; i<=5; i++) {
        cout << "Número: ";
        cin >> n;
        if (n > 0) {
            pos++; //pos += 1; //pos = pos + 1;
        }
    }
    cout << "Positivos: ";
    cout << pos;
    return 0;
}

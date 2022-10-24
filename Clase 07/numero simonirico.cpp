#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n=0,cont=0;
    
    while(cont!=520)
    {
        n++;
        if(n%15==0 && n%3==0 && n%6!=0){
            cont++;
        }
    }

    cout<<"El numero simnorico 520 es: "<<n<<endl;

    system("pause");
    return 0;
}

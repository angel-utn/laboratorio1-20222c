#include <iostream>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include <cstdlib>
#include <ctime>


/**

   p tiene que ser primo
   p*2+1 también que ser primo

   p es primo de SG

*/

bool es_primo(int numero)
{
    int i, c=0;
    for(i=1; i<=numero; i++)
    {
        if (numero % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool es_primo_SophieGermain(int p){

   /*
      T y T = T
      T y F = F
      F y T = F
      F y F = F
   */
   //return es_primo(p) && es_primo(p*2+1);

   if (es_primo(p) == true && es_primo(p*2+1) == true){
      return true;
   }
   else{
      return false;
   }

}


int main()
{
   srand(time(NULL));
   int color1 = rand()%10+1;
   int color2 = rand()%10+1;

   setColor(15);
   int i;
   bool pri, priSG;

   for(i=1; i<=1000; i++){

      pri = es_primo(i);
      priSG = es_primo_SophieGermain(i);

      if (priSG == true){
         setColor(color1);
         cout << i << endl;
      }
      else{
         if (pri == true){
            setColor(color2);
            cout << i << endl;
         }
      }
   }
   setColor(15);

   return 0;
}

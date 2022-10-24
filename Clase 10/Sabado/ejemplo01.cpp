#include <iostream>
using namespace std;

int main(){
   const int T = 5;
   int vec[T] = {10, 20, 30, 40, 50};
   int p;

   for(p=0; p<T; p++){
      cout << vec[p] << " ";
   }

   return 0;
}

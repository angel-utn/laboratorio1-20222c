#include <iostream>
using namespace std;

int main(){
   const int F = 4;
   const int C = 3;

   int mat[F][C] = {1, 2, 3, 10, 20, 30, 100, 200, 300, 1000, 2000, 3000};
   int i, j;

   for(i=0; i<F; i++){
      for(j=0; j<C; j++){
         cout << mat[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}

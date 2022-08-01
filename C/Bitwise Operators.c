#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int And = 0;
  int Or = 0;
  int Xor = 0;
  for (int i = 1; i <= n; i++)
  {
      for (int j = i+1; j <= n; j++)
      {
          if (((j&i) > And) && ((j&i) < k) )
          {
              And = j&i;
          }
           if (((j|i) > Or) && ((j|i) < k) )
          {
              Or = j|i;
          }
           if (((j^i) > Xor) && ((j^i) < k) )
          {
              Xor = j^i;
          }
      }
  }
  
  printf("%d\n",And);
  printf("%d\n",Or);
  printf("%d\n",Xor);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

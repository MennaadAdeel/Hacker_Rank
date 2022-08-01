#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int n,op,a,b,k,max =0,newmax=0;
   scanf("%lld %lld",&n,&op);
   long int arr[n];
   for(int i=0; i<n; i++)
   {
       arr[i]=0;
   }
    
   for(int i =0; i < op; i++)
   {
       scanf("%lld %lld %lld",&a,&b,&k);
       for(int j = a; j <= b; j++)
       {
          arr[j] += k;
       }
   }
   max = arr[0];
   for(int i =1; i<n; i++)
   {
       if(arr[i]>max)
       {
           max = arr[i];
       }
   }
   printf("%lld",max);
  
    return 0;
}

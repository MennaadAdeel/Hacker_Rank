
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d ,k;
    int i ;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(i=0 ; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        for(i=0; i < n-1; i++)
        {
            k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
        }
        d--;
    }while(d != 0);

    for(i=0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

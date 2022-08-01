#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,nq;
    scanf("%d",&n);
    char string[n][100];

    for(int i =0; i<n; i++)
    {
        scanf("%s",string[i]);
    }

    scanf("%d",&nq);
    char query[nq][100];
    for(int i =0; i<nq; i++)
    {
        scanf("%s",query[i]);
    }
   
    for(int j =0; j<nq; j++)
    {
        int result =0;
        for(int i =0; i<n; i++)
        {
           if( strcmp(query[j],string[i])==0)
           {
               result++;
           }

        }
        printf("%d\n",result);
    }

    return 0;
}

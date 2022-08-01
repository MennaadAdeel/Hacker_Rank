#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int line = (n+n)-1;
    int rows = 0;
    int coloumns = line - 1;
    int arr[line][line];
    while(n !=0 )
    {
        for(int i = rows; i <= coloumns; i++)
        {
            for(int j = rows; j <= coloumns ; j++)
            {
            if((i == rows)||(i== coloumns)||(j== rows)||(j== coloumns))
                {
                    arr[i][j] = n;
                }

            }

        }
        n--;
        rows++;
        coloumns--;
    }
  for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < line ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
      
    return 0;
}

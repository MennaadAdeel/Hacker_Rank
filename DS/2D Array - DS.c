#include <stdio.h>
#include <stdlib.h>


int print_sum(int arr[6][6])
{
    int sum = 0;
    int temp = -100;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            sum = arr[i][j] +arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+ arr[i+2][j]+ arr[i+2][j+1]+ arr[i+2][j+2];

            if(sum > temp)
            {
                temp = sum;
            }
        }
    }

    return temp;

}


int main()
{
    int sum;
    int arr[6][6];
    for(int i =0; i < 6; i++)
    {
        for(int j = 0 ; j <6; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   
    sum = print_sum(arr);
    printf("%d ",sum);


    return 0;
}

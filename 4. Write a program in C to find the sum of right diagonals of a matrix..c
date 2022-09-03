/******************************************************************************
4. Write a program in C to find the sum of right diagonals of a matrix.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the number :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("Sum of diagonal is :%d",sum);
    


    return 0;
}

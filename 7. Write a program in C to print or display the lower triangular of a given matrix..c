/******************************************************************************
7. Write a program in C to print or display the lower triangular of a given matrix.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3];
    printf("Enter the matrice elements :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j>=i)
            {
            printf("%d ",a[i][j]);
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

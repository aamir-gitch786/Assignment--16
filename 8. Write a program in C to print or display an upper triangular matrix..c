/******************************************************************************
8. Write a program in C to print or display an upper triangular matrix.

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
    printf("Upper triangular matrice : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i<2 && j>0)
            {
                if((i+j==1 || i+j==2 || i+j==3) && (i!=j) )
                {
                    printf(" %d",a[i][j]);
                }
                else
                printf(" ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

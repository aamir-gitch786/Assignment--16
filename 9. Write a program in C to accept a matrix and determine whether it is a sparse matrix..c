/******************************************************************************
9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],zero=0,non_zero=0;
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
            if(a[i][j]==0)
             zero++;
            else
             non_zero++;
        }
    }
    if(zero>=non_zero)
    printf("Yes it is a sparse matrice.");
    else
    printf("NO it is not a sparse matrice.");
   

    return 0;
}

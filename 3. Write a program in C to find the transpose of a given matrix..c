/******************************************************************************
3. Write a program in C to find the transpose of a given matrix.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],i,j,tem;
    printf("Enter the number :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
printf("transpose of matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)//here you can use (j<i) it will works as same.
            {
                tem=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=tem;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/******************************************************************************

1. Write a program to calculate the sum of two matrices each of order 3x3.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter elements in first arrays : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);  
        }
        
    }
    printf("Enter elements in seconde arrays : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);  
        }
        
    }
    printf("Sum of arrays elements is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
}
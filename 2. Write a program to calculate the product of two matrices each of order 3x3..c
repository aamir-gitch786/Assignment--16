/******************************************************************************

2. Write a program to calculate the product of two matrices each of order 3x3.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter elements in first matrice : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);  
        }
        
    }
    printf("Enter elements in seconde matrice : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);  
        }
        
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=0;
        }
        
    }
    printf("product  of two matrice  is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    printf("Product of matrice :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
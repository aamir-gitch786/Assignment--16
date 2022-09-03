/******************************************************************************
6. Write a program in C to find the sum of rows and columns of a Matrix.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[3][3],i,j,k,sum=0,b[6];
    printf("Enter the number :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {sum=0;
    for(k=0;k<3;k++)
        {
            sum+=a[i][k]; 
        }
        b[i]=sum;
    }
    for(i=0;i<3;i++)
    {sum=0;
    for(k=0;k<3;k++)
        {
            sum+=a[k][i]; 
        }
        b[i+3]=sum;
    }
    
    for(i=0;i<3;i++)
    printf(" Row %d sum is %d \n",i+1,b[i]);
    for(i=0;i<3;i++)
    printf("coulums %d sum is %d \n",i+1,b[i+3]);
   


    return 0;
}

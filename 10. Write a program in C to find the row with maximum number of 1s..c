/******************************************************************************
10. Write a program in C to find the row with maximum number of 1s.

*******************************************************************************/

#include <stdio.h>
#include<limits.h>

int main()
{
    int a[3][3],b[3],i,j,tem=INT_MIN,count;
    printf("Enter the matrice elements :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    { count=0;
        for(int j=0;j<3;j++)
        {
           if(a[i][j]==1)
           count++;
        }
        b[i]=count;
    }
    j=0;
    for(i=0;i<3;i++)
    { if(tem<b[i])
      {
        tem=b[i];
        j=i;
      }
        
    }
    printf("The row with maximum number of 1s is : %d ",j+1);
    
   return 0;
}

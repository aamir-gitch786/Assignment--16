/******************************************************************************
10. Write a program in C to find the row with maximum number of 1s.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int a[3][3],b[3],i,j,tem,count;
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
    tem=b[0];
    j=0;//it is important becaue may be in first row we have maximum 1 prasent.
    for(i=1;i<3;i++)
    { if(tem<b[i])
      {
        tem=b[i];
        j=i;
      }
        
    }
    printf("The row with maximum number of 1s is : %d ",j+1);
    
   return 0;
}

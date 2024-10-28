#include<stdio.h>
int main()
{
    int i,max,min,count,j;

       printf("Enter the min number.\n");
       scanf("%d",&max);

       for(i=1;i<=max;i++)
       {
        for(j=2;j<i/2;j++)
        {
         if(i%j==0)
         {
            int count;
            count=count+1;
         }
        }
        if(count==0 && i!=1)
        {
            printf("%d",j);
        }
       }
       return 0;
    
}
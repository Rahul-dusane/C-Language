#include<stdio.h>
int main()
{
    int num,num1=0,num2=1,num3,i;
    

    printf("Enter the number : ");
    scanf("%d",&num);



    printf("\nNumber 1 value is=%d",num1);
    printf("\nNumber 2 value is=%d",num2);

    for(i=2;i<num;++i)
    {
        num3=num1+num2;
         printf("\nNumber %d value is=%d",i,num3);
        num1=num2;
        num2=num3;
       

    }
    
    return 0;
}
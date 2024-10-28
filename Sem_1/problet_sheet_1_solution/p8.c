#include<stdio.h>
int main()
{
    int amount,rate;

    printf("\nEnter the amount : ");
    scanf("%d",&amount);

    if(amount<0)
    {
        printf("Enter proper amount. \n");
        
    }
    else{
   
   int pay;

    if(amount>=100000)
    {
        pay=amount*12/100;
        printf("%d",pay);
    }
    else if(amount>=60000 && amount<100000)
    {
        pay=amount*10/100;
        printf("%d",pay);
    }
    else if(amount>=30000 && amount<60000)
    {
        pay=amount*8/100;
        printf("%d",pay);
    }
    else if(amount<30000)
    {
       float pay=amount*7.2/100;
       printf("%f",pay);
    }
    }
    return 0;
}
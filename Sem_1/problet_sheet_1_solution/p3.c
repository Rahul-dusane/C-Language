#include<stdio.h>
int main()
{
    int Thour,overtime;
    float pay;
    

    printf("Enter the Thours.\n");
    scanf("%d",&Thour);

    if(Thour<=0 && Thour>=168)
    {
        printf("Enter proper HOURS.\n");
    }
    else 
 {
    if(Thour<=40)
    {
        pay=40*2.50;
        printf("%f",pay);
    }
    
 }
 overtime=Thour-40;
 printf(" your overtime hours are :%d\n",overtime);

  if(overtime>=1 && overtime<=5)
  {
    pay=overtime*7+40*2.50;
    printf("%f",pay);
  }
  else if(overtime>=6 && overtime<=10)
  {
    pay=overtime*8.50+40*2.50;
    printf("%f",pay);
  }
  else if(overtime>10)
  {
    pay=overtime*12+40*2.50;
    printf("%f",pay);
  }
  
return 0;

}
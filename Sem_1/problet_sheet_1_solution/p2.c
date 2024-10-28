#include<stdio.h>
int main()
{
    int yos,jy,cy;
    

    printf("Enter your joyning year.");
    scanf("%d",&jy);

    printf("Enter your current year.");
    scanf("%d",&cy);

    yos=cy-jy;
    printf("you have %d year expariance.",yos);

    if(yos>=7)
    {
        printf("you have 5000 in bonus.");
    }

 else if(yos>=4 && yos<=6)
 {
    printf("you have 3000 in bonus.");
 }
 else if(yos>=1 && yos<=3)
 {
    printf("you have 1000 in bonus.");
 }
 else 
 {
    printf("you dont have bonus.");
 }
 return 0;

}
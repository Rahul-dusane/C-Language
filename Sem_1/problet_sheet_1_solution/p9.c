#include<stdio.h>
int main()
{
    int yos,jy,cy;

    printf("enter jy.");
    scanf("%d",&jy);
    printf("enter cy.");
    scanf("%d",&cy);
    yos=cy-jy;
    printf("%d",yos);
    if(yos>3)
    {
        printf("you have 5000 bonus.");
    }
    else
    {
        printf("no bonus.");
    }
    return 0;
}
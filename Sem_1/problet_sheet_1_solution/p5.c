#include<stdio.h>
int main()
{
    int salary,da,hra,ma;
    printf("Enter your salary.");
    scanf("%d",&salary);

    da=salary*40/100;
    hra=salary*20/100;
    ma=salary*+5/100;
    int gs=da+hra+ma;
    printf("%d %d %d %d\n",da,hra,ma,gs);
    return 0;
}
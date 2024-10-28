#include<stdio.h>
int main()
{
    float  p2013,p2014,p2015,p2016,p2017,p2018;
    printf("Enter the population of 2013.");
    scanf("%f",&p2013);

    p2014=p2013+10/100;
    p2015=p2014-10/100;
    p2016=p2015+11.23/100;
    p2017=p2016;
    p2018=p2017-4.2/100;

    printf("%f",p2018);
    return 0;

}
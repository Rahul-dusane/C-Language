#include<stdio.h>
int main()
{
    int c;
    float f;

    printf("Enter the temperature in F :");
    scanf("%f",&f);

    c=(f-32)*5/9;

    printf(" Your temp is %d degree celsius.",c);
    return 0;
}
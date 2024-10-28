#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 'a' value.");
    scanf("%d",&a);
    
    printf("enter 'b' value.");
    scanf("%d",&b);
    
    printf("enter 'c' value.");
    scanf("%d",&c);

    if(a>b && b>c)
    {
        printf("a is big than b and c.");
    }
    else if(b>c && c>a)
    {
        printf("b is big than a and c ");
    }
    else if(c>a && a>b)
    {
        printf("c is big than a and b");
    }
    else if(a=b && b>c)
    {
        printf("a and b are same c is small");
    }
    else if(a==b==c)
    {
        printf("all are same");
    }
    else if(b=c && c>a)
    {
        printf("b and c are same a is small");
    }
    else if(c=a && a>b)
    {
        printf("c and a are same b is small");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("all different");
    }
    return 0;
}
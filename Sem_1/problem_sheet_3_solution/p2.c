#include<stdio.h>
int main()
{
    int size=20;
    int a[size];

    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    int cont=0,i,num;

    printf("Your prime numbers are:\n");
        if(a[i]%size==0)
        {
            cont=cont+1;
            num=cont;
        }
    

    if (num==2)
    {
        for(i=0;i<size;i++)
        {
            printf("%d",i);
        }
    }
    

    return 0;
}
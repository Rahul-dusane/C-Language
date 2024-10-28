#include<stdio.h>
int main()
{
    int langht=0,i=0;
    char str[50];

    printf("Enter the string.\n");
    gets(str);

    while(str[i]!='\0')
    {
        langht++;
        i++;
    }
    printf("Rversed string is:-\t");

    for(i=langht-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}

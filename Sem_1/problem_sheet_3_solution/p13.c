#include<stdio.h>
int main()
{
    int i=0;
    char str[100];

    int cont=0;

    printf("Enter the string.");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
        {
            cont++;
        }
    }
    printf("%s",cont);
    return 0;
}
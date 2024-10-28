#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    int i=0,j=0;
    
    printf("Enter the first string.\n");
    gets(str1);

    printf("Enter the second string.\n");
    gets(str2);

    while(str1[i]!='\0')
    {
        i=i+1;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        j=j+1;
        i=i+1;
    }
         str1[i]='\0';
         printf("%s",str1);

    return 0;
}
#include<stdio.h>
int main()
{
    int i=0;
    char str1[50],str2[50];

    printf("Enter the 1 string.\n");
    scanf("%s",&str1);
    printf("Enter the 2 string.\n");
    scanf("%s",&str2);

    while(str1[i]==str2[i] && str1[i]!='\0')
    {
        i++;
    }
    if(str1[i]>str2[i])
    {
        printf("String 1 is gartter then string 2.\n");

    }
    else if(str1[i]<str2[i])
    {
        printf("String 2 is gartter then string 1.\n");
    }
    else{
        printf("Both string ate same.\n");
    }
    return 0;

}
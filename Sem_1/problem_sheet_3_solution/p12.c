#include<stdio.h>
int main()
{
    int l=0,i=0,flag=1;
    char str[50];

    printf("Enter the estring.");
    gets(str);

  for(i=0;str[i]!='\0';i++)
  {
    l++;
  }
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("Your string is palindrome.");
    }
    else {
        printf("Your string is not palindrome.");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i=0,j=0,n,m;
    char str1[n],str2[m];

   printf("Enter the number.\n");
   scanf("%d",&n);
   
   printf("Enter the number.\n");
   scanf("%d",&m);

   printf("Enter the string.\n");
   gets(str1);

   printf("Enter the string.\n");
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
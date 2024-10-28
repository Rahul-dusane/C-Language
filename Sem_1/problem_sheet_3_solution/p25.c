#include<stdio.h>
int main()
{
        int i,m;

        printf("Enter the size of string:\n");
        scanf("%d",&m);

         getchar();
        char str[m];

        printf("Enter the string:\n");
        for(i=0;i<m;i++)
        {
            scanf("%s", str[i]);
        }

            int temp;

        for(i=0;str[i]!='\0';i++)
        {
            for(int j=i+1;str[j]!='\0';j++)
            {
                if(str[i]>str[j])
                {
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
            }
        }

        for(i=0;i<m;i++)
        {
            printf("%c", str[i]);
        }
        return 0;


}

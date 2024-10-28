#include<stdio.h>
int main(){
    int a[2][2],b[2][2],mul[2][2],trans_A[2][2],trans_B[2][2],add[2][2],sub[2][2],i,j,k,t;

    printf("Enter the value of array 'A'.");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the value of array 'B'.");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Your first array is:-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Your second array is:-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          add[i][j]=a[i][j]+b[i][j];
        }
    }

     printf("Addition of 2 array is:-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Subtraction of 2 array:-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         t=0;
         for(k=0;k<2;k++)
         {
            t+=(a[i][k]*b[k][j]);
         }
         mul[i][j]=t;
        }
       
    }

    printf("Multiplication of 2 array:-\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            trans_A[j][i]=a[i][j];
        }
    }

    printf("Transpos of matrix 'A':-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",trans_A[i][j]);
        }
        printf("\n");
    }    

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            trans_B[j][i]=b[i][j];
        }
    }

    
    printf("Transpos of matrix 'B':-\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",trans_B[i][j]);
        }
        printf("\n");
    }    


  return 0;

}
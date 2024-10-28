#include<stdio.h>
int main()
{
    int i,j,k,temp,a[3][3];

    //Inputting array elemnets
    printf("Enter the array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //printing array elements
    printf("Your entered array elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

// Finding the largest element column-wise
    printf("Largest elements column-wise:\n");
    for (j = 0; j < 3; j++) {
        int max = a[0][j];
        for (i = 1; i < 3; i++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("Column %d: %d\n", j + 1, max);
    }


    return 0;
}
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,obtain;
    float per;

    printf("Enter the subject-1 marks-");
    scanf("%d",&s1);

  
    
    printf("Enter the subject-2 marks-");
    scanf("%d",&s2);

  
    
    printf("Enter the subject-3 marks-");
    scanf("%d",&s3);

    
    
    printf("Enter the subject-4 marks-");
    scanf("%d",&s4);

  
    printf("Enter the subject-5 marks-");
    scanf("%d",&s5);
 

    obtain=s1+s2+s3+s4+s5;
    printf(" Your obtain marks are = %d",obtain);

    int total=obtain*100;
    per=total/500;
    printf(" You got %f persentage.",per);

    if(per>=60)
    {
        printf("You are in first divition.");
    }
    else if(per>=50 || per<59)
    {
        printf("You are in second divition.");
    }
    else if(per>=40 || per<49)
    {
        printf("You are in thred divition.");
    }
    else
    {
        printf("You are fail.");
    }
    return 0;
}

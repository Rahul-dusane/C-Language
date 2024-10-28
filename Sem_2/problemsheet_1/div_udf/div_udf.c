/*
 * div_udf.c
 *
 *  Created on: 29-Jan-2024
 *      Author: root
 */

#include<stdio.h>

int div(int,int);
int main()
{
	int num1,num2;
	printf("Enter the number1.\n");
	scanf("%d",&num1);
	printf("Enter the number2.\n");
	scanf("%d",&num2);
	int res;
	res=div(num1,num2);
	printf("Div is : %d",res);
	return 0;
}
int div(int x,int y)
{
	int cont=0;
	if(x < y)
	{
		printf("Enter valid numbers.\n");
		return 0;
	}
	else
	{
		while(x > 0)
		{
			cont=cont+1;
			x=x-y;
		}
		//printf("Div is : %d",cont);
	}
	return cont;
}


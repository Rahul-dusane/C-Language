/*
 * noDigit_udf.c
 *
 *  Created on: 29-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int numberOfDidit(int);
int main(){
	int a;
	printf("Enter the number.\n");
	scanf("%d",&a);
	int res=numberOfDidit(a);
	printf("%d\n",res);
	return 0;
}
int numberOfDidit(int x){
	int digit,sum=0;
	while(x!=0){
		digit=x%10;
		sum=sum+digit;
		x=x/10;
	}
	return sum;
}

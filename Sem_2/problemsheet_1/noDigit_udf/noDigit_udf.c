/*
 * noDigit_udf.c
 *
 *  Created on: 29-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int numberOfDigit(int);
int main(){
	int a;
	printf("Enter the number.\n");
	scanf("%d",&a);
	int res;
	res=numberOfDigit(a);
	printf("%d",res);
	return 0;
}
int numberOfDigit(int x){
	int digit,cont=0;
	while(x!=0){
		digit=x%10;
		cont++;
		x=x/10;
	}

	return cont;

}


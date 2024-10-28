/*
 * p26.c
 *
 *  Created on: 05-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int fac(int);
int main(){
	int n,result;
	printf("Enter the number.\n");
	scanf("%d",&n);
	if(n<=0){
		printf("Enter only positiv integers.\n");
		return 1;
	}
	result=fac(n);
	printf("Factorial = %d\n ",result);
	return 0;
}
int fac(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}


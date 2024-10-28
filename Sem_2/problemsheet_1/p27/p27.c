/*
 * p27.c
 *
 *  Created on: 05-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int fibo(int);
int main(){
	int n,result;
	printf("Enter the number.\n");
	scanf("%d",&n);
	result=fibo(n);
	printf("\nFibo = %d",result);
	return 0;
}
int fibo(int n){

	if(n<=1){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}


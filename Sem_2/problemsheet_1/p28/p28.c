/*
 * p28.c
 *
 *  Created on: 05-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int mul(int ,int);
int main(){
	int a,b,result;
	printf("Enter two integers.\n");
	scanf("%d %d",&a,&b);
	result=mul(a,b);
	printf("Multiplication is = %d",result);
	return 0;
}
int mul(int a,int b){
	static int result=0,i=0;
	if(i<a){
		result=result+b;
		i++;
		mul(a,b);
	}
	return result;
}


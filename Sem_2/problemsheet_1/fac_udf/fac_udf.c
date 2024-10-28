/*
 * fac_udf.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void fac(int);
int main(){
	int a;
	printf("Enter the number.\n");
	scanf("%d",&a);
	fac(a);
	return 0;
}
void fac(int x){
	int f=1;
	if(x>0){
		for(int i=1;i<=x;i++){
			f=f*i;
		}
		printf(" factorail = %d",f);
	}
	else{
		printf("Enter valid number.\n");
	}
	return ;
}


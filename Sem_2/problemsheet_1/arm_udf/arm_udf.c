/*
 * arm_udf.c
 *
 *  Created on: 29-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int isArmstrong(int);

int main(){
	int a;
	printf("Enter your number.\n");
	scanf("%d",&a);
	int res;
	res=isArmstrong(a);
	if(res==1){
		printf("Your number is armstrong.");
	}
	else{
		printf("Your number is not armstrong.");
	}
	return  0;
}

int isArmstrong(int n){

	int sum=0,cube,digit,i;
	i=n;
	while(n!=0){
		digit=n%10;
		cube=digit*digit*digit;
		sum=sum+cube;
		n=n/10;
	}
	if(sum==i){
		return 1;
	}
	else{
		return 0;
	}

}


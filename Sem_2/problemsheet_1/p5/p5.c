/*
 * p5.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int isLeap(int);

int main(){
	int a,res;
	printf("Enter the year.\n");
		scanf("%d",&a);
		if(a<0  || a>9999){
			printf("Enter valid year !\n");
			return -1;
		}
		printf("%d",a);
	res=isLeap(a);
	if(res==1){
		printf("\nYour entered year is leap year.\n");
	}
	else{
		printf("\nYour entered year is not a leap year.\n");
	}
	return 0;
}

int isLeap(int x){
	if(x % 4 == 0){
		return 1;
	}
	else{
		return 0;
	}
}


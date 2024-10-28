/*
 * p25.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */

#include<stdio.h>
void pattern(int);
int main(){
	int n=5;
	printf("\n");
	pattern(n);
	return 0;
}
void pattern(int x){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<2*(x-i)+1;j++){
			printf(" ");
		}
		for(int k=0;k<2*i+1;k++){
			printf("%d ",k+1);
		}
		printf("\n");
	}
	return ;
}


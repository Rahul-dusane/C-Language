/*
 * p30.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int power(int m,int n);
int power(int m,int n){
	static int p=1,cont=0;
	if(cont==n){
		return p;
	}
	else{
		p=p*m;
		cont++;
		power(m,n);
	}

}
int main(){
	int m,n;
	printf("Enter base size.\n");
	scanf("%d",&m);
	printf("Enter exponent.\n");
	scanf("%d",&n);
	int p=power(m,n);
	printf("%d",p);
	return 0;
}


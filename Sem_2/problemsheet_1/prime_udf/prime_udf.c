/*
 * prime_udf.c
 *
 *  Created on: 29-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int isprime(int);

int main(){
	int n,res;
	printf("Enter the number.\n");
	scanf("%d",&n);
	res=isprime(n);
	if(res==0)
	{
		printf("Your number is not prime.\n");
	}
	else{
		printf("Your number is prime.\n");
	}

}
int isprime(int x){
	int i,cont=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			cont=cont+1;
		}
	}
	if(cont==2){
		return 1;
	}
return 0;
}

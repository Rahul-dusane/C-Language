/*
 * p19.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int fibo(int);
int main(){
	int n;
	printf("Enter the number.\n");
	scanf("%d",&n);
	//int res[n];
	//for(int i=0;i<n;i++){
	//res[i]=
			fibo(n);
	//printf("%d\n",res[i]);
	//}

	return 0;
}
int fibo(int n){
	int n1=0,n2=1,n3,i;
	printf("Fibonacci series:\n");
	printf("%d %d",n1,n2);
	for(i=2;i<n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
   printf(" %d",n3);
	}
	return 0;
}


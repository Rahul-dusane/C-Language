/*
 * p3.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */
#include<stdio.h>

//declaration of UDF .
void input_output(int *,int);
int main(){
	int n;
		printf("Enter the size of the array = ");
		scanf("%d",&n);
		int a[n];
		int *p;//create a pointer .
		p=&a[0];
		input_output(a,n);

		int sum=0;
		//getting sum of the array elements .
		for(int i=0;i<n;i++){
			sum+=*(p+i);
		}
		printf("\nSum of the array element is = %d",sum);
		return 0;
}

//use of input/output function
void input_output(int *p,int n){
	int i;
	printf("Enter your array elements.\n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}

	printf("Your array elements are = ");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	return ;
}


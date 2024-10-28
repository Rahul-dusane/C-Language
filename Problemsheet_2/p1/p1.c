/*
 * p1.c
 *
 *  Created on: 28-Feb-2024
 *      Author: root
 */

#include<stdio.h>

//declaration of two UDF .
void input_output(int *,int);
void shorting(int *,int);
void shorting_1(int *,int);
int main(){
	int n;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	int a[n];
	int *p;//create a pointer .
	p=&a[0];
	input_output(a,n);
	shorting(a,n);

	//shorting using pointer .
	printf("Your shorted elements are = ");
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}

	//shorting_1 using pointer .
	shorting_1(a,n);
	printf("Your array elements in disanding order = ");
		for(int i=0;i<n;i++){
			printf("%d ",*(p+i));
		}

	return 0;
}

//use of input/output function .
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

//use of shorting function.
void shorting(int *p,int n){
	int i,j;
	int temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i) > *(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	return ;
}

//use of shorting_1 function .
void shorting_1(int *p,int n){
	int i,j;
		int temp;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(*(p+i) < *(p+j)){
					temp=*(p+i);
					*(p+i)=*(p+j);
					*(p+j)=temp;
				}
			}
		}

		return ;
}

/*
 * p12.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input_output(int [],int);
void largest(int [],int);
void smallest(int [],int);
int main(){
	int n;
	printf("Enter the size of array.\n");
	scanf("%d",&n);
	int a[n];
	input_output(a,n);

	smallest(a,n);
	largest(a,n);
	return 0;
}
void input_output(int x[],int n){
	int i;
	printf("Enter the elements of array.\n");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("Your array elements are : \n");
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return ;
}
void smallest(int x[],int n){
	int min=x[0],i;
	for(i=0;i<n;i++){
		if(min>x[i]){
			min=x[i];
		}
	}
	printf("\nSmallest element in array is = ");
	printf("%d",min);
	return ;
}
void largest(int x[],int n){
	int max,i;
	for(i=0;i<n;i++){
		if(max<x[i]){
			max=x[i];
		}
	}
	printf("\nLargest element in array is = ");
	printf("%d",max);
	return ;
}


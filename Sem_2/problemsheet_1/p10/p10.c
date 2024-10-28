/*
 * p10.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input(int [],int n);
void print(int [],int n);
void short_1d(int [],int n);
void dis_short(int [],int n);
int main(){
	int n;
	printf("Enter the size of array.\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter your array elements.\n");
	input(a,n);
	printf("Your array elements are:\n");
	print(a,n);
	printf("\nShorting of array ascending order:\n");
	short_1d(a,n);
	printf("\nShorting of array descending order:\n");
	dis_short(a,n);

	 return 0;
}
void input(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	return ;
}
void print(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return ;
}
void short_1d(int x[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return ;
}
void dis_short(int x[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(x[i]>x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return ;
}

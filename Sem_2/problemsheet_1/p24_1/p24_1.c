/*
 * p24_1.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input_output(int [],int [],int,int);
void sort(int [],int [],int,int);
void merge_sort(int [],int [],int [],int,int,int);
int main(){
	int n=5,m=5,k;

	k=n+m;
	int a[n],b[m],c[k];
	input_output(a,b,n,m);
	sort(a,b,n,m);
	merge_sort(a,b,c,n,m,k);
	return 0;
}
void input_output(int x[],int y[],int n,int m){
	int i;
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}

	printf("Enter the array elements :\n");
		for(i=0;i<n;i++){
			scanf("%d",&y[i]);
		}
		printf("Your first array elements are:\n");
		for(i=0;i<n;i++){
			printf("%d ",x[i]);
		}
		printf("\nYour second array elements are:\n");
		for(i=0;i<n;i++){
			printf("%d ",y[i]);
		}

	return ;
}
void sort(int x[],int y[],int n,int m){
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
	printf("\nShorting of first array.\n");
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	int temp1;
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(y[i]>y[j]){
				temp1=y[i];
				y[i]=y[j];
				y[j]=temp1;
			}
		}
	}
	printf("\nShorting of second array.\n");
	for(i=0;i<m;i++){
		printf("%d ",y[i]);
	}
	return ;
}
void merge_sort(int x[],int y[],int z[],int n,int m,int k){
int i,j,temp;
for(i=0;i<n;i++){
	z[i]=x[i];
}
for(i=0;i<m;i++){
	z[i+5]=y[i];
}
printf("\nMerge of 2 array.\n");
for(i=0;i<k;i++){
	printf("%d ",z[i]);
}
printf("\nShorting of merge array.\n");
for(i=0;i<k;i++){
	for(j=i+1;j<k;j++){
		if(z[i]>z[j]){
			temp=z[i];
			z[i]=z[j];
			z[j]=temp;
		}
	}
}
for(i=0;i<k;i++){
	printf("%d ",z[i]);
}

return ;
}


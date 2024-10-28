/*
 * p21.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int sum(int m,int n,int [][n]);
void input_output(int m,int n,int [][n]);
int main(){
	int m,n;
	printf("Enter the size of row.\n");
	scanf("%d",&m);
	printf("Enter the size of column.\n");
	scanf("%d",&n);
	int a[m][n];
	input_output(m,n,a);
	int Total=sum(m,n,a);
	printf("Sum of all array element = %d",Total);
	return 0;
}
void input_output(int m,int n,int x[m][n]){
	int i,j;
	printf("Enter the array elements.\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return ;
}
int sum(int m,int n,int x[m][n]){
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum=sum+x[i][j];
		}
	}
	return sum;
}

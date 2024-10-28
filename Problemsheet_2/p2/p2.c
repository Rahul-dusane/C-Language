/*
 * p2.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */
#include<stdio.h>
void input_output(int ,int ,int *);
void shorting(int ,int ,int *);
int main(){
	int m,n;
	printf("Enter the size of the row = ");
	scanf("%d",&m);
	printf("Enter the size of the column = ");
	scanf("%d",&n);
	int a[m][n];
	input_output(m,n,&a);
	shorting(m,n,&a);
	return 0;
}

//use of input_output udf .
void input_output(int m,int n,int *p){
	int i,j;
	printf("Enter the array elements .\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++){
			scanf("%d",&*(p+i * n+j));
		}
	}

	printf("Your array elements \n");
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++){
				printf("%d\t",*(p+i * n+j));
			}
			printf("\n");
		}
	return ;
}

//use of shorting udf .
void shorting(int m,int n,int *p){
	int i,j,k,temp;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(k=j+1;k<n;k++){
				if(*(p+i * n+j) > *(p+i * n+k)){

				}
			}
		}
	}
}

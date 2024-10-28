/*
 * p13.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input_output(int m,int n,int [][n]);
int small(int m,int n,int [][n]);
int larg(int m,int n,int [][n]);
int main(){
	int m,n;
		printf("Enter size of row.\n");
		scanf("%d",&m);
		printf("Enter the size of column.\n");
		scanf("%d",&n);
		int a[m][n];
		input_output(m,n,a);
		printf("\n");
		int res=small(m,n,a);
		printf("Smallest element in given matrix = %d\n",res);
		int max=larg(m,n,a);
		printf("Largest element in given matrix = %d\n",max);

	return 0;
}
void input_output(int m,int n,int x[m][n]){
printf("Enter your array elements.\n");
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		scanf("%d",&x[i][j]);
	}
}
printf("Your array elements are:\n");
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("%d ",x[i][j]);
	}
	printf("\n");
}
return ;

}
int small(int m,int n,int x[m][n]){
    int i,j;
    int min=x[0][0];
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		if(min > x[i][j]){
    			min=x[i][j];
    		}
    	}
    }

	return min;

}
int  larg(int m,int n,int x[m][n]){
	int i,j,max;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(max < x[i][j]){
				max=x[i][j];
			}
		}
	}
	return max;
}

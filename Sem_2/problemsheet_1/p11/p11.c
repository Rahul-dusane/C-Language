#include<stdio.h>
void input_output(int m,int n,int [][n]);
void a_short(int m,int n,int [][n]);
void d_short(int m,int n,int [][n]);
int main(){
	int m,n;
	printf("Enter size of row.\n");
	scanf("%d",&m);
	printf("Enter the size of column.\n");
	scanf("%d",&n);
	int a[m][n];
	input_output(m,n,a);
	a_short(m,n,a);
	d_short(m,n,a);
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
void a_short(int m,int n,int x[m][n]){
int i,j,k,temp;
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		for(k=j+1;k<n;k++){
			if(x[i][j]>x[i][k]){
				temp=x[i][j];
				x[i][j]=x[i][k];
				x[i][k]=temp;
			}
		}
	}
}
printf("\n \n");
printf("Shorting in ascending order.\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",x[i][j]);
	}
	printf("\n");
}
}

void d_short(int m,int n,int x[m][n]){
	int i,j,temp;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(x[i][j]<x[i][k]){
					temp=x[i][j];
					x[i][j]=x[i][k];
					x[i][k]=temp;
				}
			}
		}
	}
	printf("\n \n");
printf("Shorting in descending order.\n");
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",x[i][j]);
	}
	printf("\n");
}
return ;
}

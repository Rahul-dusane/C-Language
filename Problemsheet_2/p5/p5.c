/*
 * p5.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */
#include<stdio.h>

//create udf for compar
int xstrcmp(char *,char *);
int main(){
	char s1[50],s2[50];
	printf("Enter first string");
	scanf("%s",s1);
	printf("Enter second string");
	scanf("%s",s2);
	getchar();

	//calling function
	if(xstrcmp(s1,s2)==1){
		printf("Both string are equal.");
	}
	else{
		printf("Both the string are not equal.");
	}

}

//use of udf
int xstrcmp(char *s1,char *s2){
	int i=0,j=0;
	while(*s1!='\0'){
		i++;
		s1++;
	}
	while(*s2!='\0'){
		j++;
		s2++;
	}
	if(i==j){
		return 1;//if both string are equal the it will return-0
	}
	return 0;
}


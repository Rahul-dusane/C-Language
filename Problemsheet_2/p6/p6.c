/*
 * p6.c
 *
 *  Created on: 13-Mar-2024
 *      Author: root
 */
#include<stdio.h>
//create udf for concat
void xstrcat(char *,char *);
int main(){
	char s1[50],s2[30];
	printf("Enter your string.\n");
	scanf("%s",s1);
	printf("Enter second string\n");
	scanf(" %s",s2);

	//call the function
	xstrcat(s1,s2);
	printf("\n%s",s1);

	return 0;
}

//use of function .
void xstrcat(char *p,char *t)
{
	while(*p!='\0')
	{
		p++;
	}
	while(*t!='\0')
	{
		*p=*t;
		p++;
		t++;
	}
	*p='\0';
	return ;
}


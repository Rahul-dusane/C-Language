/*
 * p2.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
struct cricket{
	char p_name[30];
	char t_name[30];
	float b_avg;
	char team[30];
}p[20];
int main(){
	struct cricket temp;
	int i;
	for(i=0;i<4;i++){
	printf("Enter the player name.\n");
	scanf("%s",p[i].p_name);
	printf("Enter the team name.\n");
	scanf("%s",p[i].t_name);
	printf("Enter batting average of the player.\n");
	scanf("%f",&p[i].b_avg);
	}

	for(i=0;i<4;i++){
		printf("\nTeam name = %s\tPlayer name = %s\tBatting average = %f\n",p[i].t_name,p[i].p_name,p[i].b_avg);
	}
	printf("\nTeam wise listing of the data:\n");
	for(i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			int k=0;
			while(p[i].t_name == 0 && p[j].t_name == 0 && p[i].t_name[k]!='\0' && p[j].t_name[k]!='\0'){
				k++;
			}
			if(p[i].t_name[k] > p[j].t_name[k]){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++){
			printf("\nTeam name = %s\tPlayer name = %s\tBatting average = %f\n",p[i].t_name,p[i].p_name,p[i].b_avg);
		}
	return 0;
}


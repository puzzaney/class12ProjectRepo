#include<stdio.h>

struct student{
	char name[1000];
	int st_class;
	int roll;
}std[5];

void main(){
	
	printf("--Pujan Karki--12'D'--\n");
	
	for (int i = 0; i < 5; i++){
		printf("Enter your name: ");
		scanf("%s", &std[i].name);
		
		printf("Enter your class: ");
		scanf("%d", &std[i].st_class);
		
		printf("Enter your Roll Number: ");
		scanf("%d", &std[i].roll);
		
		printf("\n"); //Ignore this line		
	}
	
	for(int i = 0; i<5; i++){
		
	printf("Name: %s Class: %d Roll no: %d \n", std[i].name, std[i].st_class, std[i].roll);
	}
	
}

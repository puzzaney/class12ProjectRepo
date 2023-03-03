#include<stdio.h>

struct employee{
	char name[100];
	int id;
	int salary;
};

void main(){
	
	printf("--Pujan Karki--12'D'--\n");

int n;
int total = 0;

printf("Enter the number of employee: ");
scanf("%d", &n);

printf("\n"); //Ignore

struct employee emp[n];

for(int i=0; i<n; i++){
	printf("Enter your name: ");
	scanf("%s", &emp[i].name);

	printf("Enter your employee id: ");
	scanf("%d", &emp[i].id);
	
	printf("Enter your salary: ");
	scanf("%d", &emp[i].salary);
	
	printf("\n"); //Ignore this
}

for(int i=0; i<n; i++){
	printf("Employee's Name: %s \t Employee's id: %d \t Salary: Rs.%d \n",emp[i].name, emp[i].id, emp[i].salary);
	total += emp[i].salary;
}

	printf("\n"); //ignore this
	
	printf("Total Salary: Rs.%d", total);
	
	


}

#include<stdio.h>

struct employee{
	char name[100];
	int salary;
	char post[100];
} emp;

void main(){

printf("--Pujan Karki--12'D'--\n");

FILE *fp;

fp = fopen("detail.txt", "w");

printf("Enter your name: ");
scanf("%s", &emp.name);

printf("Enter your salary: ");
scanf("%d", &emp.salary);

printf("Enter your Position: ");
scanf("%s", &emp.post);

fprintf(fp, "Name: %s Salary: Rs. %d Position: %s \n", emp.name, emp.salary, emp.post);

printf("\n Data entered Successfully\n");

fclose(fp);

fopen("detail.txt", "r");
char ch;

while (ch != EOF){
	printf("%c", ch);
	ch = getc(fp);
}

fclose(fp);






}

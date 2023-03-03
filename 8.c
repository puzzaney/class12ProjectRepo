#include<stdio.h>

void main(){
	printf("--Sujal Limbu--12'D'--\n\n");
	
	char name[] = "Pujan";
	
	printf("The reverse of %s is ", name);
	for (int i = sizeof(name) - 1; i > -1; i --){
		printf("%c", name[i]);
	}
}

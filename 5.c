#include<stdio.h>

void main(){
	
	printf("--Pujan Karki--12'D'--\n\n");
	
	int a;
	int divs = 0;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	for(int i = 2; i < a; i++){
		if(a % i == 0){
			divs ++;
		}
	}
	
	if(divs == 0){
		printf("The entered number %d is a prime number!", a);
	} else {
		printf("The enterd number %d is not a prime number!", a);
	}
	
}

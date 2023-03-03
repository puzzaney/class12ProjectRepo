#include<stdio.h>

int fact(int n );

void main(){
	printf("--Pujan Karki--12'D'--\n\n");
	
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);

	int result = fact(a);
	
	printf("The factorial of %d = %d \n\n", a, result);

}

int fact(int n){
	
	if(n>=1){
		return n*fact(n-1);
	}
	else{
		return 1;
	}
	
}
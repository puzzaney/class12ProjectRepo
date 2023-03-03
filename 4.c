#include<stdio.h>

int fib(int n);

void main(){
	
	printf("--Pujan Karki--12'D'--\n");
	
	int a;
	int n1 = 1;
	int n2 = 1;
	int n3;
	
	printf("Enter nth Fibonacci series: ");
	scanf("%d", &a);
	
	printf("%d\t", n1);
	printf("%d\t", n2);
	
	for (int i =0; i < a - 2; i ++){
		
		n3 = n1 + n2;
		printf("%d\t",n3);
		n1 = n2;
		n2 = n3;
		
		
	}
}

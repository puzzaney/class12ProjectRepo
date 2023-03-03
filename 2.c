#include<stdio.h>

int myFunc(int a);

void main(){
	printf("--Pujan Karki--12'D'--\n\n");
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("\n");
	
	
	
    myFunc(n);
	
	
}

myFunc(a){
	int b = 0;
	
	for(int i=1; i<a+1; i++){
		printf("%d \t", i);
	}
	
	for (int i=1; i<a+1; i++){
		b = b + i;
	}

	printf("\nThe sum of n terms is %d", b);
}

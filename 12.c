#include<stdio.h>

void main(){
	printf("--Pujan Karki--12'D'--\n");
	
	int a, b, *p, *q, sum;
	
	printf("Enter the first value: ");
	scanf("%d",&a);
	
	printf("Enter the second value: ");
	scanf("%d",&b);
	
	p = &a;
	q = &b;
	
	sum = *p + *q;
	
	printf("\nThe sum of %d and %d is %d\n", *p, *q, sum);
}

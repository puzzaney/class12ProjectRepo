#include<stdio.h>

int myFunc(int a);

void main(){
	printf("--Pujan Karki--12'D'-- \n\n");
	
	int a;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
  myFunc(a);
}

myFunc(int a){
  if(a % 2 == 0){
    printf("The given number is even \n\n");
  }else{
    printf("The given number is odd \n\n");
  }
}
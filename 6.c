#include<stdio.h>

void main(){
	
	printf("--Pujan Karki--12'D'--\n\n");
	
	int max = 0;
	
	int arr[7] = {1, 77, 101, 11, 53, 66, 72};
	
	printf("%d \n", arr);
	
	for(int i=0; i<7; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	
	printf("The maximum number in the array is %d \n", max);
	
	int min = max;
	
	for(int i = 0; i<7; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("The minimum value in the array is %d", min);
}

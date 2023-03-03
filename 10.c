#include<stdio.h>

void main(){
	
	printf("--Pujan Karki--12'D'--\n\n");
	
    char word[1000] = "";
	
	int vowel = 0;
	
	printf("Enter a word: ");
	scanf("%s", &word);
	

	for(int i=0; word[i] != '\0' ; i++){		
		switch(word[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel++;
				break;

				
		
	}
	

}
	printf("The number of vowel in %s is %d",word, vowel);
}



























































































































































































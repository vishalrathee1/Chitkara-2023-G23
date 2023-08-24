#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc.txt", "a");

	if(fptr == NULL){
		printf("File not found!\n");
		return 0;
	}
	
	char ch = 'A';
	fputc(ch, fptr); //firstarg ch, second arg file pointer

	char ch1[100]="Appending new line";
	fputs(ch1, fptr);
	
	fclose(fptr);
	return 0;
}
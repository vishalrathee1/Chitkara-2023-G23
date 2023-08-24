#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc.txt", "a");

	if(fptr == NULL){
		printf("File not found!\n");
		return 0;
	}
	//fprintf
	fprintf(fptr, "This will also be inserted inside my file\n" );

	fclose(fptr);
	return 0;
}
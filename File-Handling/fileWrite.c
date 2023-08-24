#include<stdio.h>

int main(){
	//fopen --> takes 2 args, first is filename, mode
	// its return type is FILE * pointer

	// FILE --> can be considered like datatypes

	// FILE * fptr = NULL;
	FILE * fptr = fopen("abc.txt", "w");

	if(fptr == NULL){
		printf("File not found!\n");
		return 0;
	}
	printf("File is created if not present, otherwise opened for overWriting\n");

	//fprintf
	fprintf(fptr, "This will be written inside file\n" );

	fclose(fptr);
	return 0;
}
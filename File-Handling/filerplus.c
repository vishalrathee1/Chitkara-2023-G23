#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc2.txt", "r+");
	if(fptr == NULL){
		return 0;
	}
	// printf("%d\n", ftell(fptr));
	// rewind(fptr);
	printf("%d",fseek(fptr, -1, SEEK_SET));
	fprintf(fptr, "%s", "World");

	fclose(fptr);
	// rename("abc.txt", "abc2.txt");
	remove("abc2.txt");
	return 0;
}
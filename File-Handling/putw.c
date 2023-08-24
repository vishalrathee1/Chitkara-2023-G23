#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc.txt", "w+");
	if(fptr == NULL) {
		printf("File not found");
		return 0;
	}
	int a = 9;
	// putw(a, fptr);
	fprintf(fptr, "%s", "Hello" );
	printf("%d\n", ftell(fptr));
	rewind(fptr); // puts file pointer to 0th byte location/ beginning
	char c;
	c = fgetc(fptr);
	printf("%c\n", c);
	fclose(fptr);
	return 0;
}
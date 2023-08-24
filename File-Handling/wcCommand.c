#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc.txt", "r+");
	if(fptr == NULL){
		printf("Error");
		return 0;
	}

	fprintf(fptr, "%s", "This sentence will be inserted into file" );
	rewind(fptr);
	int ct = 1;
	while(1){
		char c;
		c = fgetc(fptr);
		if(feof(fptr)){
			break;
		}
		if(c==' '){
			ct++;
		}
	}
	printf("%d\n", ct);
	fclose(fptr);
	return 0;
}
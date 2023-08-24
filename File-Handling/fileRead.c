#include<stdio.h>

int main(){
	FILE * fptr = fopen("abc.txt", "r");

	if(fptr == NULL){
		printf("File not found!\n");
		return 0;
	}
	char ch[100]={'\0'};
	fscanf(fptr, "%s",ch); //will take input until it encounters a space char
	fgets(ch, 100,fptr); // takes input from file upto mentioned number
	//of characteres or until it encounters a newline character
	printf("%s\n", ch);
	fclose(fptr);
	return 0;
}
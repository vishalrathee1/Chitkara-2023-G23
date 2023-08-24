#include<stdio.h>

struct myStruct{
	int n1;
	int n2;
}s1,s2;

int main(){
	s1.n1 = 10;
	s1.n2 = 100;
	printf("%d %d\n", s1.n1, s1.n2);
	FILE * fptr = fopen("abcBinary", "w+b");
	if(fptr == NULL){
		printf("ERROR!");
		return 0;
	}
	fwrite(&s1, sizeof(s1), 1, fptr);
	rewind(fptr);
	fread(&s2, sizeof(s2), 1, fptr);
	printf("%d %d\n", s2.n1, s2.n2);
	fclose(fptr);
	return 0;
}
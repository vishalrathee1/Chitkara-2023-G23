#include<stdio.h>

struct Str{
	double a;
	char b;
}__attribute__((packed));

int main(){
	printf("%d\n", sizeof(Str));
	return 0;
}
#include<stdio.h>

int main(){
	const int a=10;
	// int *aptr = &a;
	// const int * aptr = &a;
	int * const aptr = &a;

	// a++;
	(*aptr)++;
	printf("%d\n", *aptr);

	return 0;
}
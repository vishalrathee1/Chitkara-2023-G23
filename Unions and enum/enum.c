#include<stdio.h>

enum week {Sunday=10, Monday, Tuesday=20, Wednesday, Thursday, Friday, Saturday} day;

int main(){
	// enum week day;
	day = Wednesday;
	printf("%d\n", day);
	return 0;
}
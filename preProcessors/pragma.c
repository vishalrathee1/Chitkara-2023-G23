#include <stdio.h>

#pragma startup_func()

void startup_func(){
	printf("Hello\n");
}

int main(){
	return 0;
}
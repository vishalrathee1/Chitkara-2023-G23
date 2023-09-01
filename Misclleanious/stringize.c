#include<stdio.h>
// #define print(x) printf("%f\n", x)
#define print(x) printf(#x)
#define greet(p1, p2) \
	printf("Hello "  #p1  " and "  #p2 "\n")

int main(){
	int a = 10;
	float PI = 3.14159;
	print(PI);
	printf("\n");

	greet(Harjot, Hardik);
	return 0;
}
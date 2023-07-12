#include <stdio.h>

struct A{
	char a;  //1
	int b;  //
	double c;  //8
};

struct B{

	char a;  //1
	double c;  //8
	int b;  // 4
	
};

struct C{
	char a;  //1
	double c;  //8
	int b;  // 4	
}__attribute__((packed));

int main()
{
	printf("%d\n", sizeof(A));
	printf("%d\n", sizeof(B));
	printf("%d\n", sizeof(C));
	return 0;
}
#include <stdio.h>

// #define A 5
#ifdef A
	#error Further compilation wont happen
#endif

int main()
{
	printf("%d", 10);
	return 0;
}
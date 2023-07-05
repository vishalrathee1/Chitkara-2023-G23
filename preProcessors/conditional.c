#include <stdio.h>

#define PI 3.14159

// #if defined(PI)
// 	#define print(x) printf("%f\n", x)
// #else
// 	#define PI 0.14159
// 	#define print(x) printf("%f\n", x+3)
// #endif

#ifdef PI 
	#define print(x) printf("%f\n", x)
#else
	#define PI 0.14159
	#define print(x) printf("%f\n", x+3)
#endif

// #undef PI // to undefine macro

int main()
{
	print(PI);
	return 0;
}
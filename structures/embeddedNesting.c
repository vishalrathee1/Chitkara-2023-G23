#include <stdio.h>
#include <string.h>

typedef struct Aeroplane{
	char builtBy[50];
	int seats;
	int capacity;
	struct Engine{
		char type[50];
		int power;
	};
	struct Engine engine1, engine2;
} Aeroplane;

int main()
{
	Aeroplane boeing747 = {"Boeing", 500, 1000};
	strcpy(boeing747.engine1.type, "Main-Engine");
	boeing747.engine1.power = 750;
	strcpy(boeing747.engine2.type, "Side-Engine");
	boeing747.engine2.power = 450;
	printf("%s\n", boeing747.engine1.type);
	return 0;
}

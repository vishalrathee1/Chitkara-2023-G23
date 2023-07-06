#include <stdio.h>
#include <string.h>

//separate nesting
typedef struct Child{
	char name[50];
	int age;
} Child;

typedef struct Parent{
	char name[50];
	int age;
	Child child1;
} Parent;



int main()
{
	Parent parent1 ={"Mohan", 45};
	strcpy(parent1.child1.name , "Vikas");
	printf("%s\n",parent1.child1.name );
	return 0;
}
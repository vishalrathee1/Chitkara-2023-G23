#include <stdio.h>
#include <string.h>

// syntax 1 
// struct StructureName { members};

struct Student {
	char name[50];
	int rollNo;
	float gpa;
};

//syntax --> 2 --> definition of structure + declaration of structure variables
struct Parent {
	char name[50];
	int age = 35;
} parent1, parent2, parents[10];

int main()
{
	//syntax --> 1
	// struct structureName structureVariable/s;
	struct Student student1; // declaration

	//definition
	// wo access members of a structure we use dot(.) operator

	// student1.name = "Vikas";
	strcpy(student1.name, "Vikas");
	student1.rollNo = 1;
	student1.gpa = 9.3;

	//printing values of structure
	printf("%s\n", student1.name );
	printf("%d\n", student1.rollNo);
	printf("%f\n", student1.gpa);


	//syntax 2
	struct Student student2 = {"Sakshi", 2, 9.6};
	printf("%s\n", student2.name );
	printf("%d\n", student2.rollNo);
	printf("%f\n", student2.gpa);

	strcpy(parent1.name, "Shivam");
	// parent1.age = 57;

	strcpy(parents[3].name, "Shubham");
	// parents[3].age	=  47;

	printf("%s\n", parents[3].name);
	printf("%s\n", parent1.name);
	printf("%d\n", parent1.age);
	printf("%d\n", parents[3].age);




	return 0;
}
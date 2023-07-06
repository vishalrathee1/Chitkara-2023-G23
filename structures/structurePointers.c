#include <stdio.h>
#include <string.h>

typedef struct Student{
	char name[50];
	int rollNo;
} Stu;

int main()
{
	//pointers syntax
	// datatype(whose pointer we want to make) * pointerName = &variable
	struct Student student1 = {"Rohit", 1};
	Stu student2 = {"Vikas", 2};
	//structure pointers
	struct Student * student1Ptr = &student1;
	Stu * student2Ptr = &student2;

	printf("%x\n", student1Ptr );
	printf("%x\n", student1.name);

	// * dereferencing a structure

	strcpy((*student2Ptr).name, "Shivam");
	printf("%s\n", (*student2Ptr).name);

	//syntax number 2
	// '->'
	printf("%s\n", student2Ptr-n>ame);

	return 0;
}
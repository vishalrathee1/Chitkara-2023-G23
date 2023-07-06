#include <stdio.h>
#include <string.h>

typedef struct Student{
		char name[50];
		int rollNo;
	} stu;

void changeName(struct Student student){
	strcpy(student.name, "Vikas");
	printf("%s\n", student.name );
}

void changeRollNo(stu student){
	student.rollNo = 10;
	printf("%d\n", student.rollNo);
}



int main()
{
	
	stu st1 = {"Rohit", 1};
	printf("%s\n", st1.name );
	printf("%d\n", st1.rollNo);
	changeName(st1);
	changeRollNo(st1);
	printf("%s\n", st1.name );
	printf("%d\n", st1.rollNo);
	return 0;
}
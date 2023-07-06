//Sort struct student according to their score and finally display the roll numbers of all the students according to their ranks

#include <stdio.h>
#include <string.h>

typedef struct Student{
	char name[50];
	int marks;
} Student;

//students array and size n
void sortAccToMarks(Student students[], int n){
	// bubble sort
	for(int i =0; i<n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			//swap according to marks
			if(students[j].marks > students[j+1].marks){
				//swap
				Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}

void printNames(Student students[], int n){
	//printing names in reverse order (highest first)
	for(int i = n-1; i>=0; i--){
		printf("%s\n", students[i].name);
	}
}

int main()
{
	Student students[10];
	for(int i = 0; i<10; i++){
		scanf("%s", students[i].name);
		scanf("%d", &students[i].marks);
	}
	sortAccToMarks(students, 10);
	printNames(students, 10);
	return 0;
}
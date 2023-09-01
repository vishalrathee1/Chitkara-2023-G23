#include<stdio.h>

typedef struct Cal{
	unsigned int date : 35;
	unsigned int : 0;
	unsigned int month : 4;
	int year;
}Cal;

int main(){
	Cal cal1 = {17, 8, 2023};
	printf("%d %d %d\n", cal1.date, cal1.month, cal1.year );
	printf("%d\n", sizeof(cal1));
	return 0;
}
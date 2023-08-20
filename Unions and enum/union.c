#include<stdio.h>

typedef union Dis{
	int dis1;
	long long int dis2;
} Dis;

int main(){
	Dis d1;
	d1.dis2 = 100000000000;
	printf("%d\n", sizeof(Dis));
	printf("%lld\n", d1.dis2);
	return 0;
}
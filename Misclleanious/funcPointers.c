#include<stdio.h>
#include<stdlib.h>


int cmp1(int a, int b){ //a--> arr[j], b--> arr[j+1]
	//for ascending order it should tell whether a>b
	return a>b;
}

int cmp2(int a, int b){
	//descending order
	return a<b;
}

void bubbleSort(int arr[], int n, int (*fptr)(int, int) ){ 
	for(int i =0; i<n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			if(fptr(arr[j], arr[j+1])){
				//one line swap
				arr[j+1] = arr[j] + arr[j+1] - (arr[j]=arr[j+1]);
			}
		}

	}

}

void print(int arr[], int n){
	for(int i =0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int add(int a , int b){
	return a+b;
}

int main(){
	int arr[] = {41, 14, 57, 3, 5 , 19, 23, 0};
	int n = sizeof(arr)/sizeof(int);

	//function pointers
	// int (*fptr)(int, int) = add;

	// printf("%p\n %p\n", &add, fptr);
	// printf("%d\n%d\n", add(2,3), fptr(2,3) );

	// fptr = cmp1;

	// bubbleSort(arr, n, fptr); //ascending
	// print(arr, n);
	// fptr = cmp2;
	// bubbleSort(arr, n, fptr); //descending
	// print(arr, n);

	int (*fptrs[3])(int, int) = {add, cmp1, cmp2};
	// fptrs[0] = add;
	// fptrs[1] = cmp1;
	// fptrs[2] = cmp2;

	// bubbleSort(arr, n, fptrs[1]); //ascending
	// print(arr, n);
	// bubbleSort(arr, n, fptrs[2]); //descending
	// print(arr, n);

	// qsort(arr, n, sizeof(int), fptrs[1]); //ascending
	// print(arr, n);
	// qsort(arr, n, sizeof(int), fptrs[2]); //descending
	// print(arr, n);


	return 0;
}
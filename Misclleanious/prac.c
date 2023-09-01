// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>

bool cmp1(int a, int b){
    return a>b;
}

bool cmp2(int a, int b){
    return a<b;
}


void bubbleSort(int arr[], int n, bool (*fptr)(int, int)){
    for(int i =0; i<n-1; i++){
        for (int j = 0; j<n-i-1; j++){
            if((*fptr)(arr[j],arr[j+1])){
                arr[j] = arr[j] + arr[j+1] - (arr[j+1]=arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {9,6,15,4,7,8,2,1};
    int n = sizeof(arr)/sizeof(int);
    bool (*fptr[2])(int, int);
    fptr[0] = cmp1;
    bubbleSort(arr, n, fptr[0]);
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    fptr[1] = cmp2;
    printf("\n");
    bubbleSort(arr, n, fptr[1]);
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int last;
	int * arr;
}Stack;

int * buildStack(int n){
	int max = 100;
	if(n>100) max = n;
	return (int *)malloc(max * sizeof(int));
}

//push
void push(Stack * st, int data){
	st->arr[st->last] = data;
	st->last++;
}

//pop
void pop(Stack * st){
	st->last--;
}


//top
int top(Stack * st){
	return st->arr[st->last-1];
}

//size
int size(Stack * st){
	return st->last;
}

//empty
int empty(Stack * st){
	return st->last == 0;
}

int main(){
	Stack st = {0};
	int n = 6; //6
	// scanf("%d",&n);
	st.arr = buildStack(n);
	push(&st, 1);push(&st, 2);push(&st, 3);push(&st, 4);
	printf("%d\n",top(&st)); // 4
	pop(&st);
	printf("%d\n",top(&st));//3
	printf("%d\n",size(&st)); //3
	// printf("%d\n",st.arr[0]);
	free(st.arr);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int last;
	int * arr;
}Stack;

int * buildStack(int n ){
	int max = 1000;
	if(n>1000) max = n;
	return (int *)malloc( max * sizeof(int));
}

//push
void push(Stack * st1, int data){
	(*st1).last++;
	// printf("%d\n", st1.last);
	(*st1).arr[(*st1).last] = data;
}

//pop
void pop(Stack * st1){
	st1->last--;
}


//top
int top(Stack * st1){
	return st1->arr[st1->last];
}


//size
int size(Stack * st1){
	return (st1->last+1);
}


//empty
int empty(Stack * st1){
	return st1->last == -1;
}

int alphaNum(char ch){
	if(ch >= 'a' && ch <= 'z') return 1;
	if(ch >= 'A' && ch <= 'Z') return 1;
	if(ch >= '0' && ch <= '9') return 1;
	return 0;
}

void infixToPostfix(char infix[], char postfix[]){
	Stack st1 = {-1};
	st1.arr = buildStack(10);//1000 // arg should be length of infix
	int i = 0, j=0;
	while(infix[i]!= '\0'){
		if(alphaNum(infix[i])){
			postfix[j++] = infix[i++];
		}
		else if(infix[i] == '('){
			push(&st1, infix[i++]);
		}
		else if(infix[i] == ')'){
			while(top(&st1)!= '('){
				char t = top(&st1);
				pop(&st1);
				postfix[j++] = t;
			}
			pop(&st1);
			i++;
		}
		else
		{
			if((empty(&st1)) || infix[i] == '^'){
				push(&st1, infix[i++]);
			}
			else{
				if((infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] == '-') && top(&st1) == '^'){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else if((infix[i] == '/' || infix[i] == '+' || infix[i] == '-') && (top(&st1) == '*')){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else if((infix[i] == '+' || infix[i] == '-') && (top(&st1) == '/')){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else{
					push(&st1, infix[i++]);
				}
			}
		}
	}
	while(!empty(&st1)){
		char t = top(&st1);
		pop(&st1);
		postfix[j++] = t;
	}
	postfix[j] = '\0';
}

int powr(int a, int b){
	if(b==0) return 1;
	return a*powr(a,b-1);
}

int postfixEval(char postfix[]){
	// printf("%s\n", postfix);
	int i =0;
	Stack st = {-1};
	st.arr = buildStack(10);
	while(postfix[i] != '\0'){
		// printf("%s\n", postfix);
		if(alphaNum(postfix[i])){
			int a = postfix[i]-'0';
			push(&st, a);
		}
		else{
			// char ch = postfix[i];
			
			int n1 = top(&st) ; pop(&st);
			int n2 = top(&st) ; pop(&st);
			int ans = 0;
			if(postfix[i] == '^'){
				ans = powr(n2,n1);
			}
			if(postfix[i] == '*'){
				ans = n2*n1;
			}
			if(postfix[i] == '/'){
				ans = n2/n1;
			}
			if(postfix[i] == '+'){
				ans = n2+n1;
			}
			if(postfix[i] == '-'){
				ans = n2-n1;
			}
			push(&st, ans);
			printf("%d\n", ans);
		}
		i++;
	}
	printf("%d\n", top(&st));
	return top(&st);
}

int main(){
	// Bracket --> Exp --> mul --> Div/Mod --> Add/Sub
	// char infix[] = "(a+(b*c/d))"; // abc*d/+, //ab+c*d/ , // abc*d/+
	char infix[] = "2+3^(4-(1+2)^2+((3-2)*4)+3)"; // -1726
	char postfix[100];
	infixToPostfix(infix, postfix);
	printf("%s\n", postfix);
	int ans = postfixEval(postfix);
	printf("%d\n", ans);
	return 0;
}
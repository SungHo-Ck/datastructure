#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct {
	int key;
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

element pop();
	
int main(void){
	return 0;
}

element pop(){
	if (top == -1)
		return stackEmpty();
	return stack[top--];
}


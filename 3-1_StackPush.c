#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct {
	int key;
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

void push(element item);

int main(void){
	return 0;
}

void push(element item){
	if (top >= MAX_STACK_SIZE-1)
		stackFull();
	stack[++top] = item;
	return;
}

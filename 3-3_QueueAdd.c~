#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 100

typedef struct {
	int key;
} element;

element queue[MAX_QUEUE_SIZE];

int rear = -1;
int front = -1;

void addq(element item);

int main(void){
	return 0;
}

void addq(element item)
{
	if (rear == MAX_QUEUE_SIZE-1)
		queueFull();
	queue[++rear] = item;
	return;
}

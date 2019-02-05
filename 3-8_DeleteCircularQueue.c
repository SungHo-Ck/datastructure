#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 100 /* maximum queue size */
typedef struct {
	int key;
} element;

element queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

element deleteq();

int main(void){
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	front = (front + 1) % MAX_QUEUE_SIZE;
	return 0;
}

element deleteq(){
	if (front == rear)
		return queueEmpty();
	front = (front + 1) % MAX_QUEUE_SIZE;
	return queue[front];
}

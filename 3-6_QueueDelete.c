#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 100

typedef struct {
	int key;
} element;

element queue[MAX_QUEUE_SIZE];

int rear = -1;
int front = -1;

element deleteq();

int main(void){
	return 0;
}

element deleteq(){
	if (front == rear)
		return queueEmpty(); /* return an error key */
	return queue[++front];
}

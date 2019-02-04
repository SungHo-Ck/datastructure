#define MAX_QUEUE_SIZE 100 /* maximum queue size */
typedef struct {
	int key;
} element;

element queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

void addq(element item);

int main(void){
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	front = (front + 1) % MAX_QUEUE_SIZE;
	return 0;
}

void addq(element item){
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	if (front == rear)
	queueFull();
	queue[rear] = item;
}

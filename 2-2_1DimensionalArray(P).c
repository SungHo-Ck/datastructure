#include<stdio.h>
#define MAX_SIZE 100

void print1(int *ptr, int rows)
float input[MAX_SIZE], answer;
int i;

void main(void){
	for (i=0; i<MAX_SIZE; i++)
		input[i] = i;
	print1(input, MAX_SIZE);
	return 0;
}

void print1(int *ptr, int rows)
{
	int i;
	printf("Address Contents\n");
	for (i=0; i<rows; i++)
		printf("%8u%5d\n", ptr + i, *(ptr + i));
	printf("\n");
}


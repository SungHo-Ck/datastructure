#include<stdio.h>
#define MAX_SIZE 3

void add(int[][MAX_SIZE],int[][MAX_SIZE],int[][MAX_SIZE],int,int);

int main(void){
	int i,j,a[MAX_SIZE][MAX_SIZE]={{1,2,3},{4,5,6},{7,8,9}},b[MAX_SIZE][MAX_SIZE]={{9,8,7},{6,5,4},{3,2,1}},c[MAX_SIZE][MAX_SIZE]={0,};
	add(a,b,c,MAX_SIZE,MAX_SIZE);
	for(i=0;i<MAX_SIZE;i++){
		for(j=0;j<MAX_SIZE;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	return 0;
}

void add(int a[][MAX_SIZE],int b[][MAX_SIZE],int c[][MAX_SIZE],int rows,int cols){
	int i,j;
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			c[i][j]=a[i][j]+b[i][j];
	return;
}


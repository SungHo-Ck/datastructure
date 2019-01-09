#include<stdio.h>

int**make2dArray(int,int);

int main(void){
	int**matrix;
	int r,c;
	scanf("%d %d",&r,&c);
	matrix=make2dArray(r,c);
	return 0;
}

int**make2dArray(int rows,int cols){
	int **x,i;
	x=malloc(sizeof(*x)*rows);
	for(i=0;i<rows;i++)
		x[i]=malloc(sizeof(**x)*cols);
	return x;
}

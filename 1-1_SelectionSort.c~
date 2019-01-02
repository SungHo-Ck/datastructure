#include<stdio.h>
#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t))

void sort(int[],int);

int main(void){
	int list[10]={3,4,6,5,1,8,0,9,2,7};
	int i, n = 10;
	for(i=0;i<n;i++)
		printf("%d ",list[i]);
	printf("\n");
	sort(list,n);
	for(i=0;i<n;i++)
		printf("%d ",list[i]);
	printf("\n");
	return 0;
}

void sort(int list[], int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(list[j] < list[min])
				min = j;
		SWAP(list[i],list[min],temp);
	}
	return;
}

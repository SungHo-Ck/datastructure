#include<stdio.h>
#define COMPARE(x,y) ((x) < (y))? -1 : (((x) == (y))? 0:1)

int binsearch(int[],int,int,int);

int main(void){
	int list[10]={1,2,5,0,566,7,8,84,23,2};
	int s,n=10;
	scanf("%d",&s);
	find=binsearch(list,s,0,n);
	if(find > 0)
		printf("find %d\n");
	else
		printf("Not Found\n");
	return 0;
}

int binsearch(int list[], int searchnum, int left, int right)
{
	int middle;
	while (left <= right) {
		middle = (left + right)/2;
		switch (COMPARE(list[middle], searchnum)) {
			case -1 :
				left = middle + 1;
				break;
			case 0 :
				return middle;
			case 1 :
				right = middle - 1;
		}
	}
	return -1;
}

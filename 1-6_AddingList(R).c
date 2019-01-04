#include<stdio.h>

float rsum(float[],int);

int main(void){
	float fsum;
	float list[10]={8.37,7.84,9.17,0.22,0.22,8.75,1.349,8.5,0.43,0.9};
	fsum=sum(list,10);
	printf("Sum : %f",sum);
	return 0;
}

float rsum(float list[],int n){
	if(n) return rsum(list,n-1)+list[n-1];
	return 0;
}

#include<stdio.h>

float sum(float[],int);

int main(void){
	float fsum;
	float list[10]={8.37,7.84,9.17,0.22,0.22,8.75,1.349,8.5,0.43,0.9};
	fsum=sum(list,10);
	printf("Sum : %f",sum);
	return 0;
}

float sum(float list[],int n){
	float tempsum=0;
	int i;
	for(i=0;i<n;i++)
		tempsum+=list[i];
	return tempsum;
}

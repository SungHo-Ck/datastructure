#include<stdio.h>
#include<stdlib.h>

int main(void){
	inti,*pi;
	floatf,*pf;
	pi=(int*)malloc(sizeof(int));
	pf=(float*)malloc(sizeof(float));
	*pi=1024;
	*pf=3.14;
	printf("aninteger=%d,afloat=%f\n",*pi,*pf);
	free(pi);
	free(pf);
	return 0;
}

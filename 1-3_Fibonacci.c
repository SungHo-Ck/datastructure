#include<stdio.h>

int fibo(int);
int rfbo(int);

int main(void){
	int n;
	scanf("%d",&n);
	printf("Iterative Function(fibonacci) : %d\n",fibo(n));
	printf("Recursive Function(fibonacci) : %d\n",rfibo(n));
	return 0;
}

int fibo(int n){
	int g,h,f,i;
	if(n>1){
		g=0;
		h=1;
		for(i=0;i<=n;i++){
			f=g+h;
			g=h;
			h=f;
		}
	}
	else f=n;
	return f;
}
int rfibo(int n){
	if(n>1)
		return rfibo(n-1)+rfibo(n-2);
	else
		return n;
}

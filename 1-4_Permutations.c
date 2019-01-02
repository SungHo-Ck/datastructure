#include<stdio.h>
#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t))

void perm(char*,int,int);

int main(void){
	char list[10]={'f','j','e','i','h','d','c','b','g','a'};
	perm(list,10,10);
	return 0;
}

void perm(char*list, int i, int n){
	int j, temp;
	if (i == n) {
		for (j=0; j<n; j++) printf("%c ", list[j]);
	}
	else {
		for (j=i; j<n; j++) {
			SWAP(list[i], list[j], temp);
			perm(list, i+1, n);
			SWAP(list[i], list[j], temp);
		}	
	}
	return;
}

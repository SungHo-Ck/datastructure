#include<stdio.h>
void attach(float coefficient, int exponent);

int main(void){
	return 0;
}

void attach(float coefficient, int exponent)
{
	if (avail >= MAX_TERMS) {
		fprintf(stderr, "Too many terms in the polynomial");
		exit(1);
	}
	terms[avail].coef = coefficient;
	terms[avail++].expon = exponent;
	return;
}

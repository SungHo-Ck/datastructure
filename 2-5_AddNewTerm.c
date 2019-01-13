#include<stdio.h>
void attach(float coefficient, int exponent);
void padd(int starta, int finisha, int startb, int finishb, int *startd, int *finishd);

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

void padd(int starta, int finisha, int startb, int finishb, int *startd, int *finishd)
{
	float coefficient;
	*startd = avail;
	while (starta <= finisha && startb <= finishb)
	switch (COMPARE(terms[starta].expon, terms[startb].expon)) {
		case -1 :
			attach(terms[startb].coef, terms[startb].expon);
			startb++;
			break;
		case 0 : /* equal exponents */
			coefficient = terms[starta].coef + terms[startb].coef;
			if (coefficient)
				attach(coefficient, terms[starta].expon);
			starta++; startb++;
			break;
		case 1 :
			attach(terms[starta].coef, terms[starta].expon);
			starta++;
	}
	for (; starta <= finisha; starta++)
		attach(terms[starta].coef, terms[starta].expon);
	for (; startb <= finishb; startb++)
		attach(terms[startb].coef, terms[startb].expon);
	*finishd =avail-1;
	return;
}

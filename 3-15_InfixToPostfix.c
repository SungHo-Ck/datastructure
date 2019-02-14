#include<stdio.h>
#include<stdlib.h>

void postfix(void);

int main(void){
	return 0;
}

void postfix(void){
	char symbol;
	int n = 0;
	int top = 0;
	stack[0] = eos;
	for (token = getToken(&symbol, &n); token != eos; token = getToken(&symbol, &n)) {
		if (token == operand)
			printf(¡°%c¡±, symbol);
		else if (token == rparan) {
			while (stack[top] != lparen)
				printToken(pop(&top));
			pop();
		}
		else {
			while (isp[stack[top]] >= icp[token])
				printToken(pop());
				push(token);
		}
	}
	while ( (token = pop()) != eos)
		printToken(token);
	printf(¡°\n¡±);
}

#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100

typedef enum {lparen, rparen, plus, minus, times, divide, mod, eos, operand} precedence;
int stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE];

precedence getToken(char *symbol, int *n);

int main(void){
	return 0;
}

precedence getToken(char *symbol, int *n){
	*symbol = expr[(*n)++];
	switch (*symbol) {
		case ¡®(¡¯ : return lparen;
		case ¡®)¡® : return rparen;
		case ¡®+¡¯ : return plus;
		case ¡®-¡¯ : return minus;
		case ¡®/¡¯ : return divide;
		case ¡®*¡¯ : return times;
		case ¡®%¡¯ : return mod;
		case ¡® ¡¯ : return eos;
		default : return operand; /* no error checking, default is operand */
	}
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAX_SIZE 100

char string1 [MAX_SIZE], *s = string1;
char string2 [MAX_SIZE], *t = string2;

void strnins(char *s, char *t, int i);

int main(void){
	return 0;
}

void strnins(char *s, char *t, int i){
	char string[MAX_SIZE], *temp = string;
	if (i<0 && i>strlen(s)) {
		fprint(stderr, "Position is out of bounds ");
		exit(1);
	}
	if (!strlen(s))
		strcpy(s, t);
	else if (strlen(t)) {
		strncpy(temp, s, i);
		strcat(temp, t);
		strcat(temp, (s+i));
		strcpy(s, temp);
	}
}

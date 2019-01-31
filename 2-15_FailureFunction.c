#include <stdio.h>
#include <string.h>
#define max_string_size 100
#define max_pattern_size 100
int pmatch();
void fail();
int failure[max_pattern_size];
char string[max_string_size];
char pat[max_pattern_size];

void fail(char *pat);

int main(void){
	return 0;
}

void fail(char *pat){
	int i, n = strlen(pat);
	failure[0] = -1;
	for (j = 1; j < n; j++) {
		i = failure[j-1];
		while ((pat[j] != pat[i+1]) && (i >= 0))
			i = failure[i];
		if (pat[j] == pat[i+1])
			failure[j] = i+1;
		else failure[j] = -1;
	}
	return;
}

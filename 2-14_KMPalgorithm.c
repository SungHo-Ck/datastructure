#include <stdio.h>
#include <string.h>
#define max_string_size 100
#define max_pattern_size 100
int pmatch();
void fail();
int failure[max_pattern_size];
char string[max_string_size];
char pat[max_pattern_size];

int pmatch(char *string, char *pat);

int main(void){
	return 0;
}

int pmatch(char *string, char *pat){
	int i = 0, j = 0;
	int lens = strlen(string);
	int lenp = strlen(pat);
	while (i < lens && j < lenp) {
		if (string[i] == pat[j]) {
			i++;
			j++;
		}
		else if (j == 0) i++;
		else j = failure[j-1] + 1;
	}
	return ( (j == lenp) ? (i - lenp) : -1);
}

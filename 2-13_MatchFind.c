#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define MAX_SIZE 100
char pat[MAX_SIZE], string[MAX_SIZE], *t;

int nfind(chaqr * string, char *pat);

int main(void){
	return 0;
}

int nfind(chaqr * string, char *pat){
int i, j, start = 0;
int lasts = strlen(string)-1;
int lastp = strlen(pat)-1;
int endmatch = lastp;
for (i = 0; endmatch <= lasts; endmatch++, start++) {
if (string[endmatch] == pat [lastp])
for (j = 0, i = start; j < lastp && string[i] == pat[j]; i++, j++)
;
if (j == lastp) return start;
}
return -1;
}

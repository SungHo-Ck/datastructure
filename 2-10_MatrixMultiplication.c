#include<stdio.h>
#include<string.h>

void mmult(term a[], term b[], term d[]);

int main(void){
	return 0;
}

void mmult(term a[], term b[], term d[]){
	int i, j, column, totalb = b[0].value, totald = 0;
	int rows_a = a[0].row, cols_a = a[0].col, totala = a[0].value;
	int cols_b = b[0].col;
	int row_begin = 1, row = a[1].row, sum = 0;
	term new_b[MAX_TERMS];
	if (col_a != b[0].row) {
		fprintf(stderr, ¡°Incompatible matrices\n¡±);
		exit(1);
	}
	fast_transpose(b, new_b);
	a[totala+1].row = rows_a;
	new_b[totalb+1].row = cols_b; new_b[totalb+1].col = -1;
	for (i = 1; i <= totala; ) {
		column = new_b[1].row;
		for (j = 1; j <= totalb+1; ) {
			if (a[i].row != row) {
				storesum(d, &totald, row, column, &sum);
				i = row_begin;
				for ( ; new_b[j].row == column; j++);
				column = new_b[j].row;
			}
			else if (new_b[j].row != column) {
				storesum(d, &totald, row, column, &sum);
				i = row_begin;
				column = new_b[j].row;
			}
			else switch (COMPARE(a[i].col, new_b[j].col)) {
				case ?1 :
					i++; break;
				case 0 :
					sum += (a[i++].value * new_b[j++].value);
					break;
				case 1 :
					j++;
			}
			for ( ; a[i].row == row; i++);
			row_begin = i; row = a[i].row;
		}
		d[0].row = row_a; d[0].col = cols_b;
		d[0].value = totald;
	}
	return;
}

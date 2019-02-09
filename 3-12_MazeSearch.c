#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct {
	short int row;
	short int col;
	short int dir;
} element;

typedef struct {
	short int vert;
	short int horiz;
} offsets;

offsets move[8];
element stack[MAX_STACK_SIZE];

void path(void);

int main(void){
	while (stack is not empty) {
		<row,col,dir> = delete from top of stack;
		while (there are more moves from current position) {
			<nextRow, nextCol> = coordinates of next move;
			dir = direction of move;
			if ((nextRow==EXIT_ROW) && (nextCol==EXIT_COL))
				success;
			if ((maze[nextRow][nextCol]==0) &&(mark[nextRow][nextCol]==0)) {
				mark[nextRow][nextCol] = 1;
				add <row,col,dir> to the top of the stack;
				row = nextRow; col = nextCol; dir = north;
			}
		}
	}
	printf("No path found");
	return 0;
}


void path(void){
	int i, row, col, nextRow, nextCol, dir, found = FALSE;
	element position;
	mark[1][1] = 1; top = 0;
	stack[0].row = 1; stack[0].col = 1; stack[0].dir = 1;
	while (top > -1 && !found) {
		position = pop();
		row = position.row; col = position.col, dir = position.dir;
		while (dir < 8 && !found) {
			nextRow = row + move[dir].vert;
			nextCol = col + move[dir].horiz;
			if (nextRow == EXIT_ROW && nextCol == EXIT_COL)
				found = TRUE;
			else if (!maze[nextRow][nextCol] && !mark [nextRow][nextCol]) {
				mark [nextRow][nextCol] = 1;
				position.row = row; position.col = col;
				position.dir = ++dir;
				push(position);
				row = nextRow; col = nextCol; dir = 0;
			}
			else ++dir;
		}
	}
	if (found) {
		printf(¡°The path is : \n¡±);
		printf(¡°row col \n¡±);
		for (i = 0; i <= top; i++)
			printf(¡°%2d%5d¡±, stack[i].row, stack[i].col);
		printf(¡°%2d%5d\n¡±, row, col);
		printf(¡°%2d%5d\n¡±, EXIT_ROW, EXIT_COL);
	}
	else printf(¡°The maze does not have a path \n¡±);
}

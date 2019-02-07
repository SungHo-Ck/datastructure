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

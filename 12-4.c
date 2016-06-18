#include<stdio.h>

#define ROW 5
#define COL 5

struct point { int row,col; } stack[512];
int top;

void push(struct point p)
{
    stack[top++] = p;
}

struct point pop(void)
{
   return stack[--top];
}

int is_empty(void)
{
    return top == 0;
}

int maze[ROW][COL] = {
    0,1,0,0,1,
    0,1,0,1,0,
    0,0,0,1,0,
    1,0,1,1,0,
    0,0,0,0,0
};

void print_maze(void)
{
    int i,j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf("%d ",maze[i][j]);
        putchar('\n');
    }
    printf("*************\n");
}

struct point mompoint[ROW][COL] = {
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
    {{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}}
};

void next(int row, int col, struct point pre)
{
    struct point next_point = {row, col};
    maze[row][col] = 2;
    mompoint[row][col] = pre;
    push(next_point);
}

int main(void)
{
    struct point p = {0,0};
    maze[p.row][p.col] = 2;
    push(p);

    while (!is_empty()) {
        p = pop();
        if (p.row == ROW - 1 && p.col == COL -1)
            break;
        if (p.col + 1 < COL && maze[p.row][p.col + 1] == 0)
            next(p.row,p.col+1,p);
        if (p.row + 1 < ROW && maze[p.row + 1][p.col] == 0)
            next(p.row+1,p.col,p);
        if (p.col -1 >= 0 && maze[p.row][p.col - 1] == 0)
            next(p.row,p.col-1,p);
        if (p.row - 1 >= 0 && maze[p.row - 1][p.col] == 0)
            next(p.row-1,p.col,p);
        print_maze();
    }
    if (p.row == ROW -1 && p.col == COL - 1) {
        printf("(%d, %d)\n",p.row,p.col);
        while (mompoint[p.row][p.col].row != -1) {
            p = mompoint[p.row][p.col];
            printf("(%d, %d)\n",p.row,p.col);
        }
    } else 
        printf("No path!\n");

    return 0;
}

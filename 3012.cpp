#include <stdio.h>
#include <stdbool.h>

#define N 9

// 检查在给定位置填入num是否有效
bool is_valid(int board[N][N], int row, int col, int num)
{
    // 检查行
    for (int i = 0; i < N; i++)
    {
        if (board[row][i] == num)
        {
            return false;
        }
    }
    // 检查列
    for (int i = 0; i < N; i++) 
    {
        if (board[i][col] == num)
        {
            return false;
        }
    }
    // 检查3x3小宫格
    int start_row = row - row % 3;
    int start_col = col - col % 3;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i + start_row][j + start_col] == num) 
            {
                return false;
            }
        }
    }
    return true;
}

// 使用回溯算法求解数独
bool solve_sudoku(int board[N][N])
{
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++) 
        {
            if (board[row][col] == 0)
            {  // 找到一个空白位置
                for (int num = 1; num <= 9; num++)
                {  // 尝试填入1到9
                    if (is_valid(board, row, col, num))
                    {
                        board[row][col] = num;  // 填入数字
                        if (solve_sudoku(board)) 
                        {  // 递归求解
                            return true;
                        }
                        else
                        {
                            board[row][col] = 0;  // 回溯
                        }
                    }
                }
                return false;  // 尝试所有数字都不行，返回false
            }
        }
    }
    return true;  // 所有位置都填满，求解成功
}

// 打印计算后的数独棋盘
void print_board(int board[N][N])
{
    for (int row = 0; row < N; row++) 
    {
        for (int col = 0; col < N; col++)
        {
            printf("%2d ", board[row][col]);
            if ((col + 1) % 3 == 0) 
            {
                printf("| ");
            }
        }
        printf("\n");
        if ((row + 1) % 3 == 0) 
        {
            printf("--------------------------------\n");
        }
    }
}

//打印计算前的数独棋盘
void init_board(int board[N][N])
{
    int row, col;
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            printf("%2d ", board[row][col]);
            if ((col + 1) % 3 == 0)
                printf("| ");
        }
        printf("\n");
        if ((row + 1) % 3 == 0)
            printf("--------------------------------\n");
    }
}

int main() {
    int board[N][N];
    char judge;
    printf("请逐行输入要求解的数独：\n");
    for (int row = 0; row < N; row++)
    {
        printf("请输入第%d行的9个数字，空格处请写0  :> ",row+1);
        for (int col = 0; col < N; col++)
            scanf("%d", &board[row][col]);
        printf("\n");
    }
    printf("目前要解的数独是：\n");
    init_board(board);
    printf("是否是正确的？(y or n):>");
    getchar();
    scanf("%c", &judge);
    if (judge == 'y')
    {
        if (solve_sudoku(board)) 
        {
            printf("以下是结果：\n");
            print_board(board);
        }
        else
        {
            printf("不存在解\n");
        }
    }
    return 0;
}
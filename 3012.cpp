#include <stdio.h>
#include <stdbool.h>

#define N 9

// ����ڸ���λ������num�Ƿ���Ч
bool is_valid(int board[N][N], int row, int col, int num)
{
    // �����
    for (int i = 0; i < N; i++)
    {
        if (board[row][i] == num)
        {
            return false;
        }
    }
    // �����
    for (int i = 0; i < N; i++) 
    {
        if (board[i][col] == num)
        {
            return false;
        }
    }
    // ���3x3С����
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

// ʹ�û����㷨�������
bool solve_sudoku(int board[N][N])
{
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++) 
        {
            if (board[row][col] == 0)
            {  // �ҵ�һ���հ�λ��
                for (int num = 1; num <= 9; num++)
                {  // ��������1��9
                    if (is_valid(board, row, col, num))
                    {
                        board[row][col] = num;  // ��������
                        if (solve_sudoku(board)) 
                        {  // �ݹ����
                            return true;
                        }
                        else
                        {
                            board[row][col] = 0;  // ����
                        }
                    }
                }
                return false;  // �����������ֶ����У�����false
            }
        }
    }
    return true;  // ����λ�ö����������ɹ�
}

// ��ӡ��������������
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

//��ӡ����ǰ����������
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
    printf("����������Ҫ����������\n");
    for (int row = 0; row < N; row++)
    {
        printf("�������%d�е�9�����֣��ո���д0  :> ",row+1);
        for (int col = 0; col < N; col++)
            scanf("%d", &board[row][col]);
        printf("\n");
    }
    printf("ĿǰҪ��������ǣ�\n");
    init_board(board);
    printf("�Ƿ�����ȷ�ģ�(y or n):>");
    getchar();
    scanf("%c", &judge);
    if (judge == 'y')
    {
        if (solve_sudoku(board)) 
        {
            printf("�����ǽ����\n");
            print_board(board);
        }
        else
        {
            printf("�����ڽ�\n");
        }
    }
    return 0;
}
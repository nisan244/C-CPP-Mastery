// 18-6 Diagonal Matrix using 2D Array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j) // (i+j == row-1)
            {
                continue;
            }

            if (ar[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal\n");  //Secondary Diagonal
    }
    else
    {
        printf("Not Diagonal\n");  //Not Secondary Diagonal
    }

    return 0;
}
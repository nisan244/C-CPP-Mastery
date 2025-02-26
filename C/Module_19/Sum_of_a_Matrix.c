// 19-2 Sum of a Matrix

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col], ar_2[row][col], ar_3[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar_2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ar_3[i][j] = ar[i][j] + ar_2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ar_3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//DONE
//Accepted
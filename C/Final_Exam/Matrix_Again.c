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
        // printf("\n");
    }
    for (int j = 0; j < col; j++)
    {

        printf("%d ", ar[row - 1][j]);
    } 
    printf("\n");

    for (int i = 0; i < row; i++)
    {

        printf("%d ", ar[i][col - 1]);
    }
    printf("\n");

    return 0;
}



//DONE
//Accepted
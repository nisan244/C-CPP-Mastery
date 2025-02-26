//  18-3 2D Array Printing by Row and Column

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int row , col;
//     scanf("%d %d", &row, &col);
//     int ar[row] [col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j <col; j++)
//         {
//             scanf("%d", &ar[i][j]);
//         }
//         printf("\n");

//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d ", ar[i][j]);
//         }
//         printf("\n");

//     }

//     return 0;
// }


//----------------- Row printing ---------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int row, col;
//     scanf("%d %d", &row, &col);
//     int ar[row][col];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d", &ar[i][j]);
//         }
//         printf("\n");
//     }
//     int e;
//     scanf("%d", &e);
//     for (int i = 0; i < col; i++)
//     {

//         printf("%d ", ar[e][i]);
//     }
//     printf("\n");

//     return 0;
// }


//----------------- Column printing ---------------


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
        printf("\n");
    }
    int e;
    scanf("%d", &e);
    for (int i = 0; i < row; i++)
    {

        printf("%d ", ar[i][e]);
    }
    printf("\n");

    return 0;
}
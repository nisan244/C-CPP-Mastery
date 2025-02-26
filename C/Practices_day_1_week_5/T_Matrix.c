#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int count = 0;
    int count_2 = 0;
    for (int i = 0; i < n; i++)
    {

        count += ar[i][i];
        count_2 += ar[i][n - 1 - i];
    }
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             count += ar[i][j];
    //         }
    //         else if (i + j == n - 1)
    //         {
    //             count_2 += ar[i][n - 1 - i];
    //         }
    //     }
    // }

    // printf("%d %d\n", count, count_2);

    int final_value = abs(count - count_2);

    printf("%d\n", final_value);

    return 0;
}


//DONE
// Accepted
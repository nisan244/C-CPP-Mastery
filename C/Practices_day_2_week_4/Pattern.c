//----------- 13-4 Pattern 4 ------------

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, space, k;
    scanf("%d", &n);

    space = n - 1;
    k = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("-");
            }

            if (i <= n - 1)
            {
                space--;
                k += 2;
            }
            else
            {
                space++;
                k -= 2;
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= k; j++)
            {
                printf("#");
            }

            if (i <= n - 1)
            {
                space--;
                k += 2;
            }
            else
            {
                space++;
                k -= 2;
            }
            printf("\n");
        }
    }
    return 0;
}

//Done
//Accepted

//------------------------

//-----------------------------------------

// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++)
//     {

//         for (int j = 1; j < i; j++)
//         {
//             printf(" ");
//         }
//         printf("#");

//         for (int j = 1; j <= 2 * (N - i) - 1; j++)
//         {
//             printf("-");
//         }
//         if (i < N)
//         {
//             printf("#");
//         }

//         printf("\n");
//     }

//     for (int i = N - 1; i >= 1; i--)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             printf(" ");
//         }

//         printf("#");

//         for (int j = 1; j <= 2 * (N - i) - 1; j++)
//         {
//             printf("-");
//         }
//         if (i < N)
//         {
//             printf("#");
//         }

//         printf("\n");
//     }

//     return 0;
// }

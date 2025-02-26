#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

//DONE
//Accepted


//----------------------
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);

//     int m;
//     int A[10010];
//     int search;
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &m);

//         for (int i = 0; i < m; i++)
//         {
//             scanf("%d", &A[i]);
//         }
//         scanf("%d", &search);
//         for (int i = 0; i < m; i++)
//         {
//             if (A[i] == search)
//             {
//                 count = 1;
//                 break;
//             }
//             else
//             {
//                 count = 0;
//             }
//         }
//         if (count == 1)
//         {
//             printf("YES\n");
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }

//     return 0;
// }
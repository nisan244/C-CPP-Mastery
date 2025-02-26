#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[110], B[110];
    scanf("%s %s", &A, &B);

    int value = strcmp(A, B);
    printf("%d\n", value);

    if (value < 0)
    {
        printf("%s", A);
    }
    else if (value > 0)
    {
        printf("%s", B);
    }
    else
    {
        printf("%s", A);
    }

    return 0;
}

// DONE
// Accepted

//------------------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char A[110], B[110];
//     scanf("%s %s", &A, &B);

//     int i = 0;
//     while (1)
//     {
//         if (A[i] == '\0' && B[i] == '\0')
//         {
//             printf("%s\n", A);
//             break;
//         }
//         else if (A[i] == '\0')
//         {
//             printf("%s", A);
//             break;
//         }
//         else if (B[i] == '\0')
//         {
//             printf("%s", B);
//             break;
//         }

//         if (A[i] == B[i])
//         {
//             i++;
//         }
//         else if (A[i] < B[i])
//         {
//             printf("%s", A);
//             break;
//         }
//         else if (A[i] > B[i])
//         {
//             printf("%s", B);
//             break;
//         }
//         else
//         {
//             printf("%s\n", A);
//         }
//     }
//     return 0;
// }

// DONE
// Accepted
// Same
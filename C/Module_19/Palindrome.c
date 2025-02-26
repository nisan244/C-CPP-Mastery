// // 19-7 Palindrome

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char A[1010], B[1010];
//     scanf("%s", &A);
//     strcpy(B, A);
//     int i = 0, j = strlen(B) - 1;
//     while (i < j)
//     {
//         char temp = B[i];
//         B[i] = B[j];
//         B[j] == temp;
//         i++;
//         j--;
//     }
//     if (strcmp(A, B) == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }

//----------------------

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[1010];
    scanf("%s", &A);

    int i = 0, j = strlen(A) - 1;
    int flag = 1;

    while (i < j)
    {
        if (A[i] != A[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}

//DONE
//Accepted
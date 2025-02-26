// //----------------- String Lexicographical Comparison -------------------------
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
//             printf("Equal to");
//             break;
//         }
//         else if (A[i] == '\0')
//         {
//             printf("A small");
//             break;
//         }
//         else if (B[i] == '\0')
//         {
//             printf("B small");
//             break;
//         }

//         if (A[i] == B[i])
//         {
//             i++;
//         }
//         else if (A[i] < B[i])
//         {
//             printf("A small");
//             break;
//         }
//         else{
//             printf("B small");
//             break;
//         }     
//     }
//     return 0;
// }


//------------------ Build in function use same program --------------------------

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char A[110], B[110];
//     scanf("%s %s", &A, &B);

//     int value = strcmp(A, B);
//     printf("%d", value);

//     // if (value < 0)
//     // {
//     //     printf("A small");
//     // }
//     // else if (value > 0)
//     // {
//     //     printf("B small");
//     // }
//     // else{
//     //     printf("Same");
//     // }
    
//     return 0;
// }

////////////////////////////////////////////////




#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // char ar[100010];
    // fgets(ar, 100010, stdin);
    char A[100], B[100];
    scanf("%s %s", &A, &B);
    int A_len = strlen(A);
    int B_len = strlen(B);
    for (int i = 0; A[i] != A_len; i++)
    {
        // if (A[i] >= 'a' && A[i] <= 'z')
        // {
        //     A[i] -= 32;
        // }
        if (A[i] >= 'A' && A[i] <= 'Z')
        {
            A[i] += 32;
        }
    }
    // printf("%s\n", A);
    

    for (int i = 0; A[i] != B_len; i++)
    {
        // if (A[i] >= 'a' && A[i] <= 'z')
        // {
        //     A[i] -= 32;
        // }
        if (B[i] >= 'A' && B[i] <= 'Z')
        {
            B[i] += 32;
        }
    }
    // printf("%s\n", B);
    for (int i = 0; ; i++)
    {
        if (A[i] == '\0' && B[i] == '\0')
        {
            printf("0");
            break;
        }
        else if (A[i] == '\0')
        {
            printf("-1");
            break;
        }
        else if (B[i] == '\0')
        {
            printf("1");
            break;
        }


        if (A[i] == B[i])
        {
            printf("0");
            break;
        }
        // if (A[i] == B[i])
        // {
        //     i++;
        // }
        else if (A[i] < B[i])
        {
            printf("-1");
            break;
        }
        else{
            printf("1");
            break;
        }          
    }
    
    return 0;
}

//DONE
//Accepted
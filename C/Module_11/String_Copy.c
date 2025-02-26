// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char A[100], B[100];
//     scanf("%s %s", &A, &B);

//     for (int i = 0; i <= strlen(B); i++)
//     {
//         // printf("%d", i);
//         A[i] = B[i];
//     }
//     printf("%s %s", &A, &B);
 
//     return 0;
// }



//---------------- Shortcut String Copy -----------------------

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[100], B[100];
    scanf("%s %s", &A, &B);

    strcpy(A, B);
    printf("%s %s", &A, &B);
 
    return 0;
}
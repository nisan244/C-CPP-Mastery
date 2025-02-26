//11-4 String Concatenation

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char A[100], B[100];
//     scanf("%s %s", &A, &B);
//     int k = strlen(A);

//     for (int i = 0; i <= strlen(B); i++)
//     {
//         A[k] = B[i];
//         k++;
//     }
//     printf("%s %s", A, B);

//     return 0;
// }



//------------------ Build in function use same program --------------------------


//11-4 String Concatenation

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char A[100], B[100];
//     scanf("%s %s", &A, &B);
//     // int k = strlen(A);

//     strcat(A, B);

//     printf("%s %s", A, B);

//     return 0;
// }


//---------------------- Other Example ----------------------

//11-4 String Concatenation

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[100], B[100];
    scanf("%s %s", &A, &B);
    int k = strlen(A);

    for (int i = 0; i <= 3; i++)
    {
        A[k] = B[i];
        k++;
    }
    A[k] = '\0';
    printf("%s %s", A, B);

    return 0;
}

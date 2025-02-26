// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     char s[1000000];
//     scanf("%s", &s);

//     long long int count = 0;
//     for (int i = 0; i <= strlen(s); i++)
//     {
//         count++;
//         if (s[i] == '-')
//         {
//             break;
//         }
//     }

//     if (count == a + 1)
//     {
//         printf("Yes");
//     }
//     else if(count <= 9)
//     {
//         printf("No");
//     }
//     return 0;
// }

//------------------

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     char s[1000000];
//     fgets(s, sizeof(s), stdin);

//     long long int count = 0;
//     for (int i = 0; i < strlen(s); i++) {
//         count++;
//         if (s[i] == '-') {
//             break;
//         }
//     }

//     if (count == a+1) {
//         printf("Yes");
//     } else if (count <= 9) {
//         printf("No");
//     }

//     return 0;
// }

//------------

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);

//     char S[1000]; // A + B + 1 <= 20, so we can allocate enough space.

//     scanf("%s", S);
//     int len = strlen(S);

//     if (S[A] != '-' || len != A + B + 1) {
//         printf("No\n");
//         return 0;
//     }

//     for (int i = 0; S[i] != '\0'; i++) {
//         if (i != A && (S[i] < '0' || S[i] > '9')) {
//             printf("No\n");
//             return 0;
//         }
//     }

//     printf("Yes\n");

//     return 0;
// }

//----------

#include <stdio.h>
#include <string.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    char ar[100];
    scanf("%s", ar);

    int len = strlen(ar);

    if (len != A + B + 1 || ar[A] != '-')
    {
        printf("No\n");
        return 0;
    }

    int value = 1;

    for (int i = 0; ar[i] != '\0'; i++)
    {
        if (i != A && (ar[i] < '0' || ar[i] > '9'))
        {
            value = 0;
            break;
        }
    }
    // printf("%d\n", len);

    if (value == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}

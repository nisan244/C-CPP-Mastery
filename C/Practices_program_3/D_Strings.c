// #include <stdio.h>
// #include <string.h>

// int main() {

//     char A[50], B[50];
//     scanf("%s %s", A, B);

//     int first_len = strlen(A);
//     int second_len = strlen(B);

//     printf("%d %d\n", first_len, second_len);

//     printf("%s%s\n", A, B);

//     char temp = A[0];
//     A[0] = B[0];
//     B[0] = temp;

//     printf("%s %s\n", A, B);

//     return 0;
// }

// //DONE
// //Accepted

///    OmShantihari
///    Author: Sujan Mridha
///    CSE, University of Barishal#include<stdio.h>
#include <string.h>
int main()
{
    int x, i, o, l;
    x = 0;
    char a[200], b[200];
    scanf("%s %s", &a, &b);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        o = a[i] - b[i];
        if (o != 0 && o != 32 && o != -32)
        {
            if (a[i] <= 'z' && b[i] <= 'z' && a[i] >= 'a' && b[i] >= 'a')
            {
                if (a[i] > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'Z' && b[i] <= 'Z' && a[i] >= 'A' && b[i] >= 'A')
            {
                if (a[i] > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'Z' && a[i] >= 'A' && b[i] <= 'z' && b[i] >= 'a')
            {
                if (a[i] + 32 > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'z' && a[i] >= 'a' && b[i] <= 'Z' && b[i] >= 'A')
            {
                if (a[i] - 32 > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
        }
    }
    printf("%d\n", x);
    return 0;
}

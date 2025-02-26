#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < 0)
        {
            printf("%d ", (A[i] = 2));
        }
        else if (A[i] == 0)
        {
            // printf("0 ");
            printf("%d ", A[i]);
        }
        else
        {
            printf("%d ", A[i] = 1);
        }
    }
    return 0;
}
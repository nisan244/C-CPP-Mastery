#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int minimum = INT_MAX, pos;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < minimum)
        {
            minimum = A[i];
            pos = i + 1;
        }
    }
    printf("%d %d", minimum, pos);

    return 0;
}



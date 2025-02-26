#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;
    long long int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
        sum += A[i];
    }
    // printf("%d", sum);

    if (sum < 0)
    {
        printf("%lld", (sum * (-1)));
    }
    else
    {
        printf("%lld\n", sum);
    }

    return 0;
}
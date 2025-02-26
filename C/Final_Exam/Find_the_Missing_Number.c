#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    long long int M, A, B, C;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int value = (M / (A * B * C));
        if (A * B * C * value == M)
        {
            printf("%lld\n", value);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}

// DONE
// Accepted
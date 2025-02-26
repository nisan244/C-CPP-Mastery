#include <stdio.h>

long long int sum(int *ar, int n, int i)
{
    if (n == i)
    {
        return 0;
    }
    long long int value_1 = sum(ar, n, i + 1);

    return ar[i] + value_1;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    long long int value = sum(ar, n, 0);
    printf("%lld\n", value);

    return 0;
}

//DONE
// Accepted
#include <stdio.h>

void fun(int *ar, int n, int i)
{
    if (i == n) // Base case
    {
        return;
    }

    printf("%d\n", ar[i]);
    fun(ar, n, i + 1);
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
    fun(ar, n, 0);

    return 0;
}
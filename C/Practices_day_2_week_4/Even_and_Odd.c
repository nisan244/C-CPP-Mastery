#include <stdio.h>

void odd_even()
{
    int n, even_count = 0, odd_count = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("%d %d", even_count, odd_count);
}

int main(int argc, char const *argv[])
{
    odd_even();

    return 0;
}

// Done
// Accepted
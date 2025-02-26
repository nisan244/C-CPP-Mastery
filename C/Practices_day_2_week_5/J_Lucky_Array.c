#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int minimum = INT_MAX, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < minimum)
        {
            minimum = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == minimum)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    // printf("%d %d\n", minimum, count);

    return 0;
}

// DONE
// Accepted
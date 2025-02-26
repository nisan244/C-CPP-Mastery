#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);

    int value;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        if (value > 0)
        {
            even += value;
        }
        else if (value < 0)
        {
            odd += value;
        }
    }
    printf("%d %d", even, odd);

    return 0;
}

// DONE
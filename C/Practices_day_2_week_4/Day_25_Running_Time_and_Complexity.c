#include <stdio.h>
#include <math.h>

int prime_number(int n)
{
    int flag = 1;

    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    // for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(int argc, char const *argv[])
{
    int i, t, n;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        if (prime_number(n))
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not prime\n");
        }
    }

    return 0;
}

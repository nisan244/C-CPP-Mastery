#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n, K;
    scanf("%d %d", &n, &K);

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ar[i]);
    // }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                // swap number
                long long int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    // printf("After sorting : \n");
    // for (i = 0; i < size; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    // printf("\n");

    long long int sum = 0;
    for (int i = 0; i < K; i++)
    {
        if (K > 0)
        {
            sum += ar[i];
        }
    }
    printf("%lld\n", sum);

    return 0;
}

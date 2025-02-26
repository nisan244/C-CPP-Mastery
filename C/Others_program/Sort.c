#include <stdio.h>

void new_fun(int n, int *ar)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void insertion_Sort(int n, int *ar)
{
    int poss = n - 1;
    int new_arr = ar[poss];
    while (new_arr < ar[poss - 1])
    {
        ar[poss] = ar[poss - 1];
        poss--;
        new_fun(n, ar);
    }
    ar[poss] = new_arr;
    new_fun(n, ar);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    insertion_Sort(n, ar);
    // new_fun(n, ar);

    return 0;
}

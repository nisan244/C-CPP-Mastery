
#include <stdio.h>

void new_fun(int n, int *ar)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
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

    int poss = n - 1;
    int new_arr = ar[poss];

    while (new_arr < ar[poss - 1])
    {
        ar[poss] = ar[poss - 1];
        poss--;
        new_fun(n, ar);
    }
    ar[poss] = new_arr;
    // ar[poss] = 50;
    new_fun(n, ar);

    return 0;
}

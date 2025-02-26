// 19-6 Max Number

#include <stdio.h>
#include <limits.h>

int Max_Num(int *ar, int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int max = Max_Num(ar, n, i + 1);
    if (ar[i] > max)
    {
        return ar[i];
    }
    else
    {
        return max;
    }
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
    int value = Max_Num(ar, n, 0);
    printf("%d\n", value);

    return 0;
}

//DONE
//Accepted
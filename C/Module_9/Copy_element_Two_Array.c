#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int first_arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &first_arr[i]);
    }
    int m;
    scanf("%d", &m);
    int second_arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &second_arr[i]);
    }

    int total = (n + m);
    int sum[total];

    for (int i = 0; i < n; i++)
    {
        sum[i] = first_arr[i];
    }

    int i = n;
    
    for (int j = 0; j < m; j++)
    {
        sum[i] = second_arr[j];
        i++;
    }
    for (int i = 0; i < total; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
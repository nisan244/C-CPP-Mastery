#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n];
    int count_ar[m+1];

    for (int i = 0; i < m+1; i++)
    {
        count_ar[i] = 0;
    } 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        count_ar[A[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count_ar[i]);
    }
    
    return 0;
}

//DONE
//Accepted
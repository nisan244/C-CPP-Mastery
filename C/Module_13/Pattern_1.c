//------ 13.1 Pattern 1 ------------------


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, k = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");   
    }
    return 0;
}
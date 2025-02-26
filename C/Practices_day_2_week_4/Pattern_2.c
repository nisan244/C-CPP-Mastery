#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int space = n-1, k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = k; j >= 1; j--)
        {
            printf("%d", j);
        }
        space--;
        k++;
        printf("\n");
        
    }
    return 0;
}

//Done
//Accepted
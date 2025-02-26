// 19-3 Print Digits using Recursion

#include <stdio.h>

void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    int value = n % 10;
    fun(n / 10);
    printf("%d ", value);
}

int main(int argc, char const *argv[])
{

    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}

//DONE
//Accepted
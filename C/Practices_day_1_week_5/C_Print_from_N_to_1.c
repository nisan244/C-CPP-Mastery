#include <stdio.h>

void fun(int n)
{
    if (n == 1)
    {
        return;
    }

    printf("%d ", n);
    fun(n - 1);
    // printf("\n");

}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    fun(n);
    printf("1");

    return 0;
}

//DONE
// Accepted

// 19-5 Factorial

#include <stdio.h>

long long int fact(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int value = fact(n - 1);
    return value * n;
}

int main(int argc, char const *argv[])
{
    long long int n;
    scanf("%lld", &n);
    long long int final_value = fact(n);
    printf("%lld\n", final_value);

    return 0;
}

//DONE
//Accepted
#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int A, B, K;
    scanf("%lld %lld %lld", &A, &B, &K);

    if (A % K == 0 && B % K == 0)
    {
        printf("Both");
    }
    else if (A % K == 0)
    {
        printf("Memo");
    }
    else if(B % K == 0)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}

//DONE
//Accepted
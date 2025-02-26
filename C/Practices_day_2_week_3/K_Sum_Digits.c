#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char A[n];
    int sum = 0;

    scanf("%s", &A);
    
    for (int i = 0; i < n; i++)
    {
        sum += A[i]-48;
    }
    printf("%d\n",  sum);
    
    return 0;
}

//DONE
//Accepted
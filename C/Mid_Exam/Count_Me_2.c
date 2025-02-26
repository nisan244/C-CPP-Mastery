#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[100010];
    scanf("%s", &A);
    int len = strlen(A);
    int count = 0;
 
    for (int i = 0; A[i] != '\0'; i++)
    {    
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            count++;
        }
    }
    int eqal = len - count;
    printf("%d", eqal);

    return 0;
}

//DONE
//Accepted
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char A[10010];
    scanf("%s", A);
    int count[26] = {0};
    for (int i = 0; i < strlen(A); i++)
    {
        int value = A[i] - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }   
    }

    return 0;
}

//DONE
//Accepted
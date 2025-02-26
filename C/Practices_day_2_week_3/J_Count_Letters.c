#include <stdio.h>

int main(int argc, char const *argv[])
{
    char A;
    int count[26] = {0};
    while (scanf("%c", &A) != EOF)
    {
        count[A - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i-'a'] > 0)
        {
            printf("%c : %d\n", i , count[i-'a']);
        }
    }
  
    return 0;
}

//DONE
//Accepted
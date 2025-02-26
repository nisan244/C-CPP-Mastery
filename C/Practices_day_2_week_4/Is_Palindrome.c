#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) // Or  (char s[])
{
    int i = 0, j = strlen(s) - 1, result = 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            result = 0;
            break;
        }
        i++;
        j--;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    char s[1010];
    scanf("%s", &s);
    // printf("%d\n", is_palindrome(s));
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

// Done
// Accepted
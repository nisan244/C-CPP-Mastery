#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ar[100010];
    fgets(ar, 100010, stdin);
    for (int i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] == ',')
        {
            ar[i] = ' ';
        }
        else if (ar[i] >= 'a' && ar[i] <= 'z')
        {
            ar[i] -= 32;
        }
        else if (ar[i] >= 'A' && ar[i] <= 'Z')
        {
            ar[i] += 32;
        }
    }
    printf("%s", ar);
    return 0;
}

//DONE
//Accepted
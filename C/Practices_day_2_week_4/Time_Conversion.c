#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ar[15];
    scanf("%s", &ar);

    if (ar[8] == 'P')
    {
        if (ar[0] != '1' || ar[1] != '2')
        {
            ar[0]++;
            ar[1] += 2;
        }
    }
    else
    {
        if (ar[0] == '1' && ar[1] == '2')
        {
            ar[0] = '0';
            ar[1] = '0';
        }
    }
    ar[8] = '\0';
    printf("%s\n", ar);

    return 0;
}

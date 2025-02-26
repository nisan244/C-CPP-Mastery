// 19-4 Count Vowels

#include <stdio.h>

int count(char *ar, int i)
{
    if (ar[i] == '\0')
    {
        return 0;
    }

    int result = count(ar, i + 1);
    if (ar[i] >= 'A' && ar[i] <= 'Z')
    {
        ar[i] = ar[i] + 32;
    }
    if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
    {
        return result + 1;
    }
    else
    {
        return result;
    }
}

int main(int argc, char const *argv[])
{
    char ar[205];
    fgets(ar, 205, stdin);

    int final_value = count(ar, 0);
    printf("%d\n", final_value);

    return 0;
}

//DONE
//Accepted
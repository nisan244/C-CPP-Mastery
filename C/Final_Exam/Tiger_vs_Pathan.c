#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d", &T);

    for (int j = 0; j < T; j++)
    {
        int n;
        scanf("%d", &n);

        char ar[n];
        scanf("%s", &ar);
        int count = 0;
        int count_T = 0, count_P = 0;
        for (int i = 0; ar[i] != '\0'; i++)
        {
            if (ar[i] == 'T')
            {
                count_T++;
            }
            else if (ar[i] == 'P')
            {
                count_P++;
            }
            // count++;
        }
        if (count_T > count_P)
        {
            printf("Tiger\n");
        }
        else if (count_T < count_P)
        {
            printf("Pathaan\n");
        }
        else if (count_T == count_P)
        {
            printf("Draw\n");
        }
    }

    // printf("%d %d\n", count_T, count_P);
    // printf("%d\n", count);

    return 0;
}

//DONE
//Accepted
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = 5 + (n - 1) / 2;
    int symbol = 1;

    for (int i = 0; i < 6 + (n - 1) / 2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < symbol; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        symbol += 2;
    }
    int new_symbol = n, space_2 = 5;

    for (int i = 0; i < 5; i++)
    {

        for (int i = 0; i < space_2; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < new_symbol; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//DONE
//Accepted
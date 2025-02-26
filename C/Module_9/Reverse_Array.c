#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int i = 0, j = n-1;
    while (i < j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}



//------------------------- Reverse Array ---------------------------

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d ", array[i]);
//     }

//     return 0;
// }
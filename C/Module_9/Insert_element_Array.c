#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);

    for (int i = n; i >= position+1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
     
    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     int arr[5+1] = {10, 20, 30, 40, 50};

//     for (int i = 6; i >= 1; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[1] = 60;
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }
     
//     return 0;
// }
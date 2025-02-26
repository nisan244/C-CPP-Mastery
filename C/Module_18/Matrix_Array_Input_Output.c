// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int ar[5] [3];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("ar[%d][%d] ", i, j);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

//-------------------------------------------------------------

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ar[5] [3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ar[i][j]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
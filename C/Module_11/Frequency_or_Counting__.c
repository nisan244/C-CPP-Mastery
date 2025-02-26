// // 11-5 Counting or Frequency Array-I

// // number 

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);

//     int A[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     // int zero = 0, one = 0;
//     int count[10] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         // printf("%d ", A[i]);
//         // if (A[i] == 0)
//         // {
//         //     count[0]++;
//         // }
//         // if (A[i] == 1)
//         // {
//         //     count[1]++;
//         // }

//     //------ or ------------------
//         // int value = A[i];
//         // count[value]++;
//     // ------------ or -------------

//         count[A[i]]++;  //Easy process
        
//     }
//     // printf("0 -- %d\n", count[0]);
//     // printf("1 -- %d\n", count[1]);
//     // printf("2 -- %d\n", count[2]);
//     // printf("3 -- %d\n", count[3]);
//     // printf("4 -- %d\n", count[4]);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d - %d\n", i, count[A[i]]);
//     }
    
//     return 0;
// }


//--------------------- a, b, c, d... count -----------------------

// 11-5 Counting or Frequency Array-I

// Word 

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // int n;
    // scanf("%d", &n);

    char A[100];
    scanf("%s", A);
    int count[26] = {0};
    for (int i = 0; i < strlen(A); i++)
    {
        int value = A[i] - 'a';
        count[value]++;

    }
    // for (int i = 0; i < ; i++)
    // {
    // //------ or ------------------
    //     // int value = A[i];
    //     // count[value]++;
    // // ------------ or -------------

    //     count[A[i]]++;  //Easy process
        
    // }

//-------------------------

    // for (int i = 0; i < 26; i++)
    // {
    //     if (count[i] != 0)
    //     {
    //         printf("%c - %d\n", i + 'a', count[i]);
    //     }   
    // }
//-------------
    // for (int i = 0; i < strlen(A); i++)
    // {
    //     int value = A[i]-'a';
    //     printf("%c - %d\n", value + 'a', count[value]);
    // }
//------------------
    for (int i = 0; i < strlen(A); i++)
    {
        int value = A[i]-'a';
        if (count[value] != 0)
        {
            printf("%c : %d\n", value + 'a', count[value]);
        }
        count[value] = 0;     
    }

    return 0;
}
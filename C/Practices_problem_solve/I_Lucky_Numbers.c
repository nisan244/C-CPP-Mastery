#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
        
    int a = (n % 10);
    n = n/10;
    // printf("%d\n", a);

    int b = (n % 10);
    n = n / 10;
    // printf("%d\n", b);

    if (a % b == 0 || b % a == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}




///////////////////

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d", &n);
//    do
//    {
//     int a = (n % 10);
//     n = n/10;
//     // printf("%d\n", a);

//     int b = (n % 10);
//     n = n / 10;
   
        
    
//     // printf("%d\n", b);

//     if (a % b == 0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     } while (n != 0);

//     return 0;
// }
//15-4 Array and Pointer

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ar[5] = {10, 20, 30, 40, 50};
    printf("0 th index er address: %p\n", &ar[0]);

    printf(" 0 th index er address : %p\n", ar);

    printf("%d\n", *(ar+1));
    printf("%d\n", *(1+ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1[ar]);

    
    return 0;
}
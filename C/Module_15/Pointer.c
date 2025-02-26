//15-1 Pointers in C

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 100;
    int *new = &x;

    printf("X er address: %p\n", &x);

    printf("new er address: %p\n", new);

    printf("new er address: %p\n", &new);

    printf("new er memory size: %d\n", sizeof(new));

    printf("X er value: %d\n", x);

    printf("new er value: %d\n", *new);
    
    return 0;
}
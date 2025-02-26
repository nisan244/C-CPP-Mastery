#include <stdio.h>


void fun(int *p){
    printf("P er value: %p\n", p);
    *p = 500;
}

int main(int argc, char const *argv[])
{
    int x = 100;
    printf("x er address: %p\n", &x);
    fun(&x);
    printf("%d\n", x);

    
    return 0;
}
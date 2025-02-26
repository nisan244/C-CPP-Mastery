//14-5 No Return + No Parameter


#include <stdio.h>

void sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("%d\n", s);
}

int main(int argc, char const *argv[])
{
    
    sum();
    sum();
    return 0;
}
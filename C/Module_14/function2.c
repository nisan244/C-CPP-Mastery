//14-3 Return + No Parameter


#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}
int main(int argc, char const *argv[])
{
    
    int n = sum();
    printf("%d", n);
    
    return 0;
}
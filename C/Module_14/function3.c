//14-4 No Return + Parameter

#include <stdio.h>

void sum(int x , int y)
{
    int s = x + y;
    printf("%d", s);

}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    
    return 0;
}
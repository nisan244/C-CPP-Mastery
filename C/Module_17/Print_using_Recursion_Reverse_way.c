// 17-6 Print From 5 to 1 in Reverse Way

#include <stdio.h>

void fun(int i)
{
    if (i == 11)
    {
        return;
    }
    
    fun(i + 1);
    printf("%d\n", i);
}

int main(int argc, char const *argv[])
{
    fun(1);

    
    return 0;
}
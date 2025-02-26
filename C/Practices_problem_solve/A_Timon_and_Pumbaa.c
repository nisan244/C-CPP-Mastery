#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);

    if((n - m) <= 0){
        printf("0");
    }
    else{
        printf("%d\n", n-m);
    }

    return 0;
}
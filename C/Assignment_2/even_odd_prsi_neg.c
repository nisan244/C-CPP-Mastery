#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a;
    int even = 0, odd = 0, posi = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        
        if (a % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
        if (a > 0)
        {
            posi++;
        }
        else if (a<0)
        {
            neg++;
        }
    }
    printf("%d %d %d %d\n", even, odd, posi, neg);
    
    return 0;
}
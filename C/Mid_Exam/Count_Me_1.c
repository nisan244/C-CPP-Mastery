#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int A[n];
    int count_2 = 0;
    int count_3 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            count_2++;
        }
        else if (A[i] % 3 == 0)
        {
            count_3++;
        }     
        
    }
    printf("%d %d", count_2, count_3);
    
    return 0;
}

//DONE
//Accepted
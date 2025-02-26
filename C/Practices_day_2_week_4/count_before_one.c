#include <stdio.h>


int count_before_one(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        count++;

        // if ( a[i] > 1)
        // {
        //     count++;
        // }
        // else if (a[i] <= 1)
        // {
        //     break;
        // }
        // else
        // {
        //     break;
        // }
    }
    return count;
    
}

int main(int argc, char const *argv[])
{  
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", count_before_one(a, n));
    
    
    return 0;
}

//Done
//Accepted
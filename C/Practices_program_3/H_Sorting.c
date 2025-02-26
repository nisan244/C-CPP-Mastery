#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int a[n];

    // int a[] = {-20,12,2,5,6,3,9,10};
    int i, j, size = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     
    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                //swap number
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    // printf("After sorting : \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

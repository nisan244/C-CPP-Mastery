#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{   
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &A[i]);
    }
    int minimum = INT_MAX, maximum = INT_MIN, inx = 0, inx_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(A[i] > maximum)
        {
            maximum = A[i];
            inx = i;
        }

        if (A[i] < minimum){
            minimum = A[i];
            inx_2 = i;
        }
    }
    int i = inx, j = inx_2;
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    // printf("\n%d %d\n", minimum, maximum);
    // printf("%d %d\n", inx, inx_2);   
    return 0;
}

//DONE
//Accepted
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char A[10010];
    
    int count_small = 0;
    int count_capital = 0;
    int count_num = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &A);
        
        for (int i = 0; i < strlen(A); i++)
        {
            if (A[i] >= 'A' && A[i] <= 'Z')
            {
                count_capital++;
            }
            else if (A[i] >= 'a' && A[i] <= 'z')
            {
                count_small++;
            }
            else
            {
                count_num++;
            }
        }
        printf("%d %d %d\n", count_capital, count_small, count_num);
        count_capital = 0;
        count_small = 0;
        count_num = 0;   
    } 
    return 0;
}


//DONE
//Accepted

// if(A[i] >= '0' && A[i] <= '9')
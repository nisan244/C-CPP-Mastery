#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int Array[100010];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Array[i]);
    }
    
    int i = 0, k = n - 1;
    int value = 1;

    while (i < k) {
        if (Array[i] != Array[k]) {
            value = 0;
            break;
        }
        i++;
        k--;
    }
    if (value == 1) {
        printf("YES\n");
    } 
    else
    {
        printf("NO\n");
    }
 
    return 0;
}

//DONE
//Accepted
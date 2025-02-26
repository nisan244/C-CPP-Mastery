#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char Array[10010];
    scanf("%s", Array);
    
    int i = 0, k = strlen(Array) - 1;
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
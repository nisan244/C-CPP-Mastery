#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char ar[110];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &ar);

        int len = strlen(ar);
        if (len <= 10)
        {
            printf("%s\n", ar);
        }
        else
        {
            int mid_len = (len-2);
            printf("%c%d%c\n", ar[0], mid_len, ar[len-1]);
        }
    }

    return 0;
}

// //DONE
// // Accepted
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&ar[i]);
    }
    int inx, new_value;
    scanf("%d %d", &inx, &new_value);

    ar[inx] = new_value;

    // int x, y;
    // scanf("%d %d", &x, &y);

    // ar[x] = y;

    for (int i = n-1; i >= 0; i--){
        printf("%d ", ar[i]);
    }

    return 0;
}

// DONE
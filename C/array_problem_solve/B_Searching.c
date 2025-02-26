#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int n;
    int ans = -1;
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &A[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if(A[i] == x){
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}



//Linear search

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int num[] = { 10, 2, 30, 15, 28, 5};
//     int value = 15;
//     int position = -1;
//     int pos;

//     for(int i = 0; i < 6; i++){
//         if(value == num[i]){
//             position = i+1;
//             break;
//         }
//     }
//     if(position == -1){
//         printf("Not Found");
//     }
//     else{
//         printf("The position of %d is: %d\n", value, position);
//     }

    
//     return 0;
// }
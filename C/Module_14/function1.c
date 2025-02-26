//14-2 Return + Parameter


// #include <stdio.h>

// int sum(int x , int y){
//     int sum = x + y;
//     return sum;
// }

// int main(int argc, char const *argv[])
// {
    
//     printf("%d" ,sum(10, 20));
    
//     return 0;
// }

//----------------------------------

//14-2 Return + Parameter

#include <stdio.h>

int sum(int x , int y){
    int sum = x + y;
    return sum;
}

int main(int argc, char const *argv[])
{
    int a , b;
    scanf("%d %d", &a, &b);   
    printf("%d" ,sum(a, b));
    
    return 0;
}




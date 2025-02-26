// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int x = 10;
//     printf("%p\n", &x);
//     printf("%d\n", x);

//     int *n = &x;
//     printf("%p\n", n);

//     //Dereference
//     printf("%d\n", *n);

// //-------------------
// // Value change

//     *n = 600;
//     printf("%d\n", x);

//   return 0;
// }

// -------------------------------

#include <stdio.h>
int sum(int x, int y)
{
    int res = x + y;
    printf("%d\n", res);
    // return res;
}
int main()
{
    sum(20, 30);

    // int re = sum(5, 6);
    // printf("%d\n", re);
    // printf("%d\n", sum(52, 8));

    return 0;
}
